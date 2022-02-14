
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pctrie_node {int dummy; } ;
struct pctrie {int dummy; } ;
typedef int pctrie_free_t ;


 struct pctrie_node* FUNC_0 (struct pctrie*) ;
 int FUNC_1 (struct pctrie_node*) ;
 int FUNC_2 (struct pctrie*,struct pctrie_node*,int ) ;
 int FUNC_3 (struct pctrie*,int *) ;

void
FUNC_4(struct pctrie *VAR_0, pctrie_free_t VAR_1)
{
 struct pctrie_node *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 == ((void*)0))
  return;
 FUNC_3(VAR_0, ((void*)0));
 if (!FUNC_1(VAR_2))
  FUNC_2(VAR_0, VAR_2, VAR_1);
}
