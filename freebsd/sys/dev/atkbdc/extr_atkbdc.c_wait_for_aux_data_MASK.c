
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atkbdc_softc {int retry; int kbd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct atkbdc_softc*) ;
 int FUNC_3 (struct atkbdc_softc*) ;

__attribute__((used)) static int
FUNC_4(struct atkbdc_softc *VAR_5)
{
    int VAR_6;
    int VAR_7;


    VAR_6 = VAR_5->retry * 2;

    while ((VAR_7 = FUNC_3(VAR_5) & VAR_3)
     != VAR_2) {
        if (VAR_7 == VAR_4) {
     FUNC_0(VAR_1);
     FUNC_1(&VAR_5->kbd, FUNC_2(VAR_5));
 }
        FUNC_0(VAR_0);
        if (--VAR_6 < 0)
         return 0;
    }
    FUNC_0(VAR_1);
    return VAR_7;
}
