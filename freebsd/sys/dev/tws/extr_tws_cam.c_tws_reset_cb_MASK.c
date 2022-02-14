
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef scalar_t__ time_t ;
struct tws_softc {int tws_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct tws_softc*) ;
 int FUNC_2 (struct tws_softc*) ;
 int FUNC_3 (struct tws_softc*) ;
 scalar_t__ FUNC_4 (struct tws_softc*) ;
 int FUNC_5 (struct tws_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_6(void *VAR_5)
{
    struct tws_softc *VAR_6 = (struct tws_softc *)VAR_5;
    time_t VAR_7;
    int VAR_8 = 0;
    u_int32_t VAR_9;

    if ( FUNC_4(VAR_6) != VAR_4 ) {
        return;
    }


    FUNC_1(VAR_6);

    FUNC_2(VAR_6);

    FUNC_3(VAR_6);


    VAR_7 = VAR_2 + VAR_3;
    while ((VAR_2 <= VAR_7) && (!VAR_8)) {
        VAR_9 = FUNC_5(VAR_6, VAR_1, 4);
        if ( VAR_9 & VAR_0 ) {
            VAR_8 = 1;

        }
    }
    if ( !VAR_8 )
            FUNC_0(VAR_6->tws_dev, " ... Controller ready flag NOT found!\n");
}
