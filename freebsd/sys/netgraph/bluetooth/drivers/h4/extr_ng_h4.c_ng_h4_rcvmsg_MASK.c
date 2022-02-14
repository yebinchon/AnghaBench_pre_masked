
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int typecookie; int arglen; int cmd; } ;
struct ng_mesg {scalar_t__ data; TYPE_1__ header; } ;
typedef int node_p ;
typedef int ng_h4_node_state_ep ;
typedef int ng_h4_node_stat_ep ;
typedef int ng_h4_node_qlen_ep ;
typedef int ng_h4_node_debug_ep ;
typedef TYPE_2__* ng_h4_info_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_10__ {int ifq_maxlen; } ;
struct TYPE_9__ {int debug; int state; int got; int want; int stat; TYPE_3__ outq; int * hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int VAR_4 ;
 int FUNC_1 (int ,struct ng_mesg*) ;
 int FUNC_2 (struct ng_mesg*) ;
 char* VAR_5 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_6 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ,int ,struct ng_mesg*) ;
 int VAR_7 ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int *,scalar_t__,int) ;
 int FUNC_12 (scalar_t__,int,char*,char*,int,int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_13(node_p VAR_8, item_p VAR_9, hook_p VAR_10)
{
 ng_h4_info_p VAR_11 = (ng_h4_info_p) FUNC_7(VAR_8);
 struct ng_mesg *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 int VAR_14 = 0;

 if (VAR_11 == ((void*)0))
  return (VAR_0);

 FUNC_1(VAR_9, VAR_12);
 FUNC_3(VAR_11);

 switch (VAR_12->header.typecookie) {
 case 138:
  switch (VAR_12->header.cmd) {
  case 128:
   FUNC_6(VAR_13, VAR_12, VAR_7, VAR_4);
   if (VAR_13 == ((void*)0))
    VAR_14 = VAR_3;
   else
    FUNC_12(VAR_13->data, VAR_7,
     "Hook: %s\n" "Debug: %d\n" "State: %d\n" "Queue: [have:%d,max:%d]\n" "Input: [got:%d,want:%d]",




     (VAR_11->hook != ((void*)0))? VAR_5 : "",
     VAR_11->debug,
     VAR_11->state,
     FUNC_10(&VAR_11->outq),
     VAR_11->outq.ifq_maxlen,
     VAR_11->got,
     VAR_11->want);
   break;

  default:
   VAR_14 = VAR_1;
   break;
  }
  break;

 case 137:
  switch (VAR_12->header.cmd) {
  case 132:
   FUNC_9(&VAR_11->outq);
   VAR_11->state = VAR_6;
   VAR_11->want = 1;
   VAR_11->got = 0;
   break;

  case 133:
   FUNC_6(VAR_13, VAR_12, sizeof(ng_h4_node_state_ep),
    VAR_4);
   if (VAR_13 == ((void*)0))
    VAR_14 = VAR_3;
   else
    *((ng_h4_node_state_ep *)(VAR_13->data)) =
     VAR_11->state;
   break;

  case 136:
   FUNC_6(VAR_13, VAR_12, sizeof(ng_h4_node_debug_ep),
    VAR_4);
   if (VAR_13 == ((void*)0))
    VAR_14 = VAR_3;
   else
    *((ng_h4_node_debug_ep *)(VAR_13->data)) =
     VAR_11->debug;
   break;

  case 130:
   if (VAR_12->header.arglen != sizeof(ng_h4_node_debug_ep))
    VAR_14 = VAR_2;
   else
    VAR_11->debug =
     *((ng_h4_node_debug_ep *)(VAR_12->data));
   break;

  case 135:
   FUNC_6(VAR_13, VAR_12, sizeof(ng_h4_node_qlen_ep),
    VAR_4);
   if (VAR_13 == ((void*)0))
    VAR_14 = VAR_3;
   else
    *((ng_h4_node_qlen_ep *)(VAR_13->data)) =
     VAR_11->outq.ifq_maxlen;
   break;

  case 129:
   if (VAR_12->header.arglen != sizeof(ng_h4_node_qlen_ep))
    VAR_14 = VAR_2;
   else if (*((ng_h4_node_qlen_ep *)(VAR_12->data)) <= 0)
    VAR_14 = VAR_1;
   else
    FUNC_0(&VAR_11->outq,
     *((ng_h4_node_qlen_ep *)(VAR_12->data)));
   break;

  case 134:
   FUNC_6(VAR_13, VAR_12, sizeof(ng_h4_node_stat_ep),
    VAR_4);
   if (VAR_13 == ((void*)0))
    VAR_14 = VAR_3;
   else
    FUNC_11(&VAR_11->stat, VAR_13->data,
     sizeof(ng_h4_node_stat_ep));
   break;

  case 131:
   FUNC_4(VAR_11->stat);
   break;

  default:
   VAR_14 = VAR_1;
   break;
  }
  break;

 default:
  VAR_14 = VAR_1;
  break;
 }

 FUNC_5(VAR_11);

 FUNC_8(VAR_14, VAR_8, VAR_9, VAR_13);
 FUNC_2(VAR_12);

 return (VAR_14);
}
