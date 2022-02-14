
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int16_t ;
struct TYPE_9__ {int typecookie; int const cmd; int arglen; } ;
struct ng_mesg {TYPE_1__ header; int * data; } ;
struct ng_l2tp_sess_config {int session_id; } ;
struct ng_l2tp_seq_config {void* xack; void* rack; void* nr; void* ns; } ;
struct ng_l2tp_config {int enabled; int match_id; int peer_id; int tunnel_id; } ;
typedef int session_id ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef TYPE_3__* hookpriv_p ;
typedef int hook_p ;
struct TYPE_11__ {int stats; struct ng_l2tp_sess_config conf; } ;
struct TYPE_10__ {int stats; struct ng_l2tp_config conf; int ftarget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct ng_mesg*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ng_mesg*) ;
 int FUNC_3 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int) ;
 void* FUNC_8 (void*) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,int ,int) ;
 TYPE_3__* FUNC_11 (TYPE_2__* const,int ) ;
 int FUNC_12 (TYPE_2__* const,struct ng_l2tp_config* const) ;
 int FUNC_13 (TYPE_2__* const,struct ng_l2tp_seq_config* const) ;

__attribute__((used)) static int
FUNC_14(node_p VAR_5, item_p VAR_6, hook_p VAR_7)
{
 const priv_p VAR_8 = FUNC_4(VAR_5);
 struct ng_mesg *VAR_9 = ((void*)0);
 struct ng_mesg *VAR_10;
 int VAR_11 = 0;

 FUNC_0(VAR_6, VAR_10);
 switch (VAR_10->header.typecookie) {
 case 137:
  switch (VAR_10->header.cmd) {
  case 130:
      {
   struct ng_l2tp_config *const VAR_12 =
    (struct ng_l2tp_config *)VAR_10->data;


   if (VAR_10->header.arglen != sizeof(*VAR_12)) {
    VAR_11 = VAR_1;
    break;
   }
   VAR_12->enabled = !!VAR_12->enabled;
   VAR_12->match_id = !!VAR_12->match_id;
   if (VAR_8->conf.enabled
       && ((VAR_8->conf.tunnel_id != 0
          && VAR_12->tunnel_id != VAR_8->conf.tunnel_id)
         || ((VAR_8->conf.peer_id != 0
          && VAR_12->peer_id != VAR_8->conf.peer_id)))) {
    VAR_11 = VAR_0;
    break;
   }


   VAR_8->ftarget = FUNC_1(VAR_6);


   if ((VAR_11 = FUNC_12(VAR_8, VAR_12)) != 0)
    break;


   VAR_8->conf = *VAR_12;
   break;
      }
  case 134:
      {
   struct ng_l2tp_config *VAR_13;

   FUNC_3(VAR_9, VAR_10, sizeof(*VAR_13), VAR_4);
   if (VAR_9 == ((void*)0)) {
    VAR_11 = VAR_3;
    break;
   }
   VAR_13 = (struct ng_l2tp_config *)VAR_9->data;
   *VAR_13 = VAR_8->conf;
   break;
      }
  case 128:
      {
   struct ng_l2tp_sess_config *const VAR_14 =
       (struct ng_l2tp_sess_config *)VAR_10->data;
   hookpriv_p VAR_15;


   if (VAR_10->header.arglen != sizeof(*VAR_14)) {
    VAR_11 = VAR_1;
    break;
   }


   VAR_15 = FUNC_11(VAR_8, VAR_14->session_id);
   if (VAR_15 == ((void*)0)) {
    VAR_11 = VAR_2;
    break;
   }


   VAR_15->conf = *VAR_14;
   break;
      }
  case 132:
      {
   struct ng_l2tp_sess_config *VAR_16;
   u_int16_t VAR_17;
   hookpriv_p VAR_18;


   if (VAR_10->header.arglen != sizeof(VAR_17)) {
    VAR_11 = VAR_1;
    break;
   }
   FUNC_9(&VAR_17, VAR_10->data, 2);


   VAR_18 = FUNC_11(VAR_8, VAR_17);
   if (VAR_18 == ((void*)0)) {
    VAR_11 = VAR_2;
    break;
   }


   FUNC_3(VAR_9, VAR_10, sizeof(VAR_18->conf), VAR_4);
   if (VAR_9 == ((void*)0)) {
    VAR_11 = VAR_3;
    break;
   }
   VAR_16 = (struct ng_l2tp_sess_config *)VAR_9->data;
   *VAR_16 = VAR_18->conf;
   break;
      }
  case 131:
  case 138:
  case 135:
      {
   if (VAR_10->header.cmd != 138) {
    FUNC_3(VAR_9, VAR_10,
        sizeof(VAR_8->stats), VAR_4);
    if (VAR_9 == ((void*)0)) {
     VAR_11 = VAR_3;
     break;
    }
    FUNC_9(VAR_9->data,
        &VAR_8->stats, sizeof(VAR_8->stats));
   }
   if (VAR_10->header.cmd != 131)
    FUNC_10(&VAR_8->stats, 0, sizeof(VAR_8->stats));
   break;
      }
  case 133:
  case 139:
  case 136:
      {
   uint16_t VAR_19;
   hookpriv_p VAR_20;


   if (VAR_10->header.arglen != sizeof(VAR_19)) {
    VAR_11 = VAR_1;
    break;
   }
   FUNC_6(VAR_10->data, &VAR_19, sizeof(uint16_t));


   VAR_20 = FUNC_11(VAR_8, VAR_19);
   if (VAR_20 == ((void*)0)) {
    VAR_11 = VAR_2;
    break;
   }

   if (VAR_10->header.cmd != 139) {
    FUNC_3(VAR_9, VAR_10,
        sizeof(VAR_20->stats), VAR_4);
    if (VAR_9 == ((void*)0)) {
     VAR_11 = VAR_3;
     break;
    }
    FUNC_6(&VAR_20->stats, VAR_9->data,
     sizeof(VAR_20->stats));
   }
   if (VAR_10->header.cmd != 133)
    FUNC_7(&VAR_20->stats, sizeof(VAR_20->stats));
   break;
      }
  case 129:
      {
   struct ng_l2tp_seq_config *const VAR_21 =
    (struct ng_l2tp_seq_config *)VAR_10->data;


   if (VAR_10->header.arglen != sizeof(*VAR_21)) {
    VAR_11 = VAR_1;
    break;
   }
   VAR_21->ns = FUNC_8(VAR_21->ns);
   VAR_21->nr = FUNC_8(VAR_21->nr);
   VAR_21->rack = FUNC_8(VAR_21->rack);
   VAR_21->xack = FUNC_8(VAR_21->xack);


   VAR_11 = FUNC_13(VAR_8, VAR_21);
   break;
      }
  default:
   VAR_11 = VAR_1;
   break;
  }
  break;
 default:
  VAR_11 = VAR_1;
  break;
 }


 FUNC_5(VAR_11, VAR_5, VAR_6, VAR_9);
 FUNC_2(VAR_10);
 return (VAR_11);
}
