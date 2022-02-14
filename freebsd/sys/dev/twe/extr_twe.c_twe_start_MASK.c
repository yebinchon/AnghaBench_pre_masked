
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct twe_softc {int dummy; } ;
struct twe_request {int tr_flags; int * tr_complete; int tr_status; struct twe_softc* tr_sc; } ;
struct TYPE_4__ {int request_id; } ;
struct TYPE_5__ {TYPE_1__ generic; } ;
typedef TYPE_2__ TWE_Command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct twe_softc*,int ) ;
 TYPE_2__* FUNC_1 (struct twe_request*) ;
 int FUNC_2 (struct twe_request*) ;
 int FUNC_3 (struct twe_softc*) ;
 int FUNC_4 (struct twe_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int,char*,int ,...) ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int FUNC_7 (struct twe_softc*,int) ;
 int FUNC_8 (struct twe_softc*,int ) ;
 int FUNC_9 (struct twe_request*) ;

int
FUNC_10(struct twe_request *VAR_6)
{
    struct twe_softc *VAR_7 = VAR_6->tr_sc;
    TWE_Command *VAR_8;
    int VAR_9;
    u_int32_t VAR_10;

    FUNC_6(4);

    if (!VAR_5)
 FUNC_3(VAR_7);


    VAR_6->tr_status = VAR_1;
    VAR_8 = FUNC_1(VAR_6);







    for (VAR_9 = 100000; (VAR_9 > 0); VAR_9--) {


 VAR_10 = FUNC_4(VAR_7);
 FUNC_7(VAR_7, VAR_10);

 if (!(VAR_10 & VAR_3)) {
     FUNC_9(VAR_6);

     FUNC_0(VAR_7, FUNC_2(VAR_6));
     return(0);
 } else if (!(VAR_10 & VAR_4) && VAR_9 > 1)
     FUNC_8(VAR_7, 0);
    }







    return(VAR_0);
}
