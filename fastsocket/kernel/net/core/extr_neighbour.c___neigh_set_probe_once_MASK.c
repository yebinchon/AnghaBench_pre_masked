
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neighbour {int nud_state; TYPE_1__* parms; int probes; scalar_t__ updated; } ;
struct TYPE_2__ {scalar_t__ retrans_time; int ucast_probes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct neighbour*,scalar_t__) ;

void FUNC_2(struct neighbour *VAR_3)
{
 VAR_3->updated = VAR_2;
 if (!(VAR_3->nud_state & VAR_0))
  return;
 VAR_3->nud_state = VAR_1;
 FUNC_0(&VAR_3->probes, VAR_3->parms->ucast_probes);
 FUNC_1(VAR_3,
   VAR_2 + VAR_3->parms->retrans_time);
}
