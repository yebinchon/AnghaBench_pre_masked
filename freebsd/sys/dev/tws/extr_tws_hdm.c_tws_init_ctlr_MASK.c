
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_int32_t ;
struct tws_softc {int is64bit; int obfl_q_overrun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct tws_softc*,char*,...) ;
 int FUNC_1 (struct tws_softc*) ;
 scalar_t__ FUNC_2 (struct tws_softc*,int ) ;
 int FUNC_3 (struct tws_softc*) ;
 int VAR_6 ;
 int FUNC_4 (struct tws_softc*,int ,int) ;
 int FUNC_5 (struct tws_softc*) ;
 int FUNC_6 (struct tws_softc*,int ,int ,int) ;

int
FUNC_7(struct tws_softc *VAR_7)
{
    u_int64_t VAR_8;
    u_int32_t VAR_9, VAR_10;

    FUNC_0(VAR_7, "entry", VAR_7, VAR_7->is64bit);
    VAR_7->obfl_q_overrun = 0;
    if ( FUNC_2(VAR_7, VAR_6) )
    {
        FUNC_0(VAR_7, "initConnect failed", 0, VAR_7->is64bit);
        return(VAR_0);

    }


    while( 1 ) {
        VAR_9 = FUNC_4(VAR_7, VAR_4, 4);
        VAR_10 = FUNC_4(VAR_7, VAR_5, 4);
        VAR_8 = (((u_int64_t)VAR_9) << 32) | VAR_10;
        FUNC_0(VAR_7, "host outbound cleanup",VAR_8, VAR_10);
        if ( VAR_9 == VAR_2 )
            break;
    }

    FUNC_3(VAR_7);
    FUNC_1(VAR_7);
    FUNC_6(VAR_7, VAR_3, ~0, 4);
    FUNC_5(VAR_7);
    return(VAR_1);
}
