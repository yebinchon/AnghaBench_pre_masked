
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtkswitch_softc {scalar_t__ sc_switchtype; } ;
typedef scalar_t__ mtk_switch_type ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mtkswitch_softc*,int) ;
 int VAR_2 ;
 struct mtkswitch_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct mtkswitch_softc *VAR_4;
 mtk_switch_type VAR_5;

 if (!FUNC_4(VAR_3))
  return (VAR_0);

 VAR_5 = FUNC_3(VAR_3, VAR_2)->ocd_data;
 if (VAR_5 == VAR_1)
  return (VAR_0);

 VAR_4 = FUNC_1(VAR_3);
 FUNC_0(VAR_4, sizeof(*VAR_4));
 VAR_4->sc_switchtype = VAR_5;

 FUNC_2(VAR_3, "MTK Switch Driver");

 return (0);
}
