
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending {int nsyms; struct pending* next; int * symbol; } ;


 int FUNC_0 (int ,struct pending**) ;
 struct pending* VAR_0 ;

void
FUNC_1 (struct pending **VAR_1, struct pending **VAR_2)
{
  int VAR_3;

  if (!VAR_1 || !*VAR_1)
    return;


  for (VAR_3 = 0; VAR_3 < (*VAR_1)->nsyms; VAR_3++)
    FUNC_0 ((*VAR_1)->symbol[VAR_3], VAR_2);


  FUNC_1 (&(*VAR_1)->next, VAR_2);


  (*VAR_1)->next = VAR_0;
  VAR_0 = (*VAR_1);
}
