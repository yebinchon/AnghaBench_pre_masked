
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static const char *FUNC_2(void)
{
 const char *VAR_0 = FUNC_0(((void*)0));

 if (!VAR_0)
  FUNC_1("Your kernel not support debugfs filesystem");

 return VAR_0;
}
