
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfe_softc {int bfe_rx_map; int bfe_rx_tag; struct bfe_rx_data* bfe_rx_ring; int bfe_rx_list; scalar_t__ bfe_rx_cons; scalar_t__ bfe_rx_prod; } ;
struct bfe_rx_data {scalar_t__ bfe_ctrl; int * bfe_mbuf; } ;
struct bfe_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bfe_softc*,int ,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct bfe_softc*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct bfe_softc *VAR_6)
{
 struct bfe_rx_data *VAR_7;
 int VAR_8;

 VAR_6->bfe_rx_prod = VAR_6->bfe_rx_cons = 0;
 FUNC_3(VAR_6->bfe_rx_list, VAR_2);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_7 = &VAR_6->bfe_rx_ring[VAR_8];
  VAR_7->bfe_mbuf = ((void*)0);
  VAR_7->bfe_ctrl = 0;
  if (FUNC_1(VAR_6, VAR_8) != 0)
   return (VAR_5);
 }

 FUNC_2(VAR_6->bfe_rx_tag, VAR_6->bfe_rx_map,
     VAR_3 | VAR_4);
 FUNC_0(VAR_6, VAR_0, (VAR_8 * sizeof(struct bfe_desc)));

 return (0);
}
