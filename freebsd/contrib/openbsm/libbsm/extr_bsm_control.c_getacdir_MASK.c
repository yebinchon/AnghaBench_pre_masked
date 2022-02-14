
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int ,char**) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (char*,char*,int) ;
 size_t FUNC_5 (char*) ;

int
FUNC_6(char *VAR_6, int VAR_7)
{
 char *VAR_8;
 int VAR_9 = 0;
 if (VAR_3 && VAR_5) {
  VAR_5 = 0;
  if (VAR_2 != ((void*)0))
   FUNC_0(VAR_2, 0, VAR_1);
  VAR_9 = 2;
 }
 if (FUNC_1(VAR_0, &VAR_8) < 0) {



  return (-2);
 }
 if (VAR_8 == ((void*)0)) {



  return (-1);
 }
 if (FUNC_5(VAR_8) >= (size_t)VAR_7) {



  return (-3);
 }
 FUNC_4(VAR_6, VAR_8, VAR_7);



 return (VAR_9);
}
