
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rl_tx_desc_cnt; int rl_tx_free; scalar_t__ rl_tx_considx; scalar_t__ rl_tx_prodidx; int rl_tx_list_map; int rl_tx_list_tag; struct rl_desc* rl_tx_list; TYPE_1__* rl_tx_desc; } ;
struct rl_softc {TYPE_2__ rl_ldata; } ;
struct rl_desc {int rl_cmdstat; } ;
struct TYPE_3__ {int * tx_m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rl_softc*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct rl_desc*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rl_softc*) ;

__attribute__((used)) static int
FUNC_5(struct rl_softc *VAR_3)
{
 struct rl_desc *VAR_4;
 int VAR_5;

 FUNC_0(VAR_3);

 FUNC_2(VAR_3->rl_ldata.rl_tx_list,
     VAR_3->rl_ldata.rl_tx_desc_cnt * sizeof(struct rl_desc));
 for (VAR_5 = 0; VAR_5 < VAR_3->rl_ldata.rl_tx_desc_cnt; VAR_5++)
  VAR_3->rl_ldata.rl_tx_desc[VAR_5].tx_m = ((void*)0);




 VAR_4 = &VAR_3->rl_ldata.rl_tx_list[VAR_3->rl_ldata.rl_tx_desc_cnt - 1];
 VAR_4->rl_cmdstat |= FUNC_3(VAR_2);

 FUNC_1(VAR_3->rl_ldata.rl_tx_list_tag,
     VAR_3->rl_ldata.rl_tx_list_map,
     VAR_0 | VAR_1);

 VAR_3->rl_ldata.rl_tx_prodidx = 0;
 VAR_3->rl_ldata.rl_tx_considx = 0;
 VAR_3->rl_ldata.rl_tx_free = VAR_3->rl_ldata.rl_tx_desc_cnt;

 return (0);
}
