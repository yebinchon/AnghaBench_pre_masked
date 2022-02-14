
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mii_data {int mii_media_active; } ;
struct aue_softc {int sc_flags; int sc_mtx; } ;
typedef int device_t ;


 int FUNC_0 (struct aue_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct aue_softc*) ;
 int FUNC_2 (struct aue_softc*,int ,int) ;
 int FUNC_3 (struct aue_softc*) ;
 struct mii_data* FUNC_4 (struct aue_softc*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int,int) ;
 struct aue_softc* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(device_t VAR_10)
{
 struct aue_softc *VAR_11 = FUNC_8(VAR_10);
 struct mii_data *VAR_12 = FUNC_4(VAR_11);
 int VAR_13;

 VAR_13 = FUNC_9(&VAR_11->sc_mtx);
 if (!VAR_13)
  FUNC_1(VAR_11);

 FUNC_0(VAR_11, VAR_0, VAR_1 | VAR_2);
 if (FUNC_5(VAR_12->mii_media_active) == VAR_7)
  FUNC_2(VAR_11, VAR_3, VAR_5);
 else
  FUNC_0(VAR_11, VAR_3, VAR_5);

 if ((VAR_12->mii_media_active & VAR_9) == VAR_8)
  FUNC_2(VAR_11, VAR_3, VAR_4);
 else
  FUNC_0(VAR_11, VAR_3, VAR_4);

 FUNC_2(VAR_11, VAR_0, VAR_1 | VAR_2);






 if (VAR_11->sc_flags & VAR_6) {
  uint16_t VAR_14;

  VAR_14 = FUNC_6(VAR_10, 0, 0x1b);
  FUNC_7(VAR_10, 0, 0x1b, VAR_14 | 0x04);
 }
 if (!VAR_13)
  FUNC_3(VAR_11);
}
