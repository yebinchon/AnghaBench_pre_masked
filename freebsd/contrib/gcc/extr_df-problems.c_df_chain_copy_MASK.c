
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_ref {int dummy; } ;
struct df_link {struct df_link* next; int ref; } ;
struct dataflow {int dummy; } ;


 int FUNC_0 (struct dataflow*,struct df_ref*,int ) ;

void
FUNC_1 (struct dataflow *VAR_0,
        struct df_ref *VAR_1,
        struct df_link *VAR_2)
{
  while (VAR_2)
    {
      FUNC_0 (VAR_0, VAR_1, VAR_2->ref);
      VAR_2 = VAR_2->next;
    }
}
