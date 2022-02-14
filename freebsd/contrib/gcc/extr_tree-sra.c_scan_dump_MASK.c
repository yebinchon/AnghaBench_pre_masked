
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sra_elt {int n_uses; int n_copies; struct sra_elt* sibling; struct sra_elt* groups; struct sra_elt* children; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sra_elt*) ;
 int FUNC_1 (int ,char*,int,int) ;

__attribute__((used)) static void
FUNC_2 (struct sra_elt *VAR_1)
{
  struct sra_elt *VAR_2;

  FUNC_0 (VAR_0, VAR_1);
  FUNC_1 (VAR_0, ": n_uses=%u n_copies=%u\n", VAR_1->n_uses, VAR_1->n_copies);

  for (VAR_2 = VAR_1->children; VAR_2 ; VAR_2 = VAR_2->sibling)
    FUNC_2 (VAR_2);

  for (VAR_2 = VAR_1->groups; VAR_2 ; VAR_2 = VAR_2->sibling)
    FUNC_2 (VAR_2);
}
