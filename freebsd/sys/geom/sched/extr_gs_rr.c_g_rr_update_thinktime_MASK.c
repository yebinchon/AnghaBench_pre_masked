
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_rr_queue {void* q_lastsub; int q_bionum; int q_thinktime; TYPE_1__* q_sc; } ;
struct TYPE_4__ {int wait_ms; } ;
struct TYPE_3__ {struct g_rr_queue* sc_active; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 TYPE_2__ VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static inline void
FUNC_2(struct g_rr_queue *VAR_2)
{
 int VAR_3 = VAR_1 - VAR_2->q_lastsub, VAR_4 = FUNC_1(&VAR_0.wait_ms, 2);

 if (VAR_2->q_sc->sc_active != VAR_2)
  return;

 VAR_2->q_lastsub = VAR_1;
 VAR_3 = (VAR_3 > 2 * VAR_4) ? 2 * VAR_4 : VAR_3;
 if (VAR_2->q_bionum > 7)
  FUNC_0(&VAR_2->q_thinktime, VAR_3);
}
