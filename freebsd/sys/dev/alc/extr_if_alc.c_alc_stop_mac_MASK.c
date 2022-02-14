
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct alc_softc {int alc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct alc_softc*,int ) ;
 int FUNC_1 (struct alc_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct alc_softc*) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_5(struct alc_softc *VAR_7)
{
 uint32_t VAR_8;
 int VAR_9;

 FUNC_3(VAR_7);

 VAR_8 = FUNC_0(VAR_7, VAR_1);
 if ((VAR_8 & (VAR_6 | VAR_5)) != 0) {
  VAR_8 &= ~(VAR_6 | VAR_5);
  FUNC_1(VAR_7, VAR_1, VAR_8);
 }
 for (VAR_9 = VAR_2; VAR_9 > 0; VAR_9--) {
  VAR_8 = FUNC_0(VAR_7, VAR_0);
  if ((VAR_8 & (VAR_3 | VAR_4)) == 0)
   break;
  FUNC_2(10);
 }
 if (VAR_9 == 0)
  FUNC_4(VAR_7->alc_dev,
      "could not disable Rx/Tx MAC(0x%08x)!\n", VAR_8);
}
