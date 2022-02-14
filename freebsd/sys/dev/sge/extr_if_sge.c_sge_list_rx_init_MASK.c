
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sge_rx_ring; } ;
struct sge_chain_data {int sge_rx_dmamap; int sge_rx_tag; scalar_t__ sge_rx_cons; } ;
struct sge_softc {TYPE_1__ sge_ldata; struct sge_chain_data sge_cdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sge_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct sge_softc*,int) ;

__attribute__((used)) static int
FUNC_4(struct sge_softc *VAR_5)
{
 struct sge_chain_data *VAR_6;
 int VAR_7;

 FUNC_0(VAR_5);
 VAR_6 = &VAR_5->sge_cdata;
 VAR_6->sge_rx_cons = 0;
 FUNC_2(VAR_5->sge_ldata.sge_rx_ring, VAR_4);
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  if (FUNC_3(VAR_5, VAR_7) != 0)
   return (VAR_2);
 }
 FUNC_1(VAR_6->sge_rx_tag, VAR_6->sge_rx_dmamap,
     VAR_0 | VAR_1);
 return (0);
}
