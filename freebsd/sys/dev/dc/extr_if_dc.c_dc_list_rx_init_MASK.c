
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_list_data {TYPE_1__* dc_rx_list; } ;
struct dc_chain_data {scalar_t__ dc_rx_prod; } ;
struct dc_softc {int dc_rx_lmap; int dc_rx_ltag; struct dc_list_data dc_ldata; struct dc_chain_data dc_cdata; } ;
struct TYPE_2__ {int dc_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dc_softc*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (struct dc_softc*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct dc_softc *VAR_4)
{
 struct dc_chain_data *VAR_5;
 struct dc_list_data *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = &VAR_4->dc_cdata;
 VAR_6 = &VAR_4->dc_ldata;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (FUNC_2(VAR_4, VAR_7) != 0)
   return (VAR_3);
  if (VAR_7 == VAR_2 - 1)
   VAR_8 = 0;
  else
   VAR_8 = VAR_7 + 1;
  VAR_6->dc_rx_list[VAR_7].dc_next = FUNC_3(FUNC_0(VAR_4, VAR_8));
 }

 VAR_5->dc_rx_prod = 0;
 FUNC_1(VAR_4->dc_rx_ltag, VAR_4->dc_rx_lmap,
     VAR_1 | VAR_0);
 return (0);
}
