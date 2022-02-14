
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {int dummy; } ;


 int FUNC_0 (struct ahd_softc*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct ahd_softc*,scalar_t__) ;
 int FUNC_2 (struct ahd_softc*,scalar_t__,int ) ;
 int FUNC_3 (struct ahd_softc*,scalar_t__,int) ;
 int FUNC_4 (struct ahd_softc*,int) ;

int
FUNC_5(struct ahd_softc *VAR_6) {
 int VAR_7;

 FUNC_0(VAR_6, ~(VAR_1|VAR_0),
    ~(VAR_1|VAR_0));
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  int VAR_8;

  FUNC_4(VAR_6, VAR_7);
  FUNC_3(VAR_6, VAR_4, VAR_7);
  for (VAR_8 = 2; VAR_8 < 64; VAR_8++)
   FUNC_2(VAR_6, VAR_4+VAR_8, 0);

  FUNC_2(VAR_6, VAR_5, VAR_3);
  if (FUNC_1(VAR_6, VAR_4) != VAR_7)
   break;
  FUNC_4(VAR_6, 0);
  if (FUNC_1(VAR_6, VAR_4) != 0)
   break;
 }
 return (VAR_7);
}
