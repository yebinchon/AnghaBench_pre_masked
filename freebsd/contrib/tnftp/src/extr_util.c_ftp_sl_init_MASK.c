
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringList ;


 int FUNC_0 (int,char*) ;
 int * FUNC_1 () ;

StringList *
FUNC_2(void)
{
 StringList *VAR_0;

 VAR_0 = FUNC_1();
 if (VAR_0 == ((void*)0))
  FUNC_0(1, "Unable to allocate memory for stringlist");
 return (VAR_0);
}
