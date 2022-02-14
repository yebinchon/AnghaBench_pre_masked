
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int * FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(void)
{
 if (VAR_1) {
  FUNC_4(VAR_1);
  VAR_0 = 0;
  return (1);
 }
 if (VAR_3 == 0) {
  if (FUNC_3())
   FUNC_5(((void*)0));
  else
   FUNC_5(FUNC_2("PATH_FSTAB"));
 }
 if ((VAR_1 = FUNC_1(VAR_4, "re")) != ((void*)0)) {
  VAR_0 = 0;
  return (1);
 }
 FUNC_0(VAR_2);
 return (0);
}
