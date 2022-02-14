
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct netmap_kring {scalar_t__ nkr_num_slots; int nr_hwtail; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline int
FUNC_2(struct netmap_kring *VAR_0, uint32_t VAR_1)
{
 return (FUNC_0(VAR_0->nr_hwtail) == FUNC_1(VAR_1,
    VAR_0->nkr_num_slots - 1));
}
