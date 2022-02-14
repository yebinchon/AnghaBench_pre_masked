
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef size_t u_int ;
struct uni_config {int dummy; } ;
struct priv {int enabled; int uni; } ;
struct ngm_uni_config_mask {int option_mask; int popt_mask; int mask; } ;
struct ngm_uni_set_config {int config; struct ngm_uni_config_mask mask; } ;
struct ngm_uni_debug {int * level; } ;
struct TYPE_2__ {int typecookie; int arglen; int cmd; } ;
struct ng_mesg {scalar_t__ data; TYPE_1__ header; } ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct ng_mesg*) ;
 int FUNC_1 (struct ng_mesg*) ;
 int FUNC_2 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 struct priv* FUNC_3 (int ) ;
 int FUNC_4 (int,int ,int ,struct ng_mesg*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_5 (int ,struct priv*,char*,int) ;
 int FUNC_6 (int ,struct uni_config*) ;
 int FUNC_7 (int ,size_t) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *,int *,int *,int *) ;
 int FUNC_11 (int ,size_t,int ) ;

__attribute__((used)) static int
FUNC_12(node_p VAR_7, item_p VAR_8, hook_p VAR_9)
{
 struct priv *VAR_10 = FUNC_3(VAR_7);
 struct ng_mesg *VAR_11 = ((void*)0);
 struct ng_mesg *VAR_12;
 int VAR_13 = 0;
 u_int VAR_14;

 FUNC_0(VAR_8, VAR_12);

 switch (VAR_12->header.typecookie) {

   case 137:
  switch (VAR_12->header.cmd) {

    case 136:
   FUNC_2(VAR_11, VAR_12, VAR_5, VAR_4);
   if (VAR_11 == ((void*)0)) {
    VAR_13 = VAR_2;
    break;
   }

   VAR_11->header.arglen = FUNC_5(VAR_7, VAR_10,
       (char *)VAR_11->data, VAR_11->header.arglen) + 1;
   break;

    default:
   VAR_13 = VAR_0;
   break;
  }
  break;

   case 135:
  switch (VAR_12->header.cmd) {

    case 129:
      {
   struct ngm_uni_debug *VAR_15;

   if (VAR_12->header.arglen > sizeof(*VAR_15)) {
    VAR_13 = VAR_0;
    break;
   }
   VAR_15 = (struct ngm_uni_debug *)VAR_12->data;
   for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++)
    FUNC_11(VAR_10->uni, VAR_14, VAR_15->level[VAR_14]);
   break;
      }

    case 132:
      {
   struct ngm_uni_debug *VAR_16;

   FUNC_2(VAR_11, VAR_12, sizeof(*VAR_16), VAR_4);
   if(VAR_11 == ((void*)0)) {
    VAR_13 = VAR_2;
    break;
   }
   VAR_16 = (struct ngm_uni_debug *)VAR_11->data;
   for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++)
    VAR_16->level[VAR_14] = FUNC_7(VAR_10->uni, VAR_14);
   break;
      }

    case 130:
      {
   struct uni_config *VAR_17;

   if (VAR_12->header.arglen != 0) {
    VAR_13 = VAR_0;
    break;
   }
   FUNC_2(VAR_11, VAR_12, sizeof(*VAR_17), VAR_4);
   if (VAR_11 == ((void*)0)) {
    VAR_13 = VAR_2;
    break;
   }
   VAR_17 = (struct uni_config *)VAR_11->data;
   FUNC_6(VAR_10->uni, VAR_17);

   break;
      }

    case 128:
      {
   struct ngm_uni_set_config *VAR_18;
   struct ngm_uni_config_mask *VAR_19;

   if (VAR_12->header.arglen != sizeof(*VAR_18)) {
    VAR_13 = VAR_0;
    break;
   }
   VAR_18 = (struct ngm_uni_set_config *)VAR_12->data;

   FUNC_2(VAR_11, VAR_12, sizeof(*VAR_19), VAR_4);
   if (VAR_11 == ((void*)0)) {
    VAR_13 = VAR_2;
    break;
   }
   VAR_19 = (struct ngm_uni_config_mask *)VAR_11->data;

   *VAR_19 = VAR_18->mask;

   FUNC_10(VAR_10->uni, &VAR_18->config,
       &VAR_19->mask, &VAR_19->popt_mask, &VAR_19->option_mask);

   break;
      }

    case 133:
   if (VAR_12->header.arglen != 0) {
    VAR_13 = VAR_0;
    break;
   }
   if (VAR_10->enabled) {
    VAR_13 = VAR_1;
    break;
   }
   VAR_10->enabled = 1;
   break;

    case 134:
   if (VAR_12->header.arglen != 0) {
    VAR_13 = VAR_0;
    break;
   }
   if (!VAR_10->enabled) {
    VAR_13 = VAR_3;
    break;
   }
   VAR_10->enabled = 0;
   FUNC_9(VAR_10->uni);
   break;

    case 131:
   if (VAR_12->header.arglen != 0) {
    VAR_13 = VAR_0;
    break;
   }
   FUNC_2(VAR_11, VAR_12, sizeof(u_int32_t), VAR_4);
   if(VAR_11 == ((void*)0)) {
    VAR_13 = VAR_2;
    break;
   }
   *(u_int32_t *)VAR_11->data =
       VAR_10->enabled ? (FUNC_8(VAR_10->uni) + 1)
                     : 0;
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

 FUNC_4(VAR_13, VAR_7, VAR_8, VAR_11);
 FUNC_1(VAR_12);
 return (VAR_13);
}
