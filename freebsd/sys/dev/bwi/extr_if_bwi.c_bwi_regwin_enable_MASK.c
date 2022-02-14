
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwi_softc {int dummy; } ;
struct bwi_regwin {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bwi_softc*,int ) ;
 int FUNC_1 (struct bwi_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct bwi_softc*,struct bwi_regwin*,int) ;

void
FUNC_5(struct bwi_softc *VAR_10, struct bwi_regwin *VAR_11, uint32_t VAR_12)
{
 uint32_t VAR_13, VAR_14, VAR_15;

 FUNC_4(VAR_10, VAR_11, VAR_12);


 VAR_13 = VAR_9 |
     VAR_6 |
     VAR_8 |
     FUNC_3(VAR_12, VAR_7);
 FUNC_1(VAR_10, VAR_5, VAR_13);


 FUNC_0(VAR_10, VAR_5);
 FUNC_2(1);

 VAR_14 = FUNC_0(VAR_10, VAR_3);
 if (VAR_14 & VAR_4)
  FUNC_1(VAR_10, VAR_3, 0);

 VAR_15 = FUNC_0(VAR_10, VAR_0);
 if (VAR_15 & (VAR_1 | VAR_2)) {
  VAR_15 &= ~(VAR_1 | VAR_2);
  FUNC_1(VAR_10, VAR_0, VAR_15);
 }


 VAR_13 = VAR_6 |
     VAR_8 |
     FUNC_3(VAR_12, VAR_7);
 FUNC_1(VAR_10, VAR_5, VAR_13);


 FUNC_0(VAR_10, VAR_5);
 FUNC_2(1);


 VAR_13 = VAR_6 |
     FUNC_3(VAR_12, VAR_7);
 FUNC_1(VAR_10, VAR_5, VAR_13);


 FUNC_0(VAR_10, VAR_5);
 FUNC_2(1);
}
