
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_rx_nsegs; int vtnet_dev; struct vtnet_rxq* vtnet_rxqs; } ;
struct vtnet_rxq {int vtnrx_id; int * vtnrx_tq; int vtnrx_name; int vtnrx_intrtask; int * vtnrx_sg; struct vtnet_softc* vtnrx_sc; int vtnrx_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,struct vtnet_rxq*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *,int ) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,char*,char*,int) ;
 int * FUNC_5 (int ,int ,int ,int **) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6(struct vtnet_softc *VAR_5, int VAR_6)
{
 struct vtnet_rxq *VAR_7;

 VAR_7 = &VAR_5->vtnet_rxqs[VAR_6];

 FUNC_4(VAR_7->vtnrx_name, sizeof(VAR_7->vtnrx_name), "%s-rx%d",
     FUNC_1(VAR_5->vtnet_dev), VAR_6);
 FUNC_2(&VAR_7->vtnrx_mtx, VAR_7->vtnrx_name, ((void*)0), VAR_1);

 VAR_7->vtnrx_sc = VAR_5;
 VAR_7->vtnrx_id = VAR_6;

 VAR_7->vtnrx_sg = FUNC_3(VAR_5->vtnet_rx_nsegs, VAR_2);
 if (VAR_7->vtnrx_sg == ((void*)0))
  return (VAR_0);

 FUNC_0(&VAR_7->vtnrx_intrtask, 0, VAR_4, VAR_7);
 VAR_7->vtnrx_tq = FUNC_5(VAR_7->vtnrx_name, VAR_2,
     VAR_3, &VAR_7->vtnrx_tq);

 return (VAR_7->vtnrx_tq == ((void*)0) ? VAR_0 : 0);
}
