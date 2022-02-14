
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sub_section; int section; struct TYPE_3__* next; } ;
typedef TYPE_1__ literal_pool ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3 (void)
{
  literal_pool * VAR_1;

  for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
    {

      FUNC_2 (VAR_1->section, VAR_1->sub_section);



      FUNC_1 (0);
    }
}
