
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_chain_data {scalar_t__ sge_tx_cnt; scalar_t__ sge_tx_cons; scalar_t__ sge_tx_prod; int sge_tx_dmamap; int sge_tx_tag; } ;
struct sge_list_data {TYPE_1__* sge_tx_ring; } ;
struct sge_softc {struct sge_chain_data sge_cdata; struct sge_list_data sge_ldata; } ;
struct TYPE_2__ {int sge_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sge_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct sge_softc *VAR_5)
{
 struct sge_list_data *VAR_6;
 struct sge_chain_data *VAR_7;

 FUNC_0(VAR_5);
 VAR_6 = &VAR_5->sge_ldata;
 VAR_7 = &VAR_5->sge_cdata;
 FUNC_2(VAR_6->sge_tx_ring, VAR_4);
 VAR_6->sge_tx_ring[VAR_3 - 1].sge_flags = FUNC_3(VAR_2);
 FUNC_1(VAR_7->sge_tx_tag, VAR_7->sge_tx_dmamap,
     VAR_0 | VAR_1);
 VAR_7->sge_tx_prod = 0;
 VAR_7->sge_tx_cons = 0;
 VAR_7->sge_tx_cnt = 0;
 return (0);
}
