
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
struct pctrie_node {void** pn_child; } ;


 uintptr_t VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static __inline void
FUNC_1(struct pctrie_node *VAR_1, uint64_t VAR_2, uint16_t VAR_3,
    uint64_t *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 VAR_1->pn_child[VAR_5] = (void *)((uintptr_t)VAR_4 | VAR_0);
}
