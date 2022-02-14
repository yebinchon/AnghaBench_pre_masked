
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mos_softc {int sc_mtx; } ;
struct mii_data {int mii_media_active; } ;
typedef int device_t ;


 struct mii_data* FUNC_0 (struct mos_softc*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 int FUNC_3 (struct mos_softc*) ;
 int FUNC_4 (struct mos_softc*) ;
 struct mos_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct mos_softc*,int ) ;
 int FUNC_7 (struct mos_softc*,int ,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(device_t VAR_8)
{
 struct mos_softc *VAR_9 = FUNC_5(VAR_8);
 struct mii_data *VAR_10 = FUNC_0(VAR_9);
 int VAR_11, VAR_12, VAR_13;

 VAR_13 = FUNC_8(&VAR_9->sc_mtx);
 if (!VAR_13)
  FUNC_3(VAR_9);


 VAR_11 = FUNC_6(VAR_9, VAR_2);
 VAR_11 &= ~(VAR_6 | VAR_4);
 FUNC_7(VAR_9, VAR_2, VAR_11);


 FUNC_7(VAR_9, VAR_7, 0);

 if ((VAR_10->mii_media_active & VAR_1) == VAR_0)
  VAR_11 |= VAR_3;
 else
  VAR_11 &= ~(VAR_3);

 switch (FUNC_1(VAR_10->mii_media_active)) {
 case 129:
  VAR_11 |= VAR_5;
  break;
 case 128:
  VAR_11 &= ~(VAR_5);
  break;
 }


 VAR_11 |= (VAR_6 | VAR_4);
 VAR_12 = FUNC_7(VAR_9, VAR_2, VAR_11);

 if (VAR_12)
  FUNC_2("media change failed");

 if (!VAR_13)
  FUNC_4(VAR_9);
}
