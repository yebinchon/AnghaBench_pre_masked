
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct twe_softc {scalar_t__ twe_host_id; } ;
struct twe_request {int dummy; } ;
struct TYPE_4__ {int size; int message_credits; scalar_t__ host_id; scalar_t__ response_queue_pointer; int opcode; } ;
struct TYPE_5__ {TYPE_1__ initconnection; } ;
typedef TYPE_2__ TWE_Command ;


 TYPE_2__* FUNC_0 (struct twe_request*) ;
 int VAR_0 ;
 int FUNC_1 (struct twe_softc*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct twe_softc*,struct twe_request**) ;
 int FUNC_4 (struct twe_request*,int ) ;
 int FUNC_5 (struct twe_request*) ;

__attribute__((used)) static int
FUNC_6(struct twe_softc *VAR_2, int VAR_3)
{
    struct twe_request *VAR_4;
    TWE_Command *VAR_5;
    int VAR_6;

    FUNC_2(4);

    FUNC_1(VAR_2);


    if (FUNC_3(VAR_2, &VAR_4))
 return(0);


    VAR_5 = FUNC_0(VAR_4);
    VAR_5->initconnection.opcode = VAR_1;
    VAR_5->initconnection.size = 3;
    VAR_5->initconnection.host_id = 0;
    VAR_5->initconnection.message_credits = VAR_3;
    VAR_5->initconnection.response_queue_pointer = 0;


    VAR_6 = FUNC_4(VAR_4, 0 );
    FUNC_5(VAR_4);

    if (VAR_3 == VAR_0)
 VAR_2->twe_host_id = VAR_5->initconnection.host_id;
    return(VAR_6);
}
