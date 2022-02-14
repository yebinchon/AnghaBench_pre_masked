
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_txq {int vtntx_id; int * vtntx_tq; int vtntx_name; int vtntx_intrtask; int vtntx_defrtask; int * vtntx_br; int vtntx_mtx; int * vtntx_sg; struct vtnet_softc* vtntx_sc; } ;
struct vtnet_softc {int vtnet_tx_nsegs; int vtnet_dev; struct vtnet_txq* vtnet_txqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,struct vtnet_txq*) ;
 int VAR_4 ;
 int * FUNC_1 (int ,int ,int ,int *) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int *,int ) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int,char*,char*,int) ;
 int * FUNC_6 (int ,int ,int ,int **) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_7(struct vtnet_softc *VAR_8, int VAR_9)
{
 struct vtnet_txq *VAR_10;

 VAR_10 = &VAR_8->vtnet_txqs[VAR_9];

 FUNC_5(VAR_10->vtntx_name, sizeof(VAR_10->vtntx_name), "%s-tx%d",
     FUNC_2(VAR_8->vtnet_dev), VAR_9);
 FUNC_3(&VAR_10->vtntx_mtx, VAR_10->vtntx_name, ((void*)0), VAR_1);

 VAR_10->vtntx_sc = VAR_8;
 VAR_10->vtntx_id = VAR_9;

 VAR_10->vtntx_sg = FUNC_4(VAR_8->vtnet_tx_nsegs, VAR_3);
 if (VAR_10->vtntx_sg == ((void*)0))
  return (VAR_0);


 VAR_10->vtntx_br = FUNC_1(VAR_4, VAR_2,
     VAR_3, &VAR_10->vtntx_mtx);
 if (VAR_10->vtntx_br == ((void*)0))
  return (VAR_0);

 FUNC_0(&VAR_10->vtntx_defrtask, 0, VAR_6, VAR_10);

 FUNC_0(&VAR_10->vtntx_intrtask, 0, VAR_7, VAR_10);
 VAR_10->vtntx_tq = FUNC_6(VAR_10->vtntx_name, VAR_3,
     VAR_5, &VAR_10->vtntx_tq);
 if (VAR_10->vtntx_tq == ((void*)0))
  return (VAR_0);

 return (0);
}
