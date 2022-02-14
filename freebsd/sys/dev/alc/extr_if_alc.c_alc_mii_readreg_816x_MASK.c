
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct alc_softc {int alc_flags; int alc_dev; } ;


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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static uint32_t
FUNC_5(struct alc_softc *VAR_11, int VAR_12, int VAR_13)
{
 uint32_t VAR_14, VAR_15;
 int VAR_16;

 if ((VAR_11->alc_flags & VAR_0) != 0)
  VAR_14 = VAR_3;
 else
  VAR_14 = VAR_4;
 FUNC_1(VAR_11, VAR_1, VAR_8 | VAR_9 |
     VAR_10 | VAR_14 | FUNC_3(VAR_13));
 for (VAR_16 = VAR_2; VAR_16 > 0; VAR_16--) {
  FUNC_2(5);
  VAR_15 = FUNC_0(VAR_11, VAR_1);
  if ((VAR_15 & VAR_7) == 0)
   break;
 }

 if (VAR_16 == 0) {
  FUNC_4(VAR_11->alc_dev, "phy read timeout : %d\n", VAR_13);
  return (0);
 }

 return ((VAR_15 & VAR_5) >> VAR_6);
}
