
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct use {struct use* next; } ;


 int FUNC_0 (struct use*) ;

__attribute__((used)) static void
FUNC_1 (struct use *VAR_0)
{
  struct use *VAR_1;

  for (; VAR_0; VAR_0 = VAR_1)
    {
      VAR_1 = VAR_0->next;
      FUNC_0 (VAR_0);
    }
}
