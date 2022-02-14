
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pctrie_node {scalar_t__ pn_count; struct pctrie_node** pn_child; } ;
struct pctrie {int dummy; } ;
typedef int pctrie_free_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct pctrie_node*) ;
 int FUNC_2 (struct pctrie*,struct pctrie_node*,int ) ;

__attribute__((used)) static void
FUNC_3(struct pctrie *VAR_1, struct pctrie_node *VAR_2,
    pctrie_free_t VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2->pn_count <= VAR_0,
     ("pctrie_reclaim_allnodes_int: bad count in node %p", VAR_2));
 for (VAR_4 = 0; VAR_2->pn_count != 0; VAR_4++) {
  if (VAR_2->pn_child[VAR_4] == ((void*)0))
   continue;
  if (!FUNC_1(VAR_2->pn_child[VAR_4]))
   FUNC_3(VAR_1,
       VAR_2->pn_child[VAR_4], VAR_3);
  VAR_2->pn_child[VAR_4] = ((void*)0);
  VAR_2->pn_count--;
 }
 FUNC_2(VAR_1, VAR_2, VAR_3);
}
