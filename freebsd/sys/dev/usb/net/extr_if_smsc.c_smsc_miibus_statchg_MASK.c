
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smsc_softc {int sc_flags; int sc_mac_csr; int sc_ue; int sc_mtx; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_drv_flags; } ;
typedef int device_t ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct smsc_softc*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct smsc_softc*) ;
 struct smsc_softc* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct smsc_softc*,char*) ;
 int FUNC_7 (struct smsc_softc*,int ,int*) ;
 int FUNC_8 (struct smsc_softc*,char*,int) ;
 int FUNC_9 (struct smsc_softc*,int ,int) ;
 struct ifnet* FUNC_10 (int *) ;
 struct mii_data* FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(device_t VAR_12)
{
 struct smsc_softc *VAR_13 = FUNC_4(VAR_12);
 struct mii_data *VAR_14 = FUNC_11(&VAR_13->sc_ue);
 struct ifnet *VAR_15;
 int VAR_16;
 int VAR_17;
 uint32_t VAR_18;
 uint32_t VAR_19;

 VAR_16 = FUNC_5(&VAR_13->sc_mtx);
 if (!VAR_16)
  FUNC_2(VAR_13);

 VAR_15 = FUNC_10(&VAR_13->sc_ue);
 if (VAR_14 == ((void*)0) || VAR_15 == ((void*)0) ||
     (VAR_15->if_drv_flags & VAR_0) == 0)
  goto done;


 VAR_13->sc_flags &= ~VAR_7;
 if ((VAR_14->mii_media_status & (VAR_1 | VAR_2)) ==
     (VAR_1 | VAR_2)) {
  switch (FUNC_1(VAR_14->mii_media_active)) {
   case 128:
   case 129:
    VAR_13->sc_flags |= VAR_7;
    break;
   case 130:

    break;
   default:
    break;
  }
 }


 if ((VAR_13->sc_flags & VAR_7) == 0) {
  FUNC_6(VAR_13, "link flag not set\n");
  goto done;
 }

 VAR_17 = FUNC_7(VAR_13, VAR_6, &VAR_19);
 if (VAR_17) {
  FUNC_8(VAR_13, "failed to read initial AFC_CFG, error %d\n", VAR_17);
  goto done;
 }


 if ((FUNC_0(VAR_14->mii_media_active) & VAR_5) != 0) {
  FUNC_6(VAR_13, "full duplex operation\n");
  VAR_13->sc_mac_csr &= ~VAR_11;
  VAR_13->sc_mac_csr |= VAR_10;

  if ((FUNC_0(VAR_14->mii_media_active) & VAR_3) != 0)
   VAR_18 = 0xffff0002;
  else
   VAR_18 = 0;

  if ((FUNC_0(VAR_14->mii_media_active) & VAR_4) != 0)
   VAR_19 |= 0xf;
  else
   VAR_19 &= ~0xf;

 } else {
  FUNC_6(VAR_13, "half duplex operation\n");
  VAR_13->sc_mac_csr &= ~VAR_10;
  VAR_13->sc_mac_csr |= VAR_11;

  VAR_18 = 0;
  VAR_19 |= 0xf;
 }

 VAR_17 = FUNC_9(VAR_13, VAR_9, VAR_13->sc_mac_csr);
 VAR_17 += FUNC_9(VAR_13, VAR_8, VAR_18);
 VAR_17 += FUNC_9(VAR_13, VAR_6, VAR_19);
 if (VAR_17)
  FUNC_8(VAR_13, "media change failed, error %d\n", VAR_17);

done:
 if (!VAR_16)
  FUNC_3(VAR_13);
}
