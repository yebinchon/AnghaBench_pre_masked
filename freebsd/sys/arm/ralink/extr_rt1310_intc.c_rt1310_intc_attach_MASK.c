
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt1310_intc_softc {int ri_res; int ri_bsh; int ri_bst; int dev; } ;
typedef int device_t ;
struct TYPE_2__ {int ri_trig; int ri_prio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int*,int ) ;
 struct rt1310_intc_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 struct rt1310_intc_softc* VAR_10 ;
 int FUNC_3 (struct rt1310_intc_softc*,scalar_t__,int) ;
 TYPE_1__* VAR_11 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rt1310_intc_softc*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_12)
{
 struct rt1310_intc_softc *VAR_13 = FUNC_1(VAR_12);
 int VAR_14 = 0;
 int VAR_15;

 if (VAR_10)
  return (VAR_0);

 VAR_13->dev = VAR_12;

 VAR_13->ri_res = FUNC_0(VAR_12, VAR_9, &VAR_14,
     VAR_2);
 if (!VAR_13->ri_res) {
  FUNC_2(VAR_12, "could not alloc resources\n");
  return (VAR_0);
 }

 VAR_13->ri_bst = FUNC_5(VAR_13->ri_res);
 VAR_13->ri_bsh = FUNC_4(VAR_13->ri_res);
 VAR_10 = VAR_13;
 FUNC_6(VAR_13);

 FUNC_3(VAR_13, VAR_4, 0);
 FUNC_3(VAR_13, VAR_3, ~0);

 for (VAR_15 = 0; VAR_15 <= VAR_1; ++VAR_15) {
  FUNC_3(VAR_13, VAR_6+VAR_15*4,
   (VAR_11[VAR_15].ri_trig << VAR_8) |
   VAR_11[VAR_15].ri_prio);
  FUNC_3(VAR_13, VAR_7+VAR_15*4, VAR_15);
 }


 FUNC_3(VAR_13, VAR_3, ~0);
 FUNC_3(VAR_13, VAR_5, 0);
 return (0);
}
