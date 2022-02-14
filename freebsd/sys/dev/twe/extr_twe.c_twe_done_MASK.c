
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int32_t ;
struct twe_softc {int twe_state; struct twe_request** twe_lookup; } ;
struct twe_request {scalar_t__ tr_status; } ;
struct TYPE_8__ {int status; int request_id; } ;
struct TYPE_10__ {TYPE_2__ generic; } ;
struct TYPE_7__ {size_t response_id; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
typedef TYPE_3__ TWE_Response_Queue ;
typedef TYPE_4__ TWE_Command ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_0 (struct twe_request*) ;
 TYPE_3__ FUNC_1 (struct twe_softc*) ;
 int VAR_2 ;
 int FUNC_2 (struct twe_softc*) ;
 int VAR_3 ;
 int FUNC_3 (int,char*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct twe_softc*,int) ;
 int FUNC_6 (struct twe_softc*) ;
 int FUNC_7 (struct twe_request*) ;
 int FUNC_8 (struct twe_softc*,char*) ;
 int FUNC_9 (struct twe_request*) ;
 int FUNC_10 (struct twe_softc*) ;

__attribute__((used)) static void
FUNC_11(struct twe_softc *VAR_4, int VAR_5)
{
    TWE_Response_Queue VAR_6;
    TWE_Command *VAR_7;
    struct twe_request *VAR_8;
    int VAR_9;
    u_int32_t VAR_10;

    FUNC_4(5);


    VAR_9 = 0;
    for (;;) {
 VAR_10 = FUNC_2(VAR_4);
 FUNC_5(VAR_4, VAR_10);

 if (!(VAR_10 & VAR_3)) {
     VAR_9 = 1;
     VAR_6 = FUNC_1(VAR_4);
     VAR_8 = VAR_4->twe_lookup[VAR_6.u.response_id];
     VAR_7 = FUNC_0(VAR_8);
     if (VAR_8->tr_status != VAR_0)
  FUNC_8(VAR_4, "completion event for nonbusy command\n");
     VAR_8->tr_status = VAR_1;
     FUNC_3(3, "completed request id %d with status %d",
    VAR_7->generic.request_id, VAR_7->generic.status);

     FUNC_9(VAR_8);
     FUNC_7(VAR_8);
     VAR_4->twe_state &= ~VAR_2;
 } else {
     break;
 }
    }


    if (VAR_9 && VAR_5)
 FUNC_10(VAR_4);


    FUNC_6(VAR_4);
}
