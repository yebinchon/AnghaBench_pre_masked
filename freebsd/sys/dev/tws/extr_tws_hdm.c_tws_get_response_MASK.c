
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_int16_t ;
struct tws_softc {int dummy; } ;
struct tws_outbound_response {int request_id; int not_mfa; } ;
typedef int boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tws_softc*,int ,int) ;

boolean
FUNC_1(struct tws_softc *VAR_4, u_int16_t *VAR_5, u_int64_t *VAR_6)
{
    u_int64_t VAR_7=0, VAR_8=0;
    struct tws_outbound_response VAR_9;

    *VAR_5 = VAR_3;
    VAR_7 = (u_int64_t)FUNC_0(VAR_4, VAR_1, 4);

    if ( VAR_7 == VAR_0 ) {
        return(0);

    }
    VAR_7 = VAR_7 << 32;
    VAR_8 = FUNC_0(VAR_4, VAR_2, 4);
    VAR_7 = VAR_7 | VAR_8;

    VAR_9 = *(struct tws_outbound_response *)&VAR_7;

    if ( !VAR_9.not_mfa ) {
        *VAR_6 = VAR_7;
        return(1);
    } else {
        *VAR_5 = VAR_9.request_id;
    }

    return(1);
}
