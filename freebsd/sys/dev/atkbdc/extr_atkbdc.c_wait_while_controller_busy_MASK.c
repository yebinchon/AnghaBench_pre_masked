
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atkbdc_softc {int retry; int aux; int kbd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct atkbdc_softc*) ;
 int FUNC_3 (struct atkbdc_softc*) ;

__attribute__((used)) static int
FUNC_4(struct atkbdc_softc *VAR_8)
{
    int VAR_9;
    int VAR_10;


    VAR_9 = VAR_8->retry;

    while ((VAR_10 = FUNC_3(VAR_8)) & VAR_5) {
 if ((VAR_10 & VAR_4) == VAR_6) {
     FUNC_0(VAR_2);
     FUNC_1(&VAR_8->kbd, FUNC_2(VAR_8));
 } else if ((VAR_10 & VAR_4) == VAR_3) {
     FUNC_0(VAR_2);
     FUNC_1(&VAR_8->aux, FUNC_2(VAR_8));
 }
        FUNC_0(VAR_1);
        if (--VAR_9 < 0)
         return VAR_0;
    }
    return VAR_7;
}
