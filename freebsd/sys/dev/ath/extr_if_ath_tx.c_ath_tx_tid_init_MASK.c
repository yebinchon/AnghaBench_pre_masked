
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tid_q; } ;
struct ath_tid {int tid; int ac; scalar_t__ cleanup_inprogress; scalar_t__ hwq_depth; scalar_t__ sched; scalar_t__ paused; scalar_t__ baw_tail; scalar_t__ baw_head; int ** tx_buf; struct ath_node* an; TYPE_1__ filtq; int tid_q; } ;
struct ath_softc {int dummy; } ;
struct ath_node {int clrdmask; struct ath_tid* an_tid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ath_tid*,int) ;

void
FUNC_3(struct ath_softc *VAR_4, struct ath_node *VAR_5)
{
 int VAR_6, VAR_7;
 struct ath_tid *VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_8 = &VAR_5->an_tid[VAR_6];


  FUNC_2(VAR_8, sizeof(*VAR_8));

  FUNC_0(&VAR_8->tid_q);
  FUNC_0(&VAR_8->filtq.tid_q);
  VAR_8->tid = VAR_6;
  VAR_8->an = VAR_5;
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
   VAR_8->tx_buf[VAR_7] = ((void*)0);
  VAR_8->baw_head = VAR_8->baw_tail = 0;
  VAR_8->paused = 0;
  VAR_8->sched = 0;
  VAR_8->hwq_depth = 0;
  VAR_8->cleanup_inprogress = 0;
  if (VAR_6 == VAR_2)
   VAR_8->ac = VAR_0;
  else
   VAR_8->ac = FUNC_1(VAR_6);
 }
 VAR_5->clrdmask = 1;
}
