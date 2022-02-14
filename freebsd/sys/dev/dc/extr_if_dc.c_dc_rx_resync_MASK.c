
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dc_rx_prod; } ;
struct TYPE_4__ {struct dc_desc* dc_rx_list; } ;
struct dc_softc {TYPE_1__ dc_cdata; TYPE_2__ dc_ldata; } ;
struct dc_desc {int dc_status; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct dc_softc *VAR_3)
{
 struct dc_desc *VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = VAR_3->dc_cdata.dc_rx_prod;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = &VAR_3->dc_ldata.dc_rx_list[VAR_6];
  if (!(FUNC_1(VAR_4->dc_status) & VAR_0))
   break;
  FUNC_0(VAR_6, VAR_1);
 }


 if (VAR_5 == VAR_1)
  return (0);


 VAR_3->dc_cdata.dc_rx_prod = VAR_6;

 return (VAR_2);
}
