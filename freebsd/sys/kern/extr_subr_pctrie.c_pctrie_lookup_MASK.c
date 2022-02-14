
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pctrie_node {struct pctrie_node** pn_child; int pn_clev; } ;
struct pctrie {int dummy; } ;


 struct pctrie_node* FUNC_0 (struct pctrie*) ;
 scalar_t__ FUNC_1 (struct pctrie_node*) ;
 scalar_t__ FUNC_2 (struct pctrie_node*,int ) ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (struct pctrie_node*) ;

uint64_t *
FUNC_5(struct pctrie *VAR_0, uint64_t VAR_1)
{
 struct pctrie_node *VAR_2;
 uint64_t *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_0(VAR_0);
 while (VAR_2 != ((void*)0)) {
  if (FUNC_1(VAR_2)) {
   VAR_3 = FUNC_4(VAR_2);
   if (*VAR_3 == VAR_1)
    return (VAR_3);
   else
    break;
  } else if (FUNC_2(VAR_2, VAR_1))
   break;
  VAR_4 = FUNC_3(VAR_1, VAR_2->pn_clev);
  VAR_2 = VAR_2->pn_child[VAR_4];
 }
 return (((void*)0));
}
