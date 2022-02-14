
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rl_rx_desc_cnt; scalar_t__ rl_rx_prodidx; int rl_rx_list_map; int rl_rx_list_tag; TYPE_1__* rl_jrx_desc; int rl_rx_list; } ;
struct rl_softc {scalar_t__ rl_int_rx_act; int * rl_tail; int rl_head; TYPE_2__ rl_ldata; } ;
struct rl_desc {int dummy; } ;
struct TYPE_3__ {int * rx_m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct rl_softc*,int) ;

__attribute__((used)) static int
FUNC_3(struct rl_softc *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_1(VAR_2->rl_ldata.rl_rx_list,
     VAR_2->rl_ldata.rl_rx_desc_cnt * sizeof(struct rl_desc));
 for (VAR_4 = 0; VAR_4 < VAR_2->rl_ldata.rl_rx_desc_cnt; VAR_4++) {
  VAR_2->rl_ldata.rl_jrx_desc[VAR_4].rx_m = ((void*)0);
  if ((VAR_3 = FUNC_2(VAR_2, VAR_4)) != 0)
   return (VAR_3);
 }

 FUNC_0(VAR_2->rl_ldata.rl_rx_list_tag,
     VAR_2->rl_ldata.rl_rx_list_map,
     VAR_1 | VAR_0);

 VAR_2->rl_ldata.rl_rx_prodidx = 0;
 VAR_2->rl_head = *(VAR_2->rl_tail = ((void*)0));
 VAR_2->rl_int_rx_act = 0;

 return (0);
}
