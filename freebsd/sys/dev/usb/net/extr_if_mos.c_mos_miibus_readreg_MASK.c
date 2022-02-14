
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uWord ;
struct mos_softc {int sc_mtx; } ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct mos_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct mos_softc*) ;
 int FUNC_3 (int ,int ) ;
 struct mos_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct mos_softc*,int ) ;
 int FUNC_6 (struct mos_softc*,int ) ;
 int FUNC_7 (struct mos_softc*,int ,int) ;
 int FUNC_8 (struct mos_softc*,int ,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_9, int VAR_10, int VAR_11)
{
 struct mos_softc *VAR_12 = FUNC_4(VAR_9);
 uWord VAR_13;
 int VAR_14, VAR_15, VAR_16;

 FUNC_3(VAR_13, 0);

 VAR_16 = FUNC_9(&VAR_12->sc_mtx);
 if (!VAR_16)
  FUNC_1(VAR_12);

 FUNC_8(VAR_12, VAR_6, 0);
 FUNC_7(VAR_12, VAR_5, (VAR_10 & VAR_0) |
     VAR_1);
 FUNC_7(VAR_12, VAR_7, (VAR_11 & VAR_3) |
     VAR_2);

 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  if (FUNC_5(VAR_12, VAR_7) & VAR_4)
   break;
 }
 if (VAR_14 == VAR_8) {
  FUNC_0("MII read timeout");
 }
 VAR_15 = FUNC_6(VAR_12, VAR_6);

 if (!VAR_16)
  FUNC_2(VAR_12);
 return (VAR_15);
}
