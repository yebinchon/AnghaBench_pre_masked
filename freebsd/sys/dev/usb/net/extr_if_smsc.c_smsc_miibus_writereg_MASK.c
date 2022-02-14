
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smsc_softc {int sc_phyno; int sc_mtx; } ;
typedef int device_t ;


 int FUNC_0 (struct smsc_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct smsc_softc*) ;
 struct smsc_softc* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct smsc_softc*,int ,int) ;
 int FUNC_6 (struct smsc_softc*,char*) ;
 int FUNC_7 (struct smsc_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct smsc_softc *VAR_8 = FUNC_2(VAR_4);
 int VAR_9;
 uint32_t VAR_10;

 if (VAR_8->sc_phyno != VAR_5)
  return (0);

 VAR_9 = FUNC_4(&VAR_8->sc_mtx);
 if (!VAR_9)
  FUNC_0(VAR_8);

 if (FUNC_5(VAR_8, VAR_0, VAR_1) != 0) {
  FUNC_6(VAR_8, "MII is busy\n");
  goto done;
 }

 VAR_7 = FUNC_3(VAR_7);
 FUNC_7(VAR_8, VAR_2, VAR_7);

 VAR_10 = (VAR_5 << 11) | (VAR_6 << 6) | VAR_3 | VAR_1;
 FUNC_7(VAR_8, VAR_0, VAR_10);

 if (FUNC_5(VAR_8, VAR_0, VAR_1) != 0)
  FUNC_6(VAR_8, "MII write timeout\n");

done:
 if (!VAR_9)
  FUNC_1(VAR_8);
 return (0);
}
