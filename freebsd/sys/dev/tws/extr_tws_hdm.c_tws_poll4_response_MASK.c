
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef scalar_t__ u_int16_t ;
typedef scalar_t__ time_t ;
struct tws_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct tws_softc*,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct tws_softc*,scalar_t__*,int *) ;

u_int16_t
FUNC_2(struct tws_softc *VAR_3, u_int64_t *VAR_4)
{
    u_int16_t VAR_5;
    time_t VAR_6;

    VAR_6 = VAR_1 + VAR_2;
    do {
        if(FUNC_1(VAR_3, &VAR_5, VAR_4)) {

            if ( VAR_5 == VAR_0 ) {
                FUNC_0(VAR_3, "invalid req_id", 0, VAR_5);
                return(VAR_0);
            }
            return(VAR_5);
        }
    } while (VAR_1 <= VAR_6);
    FUNC_0(VAR_3, "poll timeout", 0, 0);
    return(VAR_0);
}
