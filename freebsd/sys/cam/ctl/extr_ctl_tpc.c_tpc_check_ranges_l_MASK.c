
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct scsi_range_desc {int length; int lba; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct scsi_range_desc *VAR_0, int VAR_1, uint64_t VAR_2,
    uint64_t *VAR_3)
{
 uint64_t VAR_4;
 uint32_t VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_4 = FUNC_2(VAR_0[VAR_6].lba);
  VAR_5 = FUNC_1(VAR_0[VAR_6].length);
  if (VAR_4 + VAR_5 < VAR_4 || VAR_4 + VAR_5 > VAR_2 + 1) {
   *VAR_3 = FUNC_0(VAR_4, VAR_2 + 1);
   return (-1);
  }
 }
 return (0);
}
