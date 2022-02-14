
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atkbdc_softc {int retry; int kbd; int aux; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct atkbdc_softc*) ;
 int FUNC_3 (struct atkbdc_softc*) ;

__attribute__((used)) static int
FUNC_4(struct atkbdc_softc *VAR_9)
{
    int VAR_10;
    int VAR_11;
    int VAR_12;


    VAR_10 = VAR_9->retry * 2;

    while (VAR_10-- > 0) {
        if ((VAR_11 = FUNC_3(VAR_9)) & VAR_2) {
     FUNC_0(VAR_1);
            VAR_12 = FUNC_2(VAR_9);
     if ((VAR_11 & VAR_4) == VAR_3) {
  if ((VAR_12 == VAR_6) || (VAR_12 == VAR_7)
      || (VAR_12 == VAR_8))
      return VAR_12;
  FUNC_1(&VAR_9->aux, VAR_12);
     } else if ((VAR_11 & VAR_4) == VAR_5) {
  FUNC_1(&VAR_9->kbd, VAR_12);
     }
 }
        FUNC_0(VAR_0);
    }
    return -1;
}
