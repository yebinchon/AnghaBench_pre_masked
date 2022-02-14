
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ng_bt_mbufq {int len; int maxlen; } ;
struct ubt_softc {int sc_task_flags; int sc_debug; int sc_stat; struct ng_bt_mbufq sc_scoq; struct ng_bt_mbufq sc_aclq; struct ng_bt_mbufq sc_cmdq; int * sc_hook; } ;
struct TYPE_3__ {int typecookie; int arglen; int cmd; } ;
struct ng_mesg {scalar_t__ data; TYPE_1__ header; } ;
typedef int node_p ;
typedef int ng_ubt_node_stat_ep ;
struct TYPE_4__ {int queue; int qlen; } ;
typedef TYPE_2__ ng_ubt_node_qlen_ep ;
typedef int ng_ubt_node_debug_ep ;
typedef int item_p ;
typedef int hook_p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct ng_mesg*) ;
 int FUNC_1 (struct ng_mesg*) ;
 int FUNC_2 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 struct ubt_softc* FUNC_3 (int ) ;
 int FUNC_4 (int,int ,int ,struct ng_mesg*) ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_5 (struct ubt_softc*) ;
 int FUNC_6 (int *,scalar_t__,int) ;
 int FUNC_7 (scalar_t__,int,char*,char*,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_8(node_p VAR_6, item_p VAR_7, hook_p VAR_8)
{
 struct ubt_softc *VAR_9 = FUNC_3(VAR_6);
 struct ng_mesg *VAR_10, *VAR_11 = ((void*)0);
 struct ng_bt_mbufq *VAR_12;
 int VAR_13 = 0, VAR_14, VAR_15;

 FUNC_0(VAR_7, VAR_10);

 switch (VAR_10->header.typecookie) {
 case 139:
  switch (VAR_10->header.cmd) {
  case 138:
   FUNC_2(VAR_11, VAR_10, VAR_4, VAR_3);
   if (VAR_11 == ((void*)0)) {
    VAR_13 = VAR_2;
    break;
   }

   FUNC_7(VAR_11->data, VAR_4,
    "Hook: %s\n" "Task flags: %#x\n" "Debug: %d\n" "CMD queue: [have:%d,max:%d]\n" "ACL queue: [have:%d,max:%d]\n" "SCO queue: [have:%d,max:%d]",





    (VAR_9->sc_hook != ((void*)0)) ? VAR_5 : "",
    VAR_9->sc_task_flags,
    VAR_9->sc_debug,
    VAR_9->sc_cmdq.len,
    VAR_9->sc_cmdq.maxlen,
    VAR_9->sc_aclq.len,
    VAR_9->sc_aclq.maxlen,
    VAR_9->sc_scoq.len,
    VAR_9->sc_scoq.maxlen);
   break;

  default:
   VAR_13 = VAR_0;
   break;
  }
  break;

 case 137:
  switch (VAR_10->header.cmd) {
  case 129:
   if (VAR_10->header.arglen != sizeof(ng_ubt_node_debug_ep)){
    VAR_13 = VAR_1;
    break;
   }

   VAR_9->sc_debug = *((ng_ubt_node_debug_ep *) (VAR_10->data));
   break;

  case 136:
   FUNC_2(VAR_11, VAR_10, sizeof(ng_ubt_node_debug_ep),
       VAR_3);
   if (VAR_11 == ((void*)0)) {
    VAR_13 = VAR_2;
    break;
   }

   *((ng_ubt_node_debug_ep *) (VAR_11->data)) = VAR_9->sc_debug;
   break;

  case 128:
   if (VAR_10->header.arglen != sizeof(ng_ubt_node_qlen_ep)) {
    VAR_13 = VAR_1;
    break;
   }

   VAR_14 = ((ng_ubt_node_qlen_ep *) (VAR_10->data))->queue;
   VAR_15 = ((ng_ubt_node_qlen_ep *) (VAR_10->data))->qlen;

   switch (VAR_14) {
   case 132:
    VAR_12 = &VAR_9->sc_cmdq;
    break;

   case 133:
    VAR_12 = &VAR_9->sc_aclq;
    break;

   case 131:
    VAR_12 = &VAR_9->sc_scoq;
    break;

   default:
    VAR_13 = VAR_0;
    goto done;

   }

   VAR_12->maxlen = VAR_15;
   break;

  case 135:
   if (VAR_10->header.arglen != sizeof(ng_ubt_node_qlen_ep)) {
    VAR_13 = VAR_1;
    break;
   }

   VAR_14 = ((ng_ubt_node_qlen_ep *) (VAR_10->data))->queue;

   switch (VAR_14) {
   case 132:
    VAR_12 = &VAR_9->sc_cmdq;
    break;

   case 133:
    VAR_12 = &VAR_9->sc_aclq;
    break;

   case 131:
    VAR_12 = &VAR_9->sc_scoq;
    break;

   default:
    VAR_13 = VAR_0;
    goto done;

   }

   FUNC_2(VAR_11, VAR_10, sizeof(ng_ubt_node_qlen_ep),
    VAR_3);
   if (VAR_11 == ((void*)0)) {
    VAR_13 = VAR_2;
    break;
   }

   ((ng_ubt_node_qlen_ep *) (VAR_11->data))->queue = VAR_14;
   ((ng_ubt_node_qlen_ep *) (VAR_11->data))->qlen = VAR_12->maxlen;
   break;

  case 134:
   FUNC_2(VAR_11, VAR_10, sizeof(ng_ubt_node_stat_ep),
       VAR_3);
   if (VAR_11 == ((void*)0)) {
    VAR_13 = VAR_2;
    break;
   }

   FUNC_6(&VAR_9->sc_stat, VAR_11->data,
    sizeof(ng_ubt_node_stat_ep));
   break;

  case 130:
   FUNC_5(VAR_9);
   break;

  default:
   VAR_13 = VAR_0;
   break;
  }
  break;

 default:
  VAR_13 = VAR_0;
  break;
 }
done:
 FUNC_4(VAR_13, VAR_6, VAR_7, VAR_11);
 FUNC_1(VAR_10);

 return (VAR_13);
}
