
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct pending_tcp {scalar_t__ id; TYPE_1__* query; } ;
struct outside_network {int dummy; } ;
struct comm_reply {int dummy; } ;
struct comm_point {int buffer; } ;
struct TYPE_2__ {int cb_arg; int (* cb ) (struct comm_point*,int ,int,struct comm_reply*) ;int addrlen; int addr; struct outside_network* outnet; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct outside_network*,struct pending_tcp*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int (*) (struct comm_point*,int ,int,struct comm_reply*)) ;
 int FUNC_4 (int ,char*,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct comm_point*,int ,int,struct comm_reply*) ;
 int FUNC_8 (int ,char*,...) ;

int
FUNC_9(struct comm_point* VAR_4, void* VAR_5, int VAR_6,
 struct comm_reply *VAR_7)
{
 struct pending_tcp* VAR_8 = (struct pending_tcp*)VAR_5;
 struct outside_network* VAR_9 = VAR_8->query->outnet;
 FUNC_8(VAR_2, "outnettcp cb");
 if(VAR_6 != VAR_1) {
  FUNC_8(VAR_3, "outnettcp got tcp error %d", VAR_6);

 } else {

  if(FUNC_6(VAR_4->buffer) < sizeof(uint16_t) ||
   FUNC_0(FUNC_5(VAR_4->buffer))!=VAR_8->id) {
   FUNC_4(VAR_3,
    "outnettcp: bad ID in reply, from:",
    &VAR_8->query->addr, VAR_8->query->addrlen);
   VAR_6 = VAR_0;
  }
 }
 FUNC_2(FUNC_3(VAR_8->query->cb));
 (void)(*VAR_8->query->cb)(VAR_4, VAR_8->query->cb_arg, VAR_6, VAR_7);
 FUNC_1(VAR_9, VAR_8);
 return 0;
}
