
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct awg_softc {int ifp; } ;


 int FUNC_0 (struct awg_softc*) ;
 int FUNC_1 (struct awg_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct awg_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct awg_softc*,int ,int) ;
 int FUNC_4 (struct awg_softc*) ;
 int FUNC_5 (struct awg_softc*) ;
 int FUNC_6 (struct awg_softc*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_4)
{
 struct awg_softc *VAR_5;
 uint32_t VAR_6;

 VAR_5 = VAR_4;

 FUNC_0(VAR_5);
 VAR_6 = FUNC_2(VAR_5, VAR_0);
 FUNC_3(VAR_5, VAR_0, VAR_6);

 if (VAR_6 & VAR_1)
  FUNC_4(VAR_5);

 if (VAR_6 & VAR_3)
  FUNC_6(VAR_5);

 if (VAR_6 & (VAR_3 | VAR_2)) {
  if (!FUNC_7(VAR_5->ifp))
   FUNC_5(VAR_5);
 }

 FUNC_1(VAR_5);
}
