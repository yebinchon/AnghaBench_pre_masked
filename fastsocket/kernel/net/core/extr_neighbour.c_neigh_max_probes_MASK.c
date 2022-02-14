
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {int nud_state; struct neigh_parms* parms; } ;
struct neigh_parms {int ucast_probes; int app_probes; int mcast_probes; } ;


 int VAR_0 ;

__attribute__((used)) static __inline__ int FUNC_0(struct neighbour *VAR_1)
{
 struct neigh_parms *VAR_2 = VAR_1->parms;
 return (VAR_1->nud_state & VAR_0 ?
  VAR_2->ucast_probes :
  VAR_2->ucast_probes + VAR_2->app_probes + VAR_2->mcast_probes);
}
