
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_range_desc {int length; } ;
typedef scalar_t__ off_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct scsi_range_desc *VAR_0, int VAR_1, off_t VAR_2,
    int *VAR_3, off_t *VAR_4)
{
 off_t VAR_5;
 int VAR_6;

 VAR_6 = 0;
 VAR_5 = 0;
 while (VAR_6 < VAR_1) {
  if (VAR_2 - VAR_5 < FUNC_0(VAR_0[VAR_6].length)) {
   *VAR_3 = VAR_6;
   *VAR_4 = VAR_2 - VAR_5;
   return (0);
  }
  VAR_5 += FUNC_0(VAR_0[VAR_6].length);
  VAR_6++;
 }
 return (-1);
}
