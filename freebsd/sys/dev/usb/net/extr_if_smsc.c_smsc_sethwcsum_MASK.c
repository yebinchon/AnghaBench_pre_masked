
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smsc_softc {int sc_ue; } ;
struct ifnet {int if_capabilities; int if_capenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct smsc_softc*,int ) ;
 int FUNC_1 (struct smsc_softc*,int ,int *) ;
 int FUNC_2 (struct smsc_softc*,char*,int) ;
 int FUNC_3 (struct smsc_softc*,int ,int ) ;
 struct ifnet* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct smsc_softc *VAR_7)
{
 struct ifnet *VAR_8 = FUNC_4(&VAR_7->sc_ue);
 uint32_t VAR_9;
 int VAR_10;

 if (!VAR_8)
  return (-VAR_0);

 FUNC_0(VAR_7, VAR_3);

 VAR_10 = FUNC_1(VAR_7, VAR_4, &VAR_9);
 if (VAR_10 != 0) {
  FUNC_2(VAR_7, "failed to read SMSC_COE_CTRL (err=%d)\n", VAR_10);
  return (VAR_10);
 }


 if ((VAR_8->if_capabilities & VAR_8->if_capenable) & VAR_1)
  VAR_9 |= VAR_5;
 else
  VAR_9 &= ~VAR_5;


 if ((VAR_8->if_capabilities & VAR_8->if_capenable) & VAR_2)
  VAR_9 |= VAR_6;
 else
  VAR_9 &= ~VAR_6;

 VAR_10 = FUNC_3(VAR_7, VAR_4, VAR_9);
 if (VAR_10 != 0) {
  FUNC_2(VAR_7, "failed to write SMSC_COE_CTRL (err=%d)\n", VAR_10);
  return (VAR_10);
 }

 return (0);
}
