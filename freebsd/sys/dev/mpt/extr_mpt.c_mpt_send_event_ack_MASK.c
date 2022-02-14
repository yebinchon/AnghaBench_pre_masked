
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct mpt_softc {int dummy; } ;
struct TYPE_8__ {scalar_t__ req_vbuf; } ;
typedef TYPE_1__ request_t ;
struct TYPE_10__ {void* MsgContext; void* EventContext; void* Event; int Function; } ;
struct TYPE_9__ {int EventContext; int Event; } ;
typedef TYPE_2__ MSG_EVENT_NOTIFY_REPLY ;
typedef TYPE_3__ MSG_EVENT_ACK ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (struct mpt_softc*) ;
 int FUNC_3 (struct mpt_softc*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(struct mpt_softc *VAR_1, request_t *VAR_2,
     MSG_EVENT_NOTIFY_REPLY *VAR_3, uint32_t VAR_4)
{
 MSG_EVENT_ACK *VAR_5;

 VAR_5 = (MSG_EVENT_ACK *)VAR_2->req_vbuf;
 FUNC_1(VAR_5, 0, sizeof (*VAR_5));
 VAR_5->Function = VAR_0;
 VAR_5->Event = FUNC_0(VAR_3->Event);
 VAR_5->EventContext = FUNC_0(VAR_3->EventContext);
 VAR_5->MsgContext = FUNC_0(VAR_4);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1, VAR_2);
}
