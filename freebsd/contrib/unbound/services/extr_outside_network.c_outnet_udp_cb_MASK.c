
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int key; } ;
struct pending {unsigned int id; TYPE_4__* pc; int cb_arg; int (* cb ) (struct comm_point*,int ,int,struct comm_reply*) ;TYPE_1__ node; int timer; int addrlen; int addr; } ;
struct outside_network {scalar_t__ unwanted_threshold; scalar_t__ unwanted_total; TYPE_2__* pending; int unwanted_param; int (* unwanted_action ) (int ) ;int unwanted_replies; } ;
struct comm_reply {int addrlen; int addr; } ;
struct comm_point {int buffer; } ;
struct TYPE_7__ {struct comm_point* cp; } ;
struct TYPE_6__ {scalar_t__ count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int (*) (int )) ;
 int FUNC_4 (int (*) (struct comm_point*,int ,int,struct comm_reply*)) ;
 int FUNC_5 (int ,char*,int *,int ) ;
 int FUNC_6 (struct comm_reply*) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (char*,unsigned int) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (struct outside_network*) ;
 int FUNC_11 (int *,struct pending*) ;
 int FUNC_12 (struct outside_network*,TYPE_4__*) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_14 (TYPE_2__*,struct pending*) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct comm_point*,int ,int,struct comm_reply*) ;
 int FUNC_20 (int ,char*,...) ;

int
FUNC_21(struct comm_point* VAR_4, void* VAR_5, int VAR_6,
 struct comm_reply *VAR_7)
{
 struct outside_network* VAR_8 = (struct outside_network*)VAR_5;
 struct pending VAR_9;
 struct pending* VAR_10;
 FUNC_20(VAR_2, "answer cb");

 if(VAR_6 != VAR_1) {
  FUNC_20(VAR_3, "outnetudp got udp error %d", VAR_6);
  return 0;
 }
 if(FUNC_16(VAR_4->buffer) < VAR_0) {
  FUNC_20(VAR_3, "outnetudp udp too short");
  return 0;
 }
 FUNC_6(VAR_7);


 VAR_9.id = (unsigned)FUNC_0(FUNC_15(VAR_4->buffer));
 FUNC_9(&VAR_9.addr, &VAR_7->addr, VAR_7->addrlen);
 VAR_9.addrlen = VAR_7->addrlen;
 FUNC_20(VAR_2, "Incoming reply id = %4.4x", VAR_9.id);
 FUNC_5(VAR_2, "Incoming reply addr =",
  &VAR_7->addr, VAR_7->addrlen);


 FUNC_20(VAR_2, "lookup size is %d entries", (int)VAR_8->pending->count);
 VAR_10 = (struct pending*)FUNC_14(VAR_8->pending, &VAR_9);
 if(!VAR_10) {
  FUNC_20(VAR_3, "received unwanted or unsolicited udp reply dropped.");
  FUNC_7(VAR_2, "dropped message", VAR_4->buffer);
  VAR_8->unwanted_replies++;
  if(VAR_8->unwanted_threshold && ++VAR_8->unwanted_total
   >= VAR_8->unwanted_threshold) {
   FUNC_8("unwanted reply total reached threshold (%u)"
    " you may be under attack."
    " defensive action: clearing the cache",
    (unsigned)VAR_8->unwanted_threshold);
   FUNC_2(FUNC_3(
    VAR_8->unwanted_action));
   (*VAR_8->unwanted_action)(VAR_8->unwanted_param);
   VAR_8->unwanted_total = 0;
  }
  return 0;
 }

 FUNC_20(VAR_2, "received udp reply.");
 FUNC_7(VAR_2, "udp message", VAR_4->buffer);
 if(VAR_10->pc->cp != VAR_4) {
  FUNC_20(VAR_3, "received reply id,addr on wrong port. "
   "dropped.");
  VAR_8->unwanted_replies++;
  if(VAR_8->unwanted_threshold && ++VAR_8->unwanted_total
   >= VAR_8->unwanted_threshold) {
   FUNC_8("unwanted reply total reached threshold (%u)"
    " you may be under attack."
    " defensive action: clearing the cache",
    (unsigned)VAR_8->unwanted_threshold);
   FUNC_2(FUNC_3(
    VAR_8->unwanted_action));
   (*VAR_8->unwanted_action)(VAR_8->unwanted_param);
   VAR_8->unwanted_total = 0;
  }
  return 0;
 }
 FUNC_1(VAR_10->timer);
 FUNC_20(VAR_2, "outnet handle udp reply");

 (void)FUNC_13(VAR_8->pending, VAR_10->node.key);
 if(VAR_10->cb) {
  FUNC_2(FUNC_4(VAR_10->cb));
  (void)(*VAR_10->cb)(VAR_10->pc->cp, VAR_10->cb_arg, VAR_1, VAR_7);
 }
 FUNC_12(VAR_8, VAR_10->pc);
 FUNC_11(((void*)0), VAR_10);
 FUNC_10(VAR_8);
 return 0;
}
