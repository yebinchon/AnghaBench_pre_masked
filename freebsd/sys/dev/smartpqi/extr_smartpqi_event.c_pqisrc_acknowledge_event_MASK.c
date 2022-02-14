
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct pqi_event {int additional_event_id; int event_id; int event_type; } ;
typedef int request ;
struct TYPE_11__ {TYPE_4__* op_raid_ib_q; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
struct TYPE_10__ {scalar_t__ iu_length; int iu_type; } ;
struct TYPE_12__ {int additional_event_id; int event_id; int event_type; TYPE_1__ header; } ;
typedef TYPE_3__ pqi_event_acknowledge_request_t ;
struct TYPE_13__ {scalar_t__ pi_local; scalar_t__* ci_virt_addr; } ;
typedef TYPE_4__ ib_queue_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_5(pqisrc_softstate_t *VAR_3,
 struct pqi_event *VAR_4)
{

 pqi_event_acknowledge_request_t VAR_5;
 ib_queue_t *VAR_6 = &VAR_3->op_raid_ib_q[0];
 int VAR_7 = VAR_0;
 FUNC_3(&VAR_5,0,sizeof(VAR_5));

 FUNC_2("IN\n");

 VAR_5.header.iu_type = VAR_2;
 VAR_5.header.iu_length = (sizeof(pqi_event_acknowledge_request_t) -
        VAR_1);
 VAR_5.event_type = VAR_4->event_type;
 VAR_5.event_id = VAR_4->event_id;
 VAR_5.additional_event_id = VAR_4->additional_event_id;



 FUNC_4(VAR_3, VAR_6, &VAR_5);
 FUNC_0(((VAR_6->pi_local) == *(VAR_6->ci_virt_addr)), VAR_7);
  if (VAR_7 <= 0) {
   FUNC_1("wait for event acknowledge timed out\n");
   FUNC_1("tmo : %d\n",VAR_7);
   }

 FUNC_2(" OUT\n");
}
