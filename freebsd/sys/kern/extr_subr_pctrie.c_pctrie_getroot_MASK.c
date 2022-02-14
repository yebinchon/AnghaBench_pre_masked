
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pctrie_node {int dummy; } ;
struct pctrie {scalar_t__ pt_root; } ;



__attribute__((used)) static __inline struct pctrie_node *
FUNC_0(struct pctrie *VAR_0)
{

 return ((struct pctrie_node *)VAR_0->pt_root);
}
