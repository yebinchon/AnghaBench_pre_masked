
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct internalvar {int value; int name; struct internalvar* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct internalvar* VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_3, int VAR_4)
{
  struct internalvar *VAR_5;
  int VAR_6 = 0;

  for (VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->next)
    {
      if (!VAR_6)
 {
   VAR_6 = 1;
 }
      FUNC_0 ("$%s = ", VAR_5->name);
      FUNC_2 (VAR_5->value, VAR_1, 0, VAR_0);
      FUNC_0 ("\n");
    }
  if (!VAR_6)
    FUNC_1 ("No debugger convenience variables now defined.\nConvenience variables have names starting with \"$\";\nuse \"set\" as in \"set $foo = 5\" to define them.\n");


}
