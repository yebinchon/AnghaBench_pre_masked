
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int error; } ;


 struct pthread* FUNC_0 () ;
 struct pthread* VAR_0 ;
 int VAR_1 ;

int *
FUNC_1(void)
{
 struct pthread *VAR_2;

 if (VAR_0 != ((void*)0)) {
  VAR_2 = FUNC_0();
  if (VAR_2 != ((void*)0) && VAR_2 != VAR_0)
   return (&VAR_2->error);
 }
 return (&VAR_1);
}
