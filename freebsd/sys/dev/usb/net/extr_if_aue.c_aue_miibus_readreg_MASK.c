
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int ue_dev; } ;
struct aue_softc {int sc_flags; TYPE_1__ sc_ue; int sc_mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct aue_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct aue_softc*) ;
 int FUNC_2 (struct aue_softc*,int ) ;
 int FUNC_3 (struct aue_softc*,int ) ;
 int FUNC_4 (struct aue_softc*,int ,int) ;
 struct aue_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_8, int VAR_9, int VAR_10)
{
 struct aue_softc *VAR_11 = FUNC_5(VAR_8);
 int VAR_12, VAR_13;
 uint16_t VAR_14 = 0;

 VAR_13 = FUNC_7(&VAR_11->sc_mtx);
 if (!VAR_13)
  FUNC_0(VAR_11);
 if (VAR_11->sc_flags & VAR_0) {
  if (VAR_9 == 3)
   goto done;




 }
 FUNC_4(VAR_11, VAR_3, VAR_9);
 FUNC_4(VAR_11, VAR_4, VAR_10 | VAR_2);

 for (VAR_12 = 0; VAR_12 != VAR_6; VAR_12++) {
  if (FUNC_2(VAR_11, VAR_4) & VAR_1)
   break;
  if (FUNC_8(&VAR_11->sc_ue, VAR_7 / 100))
   break;
 }

 if (VAR_12 == VAR_6)
  FUNC_6(VAR_11->sc_ue.ue_dev, "MII read timed out\n");

 VAR_14 = FUNC_3(VAR_11, VAR_5);

done:
 if (!VAR_13)
  FUNC_1(VAR_11);
 return (VAR_14);
}
