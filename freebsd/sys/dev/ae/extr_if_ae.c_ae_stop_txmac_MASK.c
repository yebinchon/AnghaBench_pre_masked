
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int dev; } ;
typedef TYPE_1__ ae_softc_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void
FUNC_7(ae_softc_t *VAR_8)
{
 uint32_t VAR_9;
 int VAR_10;

 FUNC_0(VAR_8);




 VAR_9 = FUNC_2(VAR_8, VAR_6);
 if ((VAR_9 & VAR_7) != 0) {
  VAR_9 &= ~VAR_7;
  FUNC_4(VAR_8, VAR_6, VAR_9);
 }




 if (FUNC_1(VAR_8, VAR_1) == VAR_0)
  FUNC_3(VAR_8, VAR_1, 0);




 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_9 = FUNC_2(VAR_8, VAR_3);
  if ((VAR_9 & (VAR_5 | VAR_2)) == 0)
   break;
  FUNC_5(100);
 }
 if (VAR_10 == VAR_4)
  FUNC_6(VAR_8->dev, "timed out while stopping Tx MAC.\n");
}
