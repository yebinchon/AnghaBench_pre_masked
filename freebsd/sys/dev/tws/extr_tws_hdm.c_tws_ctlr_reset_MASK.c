
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef scalar_t__ time_t ;
struct tws_softc {int dummy; } ;
typedef int boolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct tws_softc*,char*,int ,int ) ;
 int FUNC_1 (struct tws_softc*) ;
 scalar_t__ FUNC_2 (struct tws_softc*) ;
 int FUNC_3 (struct tws_softc*,int ,int) ;

boolean
FUNC_4(struct tws_softc *VAR_4)
{

    u_int32_t VAR_5;
    time_t VAR_6;


    FUNC_0(VAR_4, "entry", 0, 0);

    FUNC_1(VAR_4);

    do {
        VAR_5 = FUNC_3(VAR_4, VAR_1, 4);
    } while ( VAR_5 & VAR_0 );

    VAR_6 = VAR_2 + VAR_3;
    do {
        if(FUNC_2(VAR_4))
            return(1);
    } while (VAR_2 <= VAR_6);
    return(0);

}
