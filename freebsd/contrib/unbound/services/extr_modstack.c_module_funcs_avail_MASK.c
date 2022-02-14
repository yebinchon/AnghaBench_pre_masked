
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct module_func_block* (* fbgetfunctype ) () ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static fbgetfunctype*
FUNC_0(void)
{
        static struct module_func_block* (*VAR_8[])(void) = {
  &VAR_1,
  &VAR_5,
  &VAR_7,
  &VAR_3,
  ((void*)0)};
 return VAR_8;
}
