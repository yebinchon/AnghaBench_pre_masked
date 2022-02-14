
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rl_tx_list_map; int rl_tx_list_tag; } ;
struct rl_softc {int rl_watchdog_timer; int rl_txstart; TYPE_1__ rl_ldata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rl_softc*,int ,int ) ;
 int FUNC_1 (struct rl_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct rl_softc *VAR_4)
{


 FUNC_2(VAR_4->rl_ldata.rl_tx_list_tag,
     VAR_4->rl_ldata.rl_tx_list_map,
     VAR_1|VAR_0);

 FUNC_0(VAR_4, VAR_4->rl_txstart, VAR_3);
 VAR_4->rl_watchdog_timer = 5;
}
