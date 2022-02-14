
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct charset {struct charset* next; } ;


 struct charset* VAR_0 ;

__attribute__((used)) static void
FUNC_0 (struct charset *VAR_1)
{
  struct charset **VAR_2;



  for (VAR_2 = &VAR_0; *VAR_2; VAR_2 = &(*VAR_2)->next)
    ;

  VAR_1->next = 0;
  *VAR_2 = VAR_1;
}
