
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwi_regwin {int rw_rev; } ;
struct bwi_softc {int sc_cap; struct bwi_regwin sc_com_regwin; } ;
typedef enum bwi_clock_mode { ____Placeholder_bwi_clock_mode } bwi_clock_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (struct bwi_regwin*) ;
 int FUNC_1 (struct bwi_softc*,int ) ;
 int FUNC_2 (struct bwi_softc*,int ,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct bwi_softc*,int ) ;
 int FUNC_5 (struct bwi_softc*,int ) ;
 int FUNC_6 (struct bwi_softc*,struct bwi_regwin*,struct bwi_regwin**) ;

__attribute__((used)) static int
FUNC_7(struct bwi_softc *VAR_7, enum bwi_clock_mode VAR_8)
{
 struct bwi_regwin *VAR_9, *VAR_10;
 uint32_t VAR_11, VAR_12;
 int VAR_13, VAR_14 = 0;

 VAR_10 = &VAR_7->sc_com_regwin;
 if (!FUNC_0(VAR_10))
  return 0;

 if (VAR_10->rw_rev >= 10 || VAR_10->rw_rev < 6)
  return 0;





 if ((VAR_7->sc_cap & VAR_0) == 0)
  return 0;

 VAR_13 = FUNC_6(VAR_7, VAR_10, &VAR_9);
 if (VAR_13)
  return VAR_13;

 if (VAR_8 == 129)
  FUNC_5(VAR_7, 0);

 VAR_11 = FUNC_1(VAR_7, VAR_2);
 VAR_12 = FUNC_3(VAR_11, VAR_3);

 switch (VAR_8) {
 case 129:
  VAR_11 &= ~VAR_6;
  VAR_11 |= VAR_4;
  break;
 case 128:
  VAR_11 |= VAR_6;
  break;
 case 130:
  VAR_11 &= ~(VAR_6 |
         VAR_4 |
         VAR_5);
  if (VAR_12 != VAR_1) {
   VAR_11 |= VAR_5;
   VAR_14 = 1;
  }
  break;
 }
 FUNC_2(VAR_7, VAR_2, VAR_11);

 if (VAR_14)
  FUNC_4(VAR_7, 0);

 return FUNC_6(VAR_7, VAR_9, ((void*)0));
}
