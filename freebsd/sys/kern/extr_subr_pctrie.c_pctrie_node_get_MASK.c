
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef void* uint16_t ;
struct pctrie_node {void* pn_clev; void* pn_count; int pn_owner; } ;
struct pctrie {int dummy; } ;
typedef struct pctrie_node* (* pctrie_alloc_t ) (struct pctrie*) ;



__attribute__((used)) static __inline struct pctrie_node *
FUNC_0(struct pctrie *VAR_0, pctrie_alloc_t VAR_1, uint64_t VAR_2,
    uint16_t VAR_3, uint16_t VAR_4)
{
 struct pctrie_node *VAR_5;

 VAR_5 = VAR_1(VAR_0);
 if (VAR_5 == ((void*)0))
  return (((void*)0));
 VAR_5->pn_owner = VAR_2;
 VAR_5->pn_count = VAR_3;
 VAR_5->pn_clev = VAR_4;

 return (VAR_5);
}
