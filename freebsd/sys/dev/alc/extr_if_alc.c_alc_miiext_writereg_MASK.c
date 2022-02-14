
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
FUNC_6(struct alc_softc *VAR_13, int VAR_14, int VAR_15, int VAR_16)
{
 uint32_t VAR_17, VAR_18;
 int VAR_19;

 FUNC_1(VAR_13, VAR_0, FUNC_4(VAR_15) |
     FUNC_3(VAR_14));
 if ((VAR_13->alc_flags & VAR_1) != 0)
  VAR_17 = VAR_4;
 else
  VAR_17 = VAR_5;
 FUNC_1(VAR_13, VAR_2, VAR_10 | VAR_11 |
     ((VAR_16 & VAR_6) << VAR_7) |
     VAR_12 | VAR_17 | VAR_8);
 for (VAR_19 = VAR_3; VAR_19 > 0; VAR_19--) {
  FUNC_2(5);
  VAR_18 = FUNC_0(VAR_13, VAR_2);
  if ((VAR_18 & VAR_9) == 0)
   break;
 }

 if (VAR_19 == 0)
  FUNC_5(VAR_13->alc_dev, "phy ext write timeout : %d, %d\n",
      VAR_14, VAR_15);

 return (0);
}
