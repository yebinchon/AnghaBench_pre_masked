
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smsc_softc {int sc_mtx; } ;
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
 int FUNC_5 (struct smsc_softc*,int ,int*) ;
 scalar_t__ FUNC_6 (struct smsc_softc*,int ,int) ;
 int FUNC_7 (struct smsc_softc*,char*) ;
 int FUNC_8 (struct smsc_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_4, int VAR_5, int VAR_6)
{
 struct smsc_softc *VAR_7 = FUNC_2(VAR_4);
 int VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10 = 0;

 VAR_8 = FUNC_4(&VAR_7->sc_mtx);
 if (!VAR_8)
  FUNC_0(VAR_7);

 if (FUNC_6(VAR_7, VAR_0, VAR_1) != 0) {
  FUNC_7(VAR_7, "MII is busy\n");
  goto done;
 }

 VAR_9 = (VAR_5 << 11) | (VAR_6 << 6) | VAR_3 | VAR_1;
 FUNC_8(VAR_7, VAR_0, VAR_9);

 if (FUNC_6(VAR_7, VAR_0, VAR_1) != 0)
  FUNC_7(VAR_7, "MII read timeout\n");

 FUNC_5(VAR_7, VAR_2, &VAR_10);
 VAR_10 = FUNC_3(VAR_10);

done:
 if (!VAR_8)
  FUNC_1(VAR_7);

 return (VAR_10 & 0xFFFF);
}
