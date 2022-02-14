
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfe_softc {int bfe_tx_map; int bfe_tx_tag; TYPE_1__* bfe_tx_ring; int bfe_tx_list; scalar_t__ bfe_tx_cons; scalar_t__ bfe_tx_prod; scalar_t__ bfe_tx_cnt; } ;
struct TYPE_2__ {int * bfe_mbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct bfe_softc *VAR_4)
{
 int VAR_5;

 VAR_4->bfe_tx_cnt = VAR_4->bfe_tx_prod = VAR_4->bfe_tx_cons = 0;
 FUNC_1(VAR_4->bfe_tx_list, VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_4->bfe_tx_ring[VAR_5].bfe_mbuf = ((void*)0);

 FUNC_0(VAR_4->bfe_tx_tag, VAR_4->bfe_tx_map,
     VAR_2 | VAR_3);
}
