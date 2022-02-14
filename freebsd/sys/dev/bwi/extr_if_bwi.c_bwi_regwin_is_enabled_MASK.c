
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
 int FUNC_0 (struct bwi_softc*,int ) ;
 int FUNC_1 (struct bwi_softc*,int,char*,int ) ;
 int FUNC_2 (struct bwi_softc*) ;
 int FUNC_3 (struct bwi_regwin*) ;

int
FUNC_4(struct bwi_softc *VAR_5, struct bwi_regwin *VAR_6)
{
 uint32_t VAR_7, VAR_8;

 VAR_8 = FUNC_2(VAR_5);
 VAR_7 = FUNC_0(VAR_5, VAR_2);

 if ((VAR_7 & (VAR_3 |
      VAR_4 |
      VAR_8)) == VAR_3) {
  FUNC_1(VAR_5, VAR_0 | VAR_1, "%s is enabled\n",
   FUNC_3(VAR_6));
  return 1;
 } else {
  FUNC_1(VAR_5, VAR_0 | VAR_1, "%s is disabled\n",
   FUNC_3(VAR_6));
  return 0;
 }
}
