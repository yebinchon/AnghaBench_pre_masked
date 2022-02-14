
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct captured_main_args {int argc; char** argv; } ;


 int FUNC_0 (int,char*) ;
 char** FUNC_1 (char**,int) ;

__attribute__((used)) static void
FUNC_2(struct captured_main_args *VAR_0, char *VAR_1)
{

 VAR_0->argc++;
 VAR_0->argv = FUNC_1(VAR_0->argv, (VAR_0->argc + 1) * sizeof(char *));
 if (VAR_0->argv == ((void*)0))
  FUNC_0(1, "Out of memory building argument list");
 VAR_0->argv[VAR_0->argc] = VAR_1;
}
