
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct scsi_range_desc {int length; int lba; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct scsi_range_desc *VAR_0, int VAR_1)
{
 uint64_t VAR_2, VAR_3;
 uint32_t VAR_4, VAR_5;
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_1 - 1; VAR_6++) {
  VAR_2 = FUNC_1(VAR_0[VAR_6].lba);
  VAR_4 = FUNC_0(VAR_0[VAR_6].length);
  for (VAR_7 = VAR_6 + 1; VAR_7 < VAR_1; VAR_7++) {
   VAR_3 = FUNC_1(VAR_0[VAR_7].lba);
   VAR_5 = FUNC_0(VAR_0[VAR_7].length);
   if (VAR_2 + VAR_4 > VAR_3 && VAR_3 + VAR_5 > VAR_2)
    return (-1);
  }
 }
 return (0);
}
