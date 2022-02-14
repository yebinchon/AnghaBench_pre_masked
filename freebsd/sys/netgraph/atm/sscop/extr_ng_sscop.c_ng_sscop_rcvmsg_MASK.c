
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct sscop_param {int dummy; } ;
struct priv {int enabled; int flow; int sscop; int stats; int * lower; int * upper; } ;
struct ng_sscop_setparam_resp {int mask; int error; } ;
struct ng_sscop_setparam {int param; int mask; } ;
struct TYPE_2__ {int typecookie; int arglen; int cmd; } ;
struct ng_mesg {scalar_t__ data; TYPE_1__ header; } ;
typedef int node_p ;
typedef int item_p ;
typedef int * hook_p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct ng_mesg*) ;
 int FUNC_1 (struct ng_mesg*) ;
 int FUNC_2 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 struct priv* FUNC_3 (int ) ;
 int FUNC_4 (int,int ,int ,struct ng_mesg*) ;
 int VAR_6 ;
 int FUNC_5 (int ,struct ng_mesg*) ;
 int FUNC_6 (int ,struct ng_mesg*) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct sscop_param*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int *,int *) ;
 int FUNC_14 (int ,struct priv*,char*,int) ;

__attribute__((used)) static int
FUNC_15(node_p VAR_7, item_p VAR_8, hook_p VAR_9)
{
 struct priv *VAR_10 = FUNC_3(VAR_7);
 struct ng_mesg *VAR_11 = ((void*)0);
 struct ng_mesg *VAR_12;
 int VAR_13 = 0;

 FUNC_0(VAR_8, VAR_12);

 switch (VAR_12->header.typecookie) {

   case 137:
  switch (VAR_12->header.cmd) {

    case 128:
   FUNC_2(VAR_11, VAR_12, VAR_6, VAR_5);
   if (VAR_11 == ((void*)0)) {
    VAR_13 = VAR_3;
    break;
   }

   VAR_11->header.arglen = FUNC_14(VAR_7, VAR_10,
       (char *)VAR_11->data, VAR_11->header.arglen) + 1;
   break;

    default:
   VAR_13 = VAR_1;
   break;
  }
  break;

   case 138:
  if (VAR_10->enabled && VAR_9 != ((void*)0)) {
   if (VAR_9 == VAR_10->upper)
    VAR_13 = FUNC_6(VAR_7, VAR_12);
   else if (VAR_9 == VAR_10->lower)
    VAR_13 = FUNC_5(VAR_7, VAR_12);
  }
  break;

   case 136:
  switch (VAR_12->header.cmd) {

    case 132:
      {
   struct sscop_param *VAR_14;

   FUNC_2(VAR_11, VAR_12, sizeof(*VAR_14), VAR_5);
   if (VAR_11 == ((void*)0)) {
    VAR_13 = VAR_3;
    break;
   }
   VAR_14 = (struct sscop_param *)VAR_11->data;
   FUNC_9(VAR_10->sscop, VAR_14);
   break;
      }

    case 129:
      {
   struct ng_sscop_setparam *VAR_15;
   struct ng_sscop_setparam_resp *VAR_16;

   if (VAR_12->header.arglen != sizeof(*VAR_15)) {
    VAR_13 = VAR_1;
    break;
   }
   if (VAR_10->enabled) {
    VAR_13 = VAR_2;
    break;
   }
   VAR_15 = (struct ng_sscop_setparam *)VAR_12->data;
   FUNC_2(VAR_11, VAR_12, sizeof(*VAR_16), VAR_5);
   if (VAR_11 == ((void*)0)) {
    VAR_13 = VAR_3;
    break;
   }
   VAR_16 = (struct ng_sscop_setparam_resp *)VAR_11->data;
   VAR_16->mask = VAR_15->mask;
   VAR_16->error = FUNC_13(VAR_10->sscop,
       &VAR_15->param, &VAR_16->mask);
   break;
      }

    case 134:
   if (VAR_12->header.arglen != 0) {
    VAR_13 = VAR_1;
    break;
   }
   if (VAR_10->enabled) {
    VAR_13 = VAR_0;
    break;
   }
   VAR_10->enabled = 1;
   VAR_10->flow = 1;
   FUNC_7(&VAR_10->stats, 0, sizeof(VAR_10->stats));
   break;

    case 135:
   if (VAR_12->header.arglen != 0) {
    VAR_13 = VAR_1;
    break;
   }
   if (!VAR_10->enabled) {
    VAR_13 = VAR_4;
    break;
   }
   VAR_10->enabled = 0;
   FUNC_11(VAR_10->sscop);
   break;

    case 133:
   if (VAR_12->header.arglen != 0) {
    VAR_13 = VAR_1;
    break;
   }
   FUNC_2(VAR_11, VAR_12, sizeof(u_int32_t), VAR_5);
   if(VAR_11 == ((void*)0)) {
    VAR_13 = VAR_3;
    break;
   }
   *(u_int32_t *)VAR_11->data = FUNC_8(VAR_10->sscop);
   break;

    case 130:
   if (VAR_12->header.arglen != sizeof(u_int32_t)) {
    VAR_13 = VAR_1;
    break;
   }
   FUNC_12(VAR_10->sscop, *(u_int32_t *)VAR_12->data);
   break;

    case 131:
   if (VAR_12->header.arglen != 0) {
    VAR_13 = VAR_1;
    break;
   }
   FUNC_2(VAR_11, VAR_12, sizeof(u_int32_t), VAR_5);
   if(VAR_11 == ((void*)0)) {
    VAR_13 = VAR_3;
    break;
   }
   *(u_int32_t *)VAR_11->data =
       VAR_10->enabled ? (FUNC_10(VAR_10->sscop) + 1)
                     : 0;
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

 FUNC_4(VAR_13, VAR_7, VAR_8, VAR_11);
 FUNC_1(VAR_12);

 return (VAR_13);
}
