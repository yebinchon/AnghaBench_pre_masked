
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_txq {int vtntx_id; int vtntx_tq; } ;
struct vtnet_softc {int vtnet_max_vq_pairs; struct vtnet_txq* vtnet_txqs; struct vtnet_rxq* vtnet_rxqs; int vtnet_dev; } ;
struct vtnet_rxq {int vtnrx_id; int vtnrx_tq; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *,int,int ,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct vtnet_softc *VAR_1)
{
 device_t VAR_2;
 struct vtnet_rxq *VAR_3;
 struct vtnet_txq *VAR_4;
 int VAR_5, VAR_6;

 VAR_2 = VAR_1->vtnet_dev;
 for (VAR_5 = 0; VAR_5 < VAR_1->vtnet_max_vq_pairs; VAR_5++) {
  VAR_3 = &VAR_1->vtnet_rxqs[VAR_5];
  VAR_6 = FUNC_2(&VAR_3->vtnrx_tq, 1, VAR_0,
      "%s rxq %d", FUNC_0(VAR_2), VAR_3->vtnrx_id);
  if (VAR_6) {
   FUNC_1(VAR_2, "failed to start rx taskq %d\n",
       VAR_3->vtnrx_id);
  }

  VAR_4 = &VAR_1->vtnet_txqs[VAR_5];
  VAR_6 = FUNC_2(&VAR_4->vtntx_tq, 1, VAR_0,
      "%s txq %d", FUNC_0(VAR_2), VAR_4->vtntx_id);
  if (VAR_6) {
   FUNC_1(VAR_2, "failed to start tx taskq %d\n",
       VAR_4->vtntx_id);
  }
 }
}
