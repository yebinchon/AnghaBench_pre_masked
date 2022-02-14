
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int esm_map; int esm_tag; } ;
struct sfxge_evq {scalar_t__ init_state; scalar_t__ rx_done; scalar_t__ tx_done; int read_ptr; int common; int * txq; int ** txqs; TYPE_1__ mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sfxge_evq*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct sfxge_evq*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int *,int *,struct sfxge_evq*) ;
 int FUNC_6 (int ,int ) ;
 int VAR_5 ;
 int FUNC_7 (struct sfxge_evq*,int ) ;

int
FUNC_8(struct sfxge_evq *VAR_6)
{
 int VAR_7;

 FUNC_1(VAR_6);

 if (FUNC_3(VAR_6->init_state != VAR_4 &&
       VAR_6->init_state != VAR_3)) {
  VAR_7 = VAR_2;
  goto fail;
 }


 FUNC_4(VAR_6->mem.esm_tag, VAR_6->mem.esm_map,
     VAR_0);

 FUNC_0(VAR_6->rx_done == 0, ("evq->rx_done != 0"));
 FUNC_0(VAR_6->tx_done == 0, ("evq->tx_done != 0"));
 FUNC_0(VAR_6->txq == ((void*)0), ("evq->txq != NULL"));
 FUNC_0(VAR_6->txqs == &VAR_6->txq, ("evq->txqs != &evq->txq"));


 FUNC_5(VAR_6->common, &VAR_6->read_ptr, &VAR_5, VAR_6);

 VAR_6->rx_done = 0;
 VAR_6->tx_done = 0;


 FUNC_7(VAR_6, VAR_1);


 if ((VAR_7 = FUNC_6(VAR_6->common, VAR_6->read_ptr)) != 0)
  goto fail;

 FUNC_2(VAR_6);

 return (0);

fail:
 FUNC_2(VAR_6);
 return (VAR_7);
}
