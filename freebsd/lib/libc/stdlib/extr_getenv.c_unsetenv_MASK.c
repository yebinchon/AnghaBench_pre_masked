
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active; scalar_t__ putenv; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (char const*,size_t,int*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 size_t FUNC_5 (char const*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_6(const char *VAR_5)
{
 int VAR_6;
 size_t VAR_7;
 int VAR_8;


 if (VAR_5 == ((void*)0) || (VAR_7 = FUNC_5(VAR_5)) == 0) {
  VAR_4 = VAR_0;
  return (-1);
 }


 if (FUNC_2() == -1 || (VAR_2 == ((void*)0) && FUNC_0() == -1))
  return (-1);



 VAR_6 = VAR_3 - 1;
 VAR_8 = VAR_1;
 while (FUNC_1(VAR_5, VAR_7, &VAR_6, 1) != ((void*)0)) {
  VAR_2[VAR_6].active = 0;
  if (VAR_2[VAR_6].putenv)
   FUNC_4(VAR_6);
  VAR_6--;
  VAR_8--;
 }
 if (VAR_8 != VAR_1)
  FUNC_3(VAR_8);

 return (0);
}
