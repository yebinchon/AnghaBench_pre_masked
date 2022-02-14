
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct alc_softc {int alc_flags; int alc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct alc_softc*,int ) ;
 int FUNC_1 (struct alc_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ,char*,int,int) ;

__attribute__((used)) static uint32_t
FUNC_6(struct alc_softc *VAR_13, int VAR_14, int VAR_15)
{
 uint32_t VAR_16, VAR_17;
 int VAR_18;

 FUNC_1(VAR_13, VAR_0, FUNC_4(VAR_15) |
     FUNC_3(VAR_14));
 if ((VAR_13->alc_flags & VAR_1) != 0)
  VAR_16 = VAR_4;
 else
  VAR_16 = VAR_5;
 FUNC_1(VAR_13, VAR_2, VAR_10 | VAR_11 |
     VAR_12 | VAR_16 | VAR_8);
 for (VAR_18 = VAR_3; VAR_18 > 0; VAR_18--) {
  FUNC_2(5);
  VAR_17 = FUNC_0(VAR_13, VAR_2);
  if ((VAR_17 & VAR_9) == 0)
   break;
 }

 if (VAR_18 == 0) {
  FUNC_5(VAR_13->alc_dev, "phy ext read timeout : %d, %d\n",
      VAR_14, VAR_15);
  return (0);
 }

 return ((VAR_17 & VAR_6) >> VAR_7);
}
