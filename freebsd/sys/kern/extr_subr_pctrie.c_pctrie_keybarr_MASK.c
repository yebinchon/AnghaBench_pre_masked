
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pctrie_node {scalar_t__ pn_clev; scalar_t__ pn_owner; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static __inline bool
FUNC_1(struct pctrie_node *VAR_1, uint64_t VAR_2)
{

 if (VAR_1->pn_clev < VAR_0) {
  VAR_2 = FUNC_0(VAR_2, VAR_1->pn_clev + 1);
  return (VAR_2 != VAR_1->pn_owner);
 }
 return (0);
}
