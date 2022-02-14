
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 struct mos_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct mos_softc*,int ) ;
 int FUNC_5 (struct mos_softc*,int ,int) ;
 int FUNC_6 (struct mos_softc*,int ,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 struct mos_softc *VAR_13 = FUNC_3(VAR_9);
 int VAR_14, VAR_15;

 VAR_15 = FUNC_7(&VAR_13->sc_mtx);
 if (!VAR_15)
  FUNC_1(VAR_13);

 FUNC_6(VAR_13, VAR_6, VAR_12);
 FUNC_5(VAR_13, VAR_5, (VAR_10 & VAR_0) |
     VAR_1);
 FUNC_5(VAR_13, VAR_7, (VAR_11 & VAR_3) |
     VAR_2);

 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  if (FUNC_4(VAR_13, VAR_7) & VAR_4)
   break;
 }
 if (VAR_14 == VAR_8)
  FUNC_0("MII write timeout");

 if (!VAR_15)
  FUNC_2(VAR_13);
 return 0;
}
