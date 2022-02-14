
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int typecookie; int arglen; int cmd; } ;
struct ng_mesg {TYPE_1__ header; scalar_t__ data; } ;
typedef int node_p ;
typedef int ng_bt3c_node_state_ep ;
typedef int ng_bt3c_node_stat_ep ;
struct TYPE_7__ {int queue; int qlen; } ;
typedef TYPE_2__ ng_bt3c_node_qlen_ep ;
typedef int ng_bt3c_node_debug_ep ;
typedef int ng_bt3c_firmware_block_ep ;
typedef int item_p ;
typedef int hook_p ;
typedef TYPE_3__* bt3c_softc_p ;
struct TYPE_9__ {int ifq_maxlen; } ;
struct TYPE_8__ {int flags; int debug; int state; int stat; TYPE_5__ outq; TYPE_5__ inq; int * hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct ng_mesg*) ;
 char* VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ng_mesg*) ;
 int FUNC_4 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ,int ,struct ng_mesg*) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int *,scalar_t__,int) ;
 int FUNC_9 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_10 (scalar_t__,int,char*,char*,int,int,int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_11(node_p VAR_7, item_p VAR_8, hook_p VAR_9)
{
 bt3c_softc_p VAR_10 = (bt3c_softc_p) FUNC_5(VAR_7);
 struct ng_mesg *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 int VAR_13 = 0;

 if (VAR_10 == ((void*)0)) {
  FUNC_2(VAR_8);
  return (VAR_0);
 }

 FUNC_0(VAR_8, VAR_11);

 switch (VAR_11->header.typecookie) {
 case 129:
  switch (VAR_11->header.cmd) {
  case 128:
   FUNC_4(VAR_12, VAR_11, VAR_6, VAR_4);
   if (VAR_12 == ((void*)0))
    VAR_13 = VAR_3;
   else
    FUNC_10(VAR_12->data, VAR_6,
     "Hook: %s\n" "Flags: %#x\n" "Debug: %d\n" "State: %d\n" "IncmQ: [len:%d,max:%d]\n" "OutgQ: [len:%d,max:%d]\n",





     (VAR_10->hook != ((void*)0))? VAR_5 : "",
     VAR_10->flags,
     VAR_10->debug,
     VAR_10->state,
     FUNC_7(&VAR_10->inq),
     VAR_10->inq.ifq_maxlen,
     FUNC_7(&VAR_10->outq),
     VAR_10->outq.ifq_maxlen
     );
   break;

  default:
   VAR_13 = VAR_1;
   break;
  }
  break;

 case 140:
  switch (VAR_11->header.cmd) {
  case 135:
   FUNC_4(VAR_12, VAR_11, sizeof(ng_bt3c_node_state_ep),
    VAR_4);
   if (VAR_12 == ((void*)0))
    VAR_13 = VAR_3;
   else
    *((ng_bt3c_node_state_ep *)(VAR_12->data)) =
     VAR_10->state;
   break;

  case 131:
   if (VAR_11->header.arglen != sizeof(ng_bt3c_node_debug_ep))
    VAR_13 = VAR_2;
   else
    VAR_10->debug =
     *((ng_bt3c_node_debug_ep *)(VAR_11->data));
   break;

  case 138:
   FUNC_4(VAR_12, VAR_11, sizeof(ng_bt3c_node_debug_ep),
    VAR_4);
   if (VAR_12 == ((void*)0))
    VAR_13 = VAR_3;
   else
    *((ng_bt3c_node_debug_ep *)(VAR_12->data)) =
     VAR_10->debug;
   break;

  case 137:
   FUNC_4(VAR_12, VAR_11, sizeof(ng_bt3c_node_qlen_ep),
    VAR_4);
   if (VAR_12 == ((void*)0)) {
    VAR_13 = VAR_3;
    break;
   }

   switch (((ng_bt3c_node_qlen_ep *)(VAR_11->data))->queue) {
   case 134:
    ((ng_bt3c_node_qlen_ep *)(VAR_12->data))->queue =
     134;
    ((ng_bt3c_node_qlen_ep *)(VAR_12->data))->qlen =
     VAR_10->inq.ifq_maxlen;
    break;

   case 133:
    ((ng_bt3c_node_qlen_ep *)(VAR_12->data))->queue =
     133;
    ((ng_bt3c_node_qlen_ep *)(VAR_12->data))->qlen =
     VAR_10->outq.ifq_maxlen;
    break;

   default:
    FUNC_3(VAR_12);
    VAR_13 = VAR_1;
    break;
   }
   break;

  case 130:
   if (VAR_11->header.arglen != sizeof(ng_bt3c_node_qlen_ep)){
    VAR_13 = VAR_2;
    break;
   }

   if (((ng_bt3c_node_qlen_ep *)(VAR_11->data))->qlen <= 0) {
    VAR_13 = VAR_1;
    break;
   }

   switch (((ng_bt3c_node_qlen_ep *)(VAR_11->data))->queue) {
   case 134:
    VAR_10->inq.ifq_maxlen = ((ng_bt3c_node_qlen_ep *)
     (VAR_11->data))->qlen;
    break;

   case 133:
    VAR_10->outq.ifq_maxlen = ((ng_bt3c_node_qlen_ep *)
     (VAR_11->data))->qlen;
    break;

   default:
    VAR_13 = VAR_1;
    break;
   }
   break;

  case 136:
   FUNC_4(VAR_12, VAR_11, sizeof(ng_bt3c_node_stat_ep),
    VAR_4);
   if (VAR_12 == ((void*)0))
    VAR_13 = VAR_3;
   else
    FUNC_8(&VAR_10->stat, VAR_12->data,
     sizeof(ng_bt3c_node_stat_ep));
   break;

  case 132:
   FUNC_1(VAR_10->stat);
   break;

  case 139:
   if (VAR_11->header.arglen <
     sizeof(ng_bt3c_firmware_block_ep))
    VAR_13 = VAR_2;
   else
    FUNC_9(VAR_10, VAR_11->data,
       VAR_11->header.arglen);
   break;

  default:
   VAR_13 = VAR_1;
   break;
  }
  break;

 default:
  VAR_13 = VAR_1;
  break;
 }

 FUNC_6(VAR_13, VAR_7, VAR_8, VAR_12);
 FUNC_3(VAR_11);

 return (VAR_13);
}
