
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_long ;
struct g_sched_softc {size_t sc_mask; struct g_hash* sc_hash; } ;
struct g_hash {int dummy; } ;



__attribute__((used)) static inline struct g_hash *
FUNC_0(struct g_sched_softc *VAR_0, u_long VAR_1)
{

 return (&VAR_0->sc_hash[VAR_1 & VAR_0->sc_mask]);
}
