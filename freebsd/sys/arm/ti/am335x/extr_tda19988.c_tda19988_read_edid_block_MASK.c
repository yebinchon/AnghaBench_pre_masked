
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tda19988_softc {int dummy; } ;


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
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct tda19988_softc*,int ,int*,int ) ;
 int FUNC_2 (struct tda19988_softc*,int ,int) ;
 int FUNC_3 (struct tda19988_softc*,int ,int*) ;
 int FUNC_4 (struct tda19988_softc*,int ,int) ;
 int FUNC_5 (struct tda19988_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct tda19988_softc *VAR_10, uint8_t *VAR_11, int VAR_12)
{
 int VAR_13, VAR_14;
 uint8_t VAR_15;

 VAR_14 = 0;

 FUNC_4(VAR_10, VAR_9, VAR_1);


 FUNC_5(VAR_10, VAR_3, 0xa0);
 FUNC_5(VAR_10, VAR_4, (VAR_12 % 2) ? 128 : 0);
 FUNC_5(VAR_10, VAR_6, 0x60);
 FUNC_5(VAR_10, VAR_5, VAR_12 / 2);

 FUNC_5(VAR_10, VAR_7, 1);
 FUNC_5(VAR_10, VAR_7, 0);

 VAR_15 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  FUNC_3(VAR_10, VAR_9, &VAR_15);
  if (VAR_15 & VAR_1)
   break;
  FUNC_0("EDID", 1);
 }

 if (VAR_13 == VAR_2) {
  VAR_14 = -1;
  goto done;
 }

 if (FUNC_1(VAR_10, VAR_8, VAR_11, VAR_0) != 0) {
  VAR_14 = -1;
  goto done;
 }

done:
 FUNC_2(VAR_10, VAR_9, VAR_1);

 return (VAR_14);
}
