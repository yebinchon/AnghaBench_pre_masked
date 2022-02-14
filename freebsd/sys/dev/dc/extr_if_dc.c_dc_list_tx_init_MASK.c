
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_list_data {TYPE_1__* dc_tx_list; } ;
struct dc_chain_data {scalar_t__ dc_tx_pkts; scalar_t__ dc_tx_cnt; scalar_t__ dc_tx_cons; scalar_t__ dc_tx_prod; int ** dc_tx_chain; } ;
struct dc_softc {int dc_tx_lmap; int dc_tx_ltag; struct dc_list_data dc_ldata; struct dc_chain_data dc_cdata; } ;
struct TYPE_2__ {int dc_next; scalar_t__ dc_data; scalar_t__ dc_ctl; scalar_t__ dc_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dc_softc*,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct dc_softc *VAR_3)
{
 struct dc_chain_data *VAR_4;
 struct dc_list_data *VAR_5;
 int VAR_6, VAR_7;

 VAR_4 = &VAR_3->dc_cdata;
 VAR_5 = &VAR_3->dc_ldata;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_6 == VAR_2 - 1)
   VAR_7 = 0;
  else
   VAR_7 = VAR_6 + 1;
  VAR_5->dc_tx_list[VAR_6].dc_status = 0;
  VAR_5->dc_tx_list[VAR_6].dc_ctl = 0;
  VAR_5->dc_tx_list[VAR_6].dc_data = 0;
  VAR_5->dc_tx_list[VAR_6].dc_next = FUNC_2(FUNC_0(VAR_3, VAR_7));
  VAR_4->dc_tx_chain[VAR_6] = ((void*)0);
 }

 VAR_4->dc_tx_prod = VAR_4->dc_tx_cons = VAR_4->dc_tx_cnt = 0;
 VAR_4->dc_tx_pkts = 0;
 FUNC_1(VAR_3->dc_tx_ltag, VAR_3->dc_tx_lmap,
     VAR_1 | VAR_0);
 return (0);
}
