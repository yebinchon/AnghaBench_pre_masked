
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pctrie_node {scalar_t__ pn_count; int ** pn_child; } ;
struct pctrie {int dummy; } ;
typedef int (* pctrie_free_t ) (struct pctrie*,struct pctrie_node*) ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;

__attribute__((used)) static __inline void
FUNC_1(struct pctrie *VAR_1, struct pctrie_node *VAR_2,
    pctrie_free_t VAR_3)
{
 VAR_3(VAR_1, VAR_2);
}
