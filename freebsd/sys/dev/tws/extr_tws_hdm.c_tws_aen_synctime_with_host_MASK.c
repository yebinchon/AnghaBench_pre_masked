
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tws_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tws_softc*,char*,long,int) ;
 int VAR_3 ;
 int FUNC_1 (struct tws_softc*,int ,int ,int,long*) ;
 long FUNC_2 () ;

void
FUNC_3(struct tws_softc *VAR_4)
{

    int VAR_5;
    long int VAR_6;

    FUNC_0(VAR_4, "entry", VAR_4, 0);

    VAR_6 = (VAR_0 - (3 * 86400)) % 604800;
    FUNC_0(VAR_4, "sync_time,ts", VAR_6, VAR_3);
    FUNC_0(VAR_4, "utc_offset", FUNC_2(), 0);
    VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_1,
                           4, &VAR_6);
    if ( VAR_5 )
        FUNC_0(VAR_4, "set param failed", VAR_6, VAR_5);
}
