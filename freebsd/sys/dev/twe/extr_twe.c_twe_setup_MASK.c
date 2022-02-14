
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct twe_softc {int twe_wait_aen; struct twe_request** twe_lookup; int twe_host_id; } ;
struct twe_request {int dummy; } ;
struct TYPE_4__ {int request_id; int host_id; } ;
struct TYPE_5__ {TYPE_1__ generic; } ;
typedef TYPE_2__ TWE_Command ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct twe_request*) ;
 int FUNC_1 (struct twe_softc*) ;
 int FUNC_2 (struct twe_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct twe_softc*) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 struct twe_request* FUNC_5 (struct twe_softc*,int) ;
 int FUNC_6 (struct twe_softc*,int ) ;
 int FUNC_7 (struct twe_softc*) ;
 int FUNC_8 (struct twe_softc*) ;
 int FUNC_9 (struct twe_softc*) ;
 int FUNC_10 (struct twe_softc*) ;
 int FUNC_11 (struct twe_softc*) ;
 int FUNC_12 (struct twe_softc*) ;
 int FUNC_13 (struct twe_softc*,char*,...) ;
 int FUNC_14 (struct twe_request*) ;
 int FUNC_15 (struct twe_softc*) ;
 scalar_t__ FUNC_16 (struct twe_softc*,int ,int) ;

int
FUNC_17(struct twe_softc *VAR_5)
{
    struct twe_request *VAR_6;
    TWE_Command *VAR_7;
    u_int32_t VAR_8;
    int VAR_9;

    FUNC_4(4);




    FUNC_11(VAR_5);
    FUNC_8(VAR_5);
    FUNC_12(VAR_5);
    FUNC_9(VAR_5);
    FUNC_10(VAR_5);
    VAR_5->twe_wait_aen = -1;




    for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
 if ((VAR_6 = FUNC_5(VAR_5, VAR_9)) == ((void*)0))
     return(VAR_0);



 VAR_7 = FUNC_0(VAR_6);
 VAR_7->generic.host_id = VAR_5->twe_host_id;
 VAR_7->generic.request_id = VAR_9;
 VAR_5->twe_lookup[VAR_9] = VAR_6;




 FUNC_1(VAR_5);
 FUNC_14(VAR_6);
 FUNC_2(VAR_5);
    }
    FUNC_1(VAR_5);




    VAR_8 = FUNC_3(VAR_5);
    FUNC_6(VAR_5, VAR_8);




    if (FUNC_16(VAR_5, VAR_4, 60)) {
 FUNC_2(VAR_5);
 FUNC_13(VAR_5, "microcontroller not ready\n");
 return(VAR_1);
    }




    FUNC_7(VAR_5);





    for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {

 if (VAR_9 > 0)
     FUNC_13(VAR_5, "reset %d failed, trying again\n", VAR_9);

 if (!FUNC_15(VAR_5))
     break;
    }
    FUNC_2(VAR_5);

    if (VAR_9 >= VAR_2) {
 FUNC_13(VAR_5, "can't initialise controller, giving up\n");
 return(VAR_1);
    }

    return(0);
}
