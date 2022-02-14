
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* first_attr; } ;
typedef TYPE_1__ abbrev_entry ;
typedef TYPE_1__ abbrev_attr ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  abbrev_entry *VAR_2;

  for (VAR_2 = VAR_0; VAR_2;)
    {
      abbrev_entry *VAR_3 = VAR_2->next;
      abbrev_attr *VAR_4;

      for (VAR_4 = VAR_2->first_attr; VAR_4;)
 {
   abbrev_attr *VAR_5 = VAR_4->next;

   FUNC_0 (VAR_4);
   VAR_4 = VAR_5;
 }

      FUNC_0 (VAR_2);
      VAR_2 = VAR_3;
    }

  VAR_1 = VAR_0 = ((void*)0);
}
