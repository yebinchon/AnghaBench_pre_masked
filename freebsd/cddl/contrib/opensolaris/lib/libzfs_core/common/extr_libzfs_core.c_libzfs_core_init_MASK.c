
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(void)
{
 (void) FUNC_1(&VAR_3);
 if (VAR_4 == 0) {
  VAR_2 = FUNC_0("/dev/zfs", VAR_0);
  if (VAR_2 < 0) {
   (void) FUNC_2(&VAR_3);
   return (VAR_1);
  }
 }
 VAR_4++;
 (void) FUNC_2(&VAR_3);

 return (0);
}
