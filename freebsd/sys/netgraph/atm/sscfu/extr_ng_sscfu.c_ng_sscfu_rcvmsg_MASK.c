
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct priv {int enabled; int sscf; } ;
struct ng_sscfu_getdefparam {int param; int mask; } ;
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
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,struct priv*,char*,int) ;

__attribute__((used)) static int
FUNC_11(node_p VAR_6, item_p VAR_7, hook_p VAR_8)
{
 struct priv *VAR_9 = FUNC_3(VAR_6);
 struct ng_mesg *VAR_10 = ((void*)0);
 struct ng_mesg *VAR_11;
 int VAR_12 = 0;

 FUNC_0(VAR_7, VAR_11);

 switch (VAR_11->header.typecookie) {

   case 136:
  switch (VAR_11->header.cmd) {

    case 128:
   FUNC_2(VAR_10, VAR_11, VAR_5, VAR_4);
   if (VAR_10 == ((void*)0)) {
    VAR_12 = VAR_2;
    break;
   }
   VAR_10->header.arglen = FUNC_10(VAR_6, VAR_9,
       (char *)VAR_10->data, VAR_10->header.arglen) + 1;
   break;

    default:
   VAR_12 = VAR_0;
   break;
  }
  break;

   case 135:
  switch (VAR_11->header.cmd) {

    case 131:
      {
   struct ng_sscfu_getdefparam *VAR_13;

   if (VAR_11->header.arglen != 0) {
    VAR_12 = VAR_0;
    break;
   }
   FUNC_2(VAR_10, VAR_11, sizeof(*VAR_13), VAR_4);
   if (VAR_10 == ((void*)0)) {
    VAR_12 = VAR_2;
    break;
   }
   VAR_13 = (struct ng_sscfu_getdefparam *)VAR_10->data;
   VAR_13->mask = FUNC_6(&VAR_13->param);
   break;
      }

    case 133:
   if (VAR_11->header.arglen != 0) {
    VAR_12 = VAR_0;
    break;
   }
   if (VAR_9->enabled) {
    VAR_12 = VAR_1;
    break;
   }
   VAR_9->enabled = 1;
   break;

    case 134:
   if (VAR_11->header.arglen != 0) {
    VAR_12 = VAR_0;
    break;
   }
   if (!VAR_9->enabled) {
    VAR_12 = VAR_3;
    break;
   }
   VAR_9->enabled = 0;
   FUNC_8(VAR_9->sscf);
   break;

    case 130:
   if (VAR_11->header.arglen != 0) {
    VAR_12 = VAR_0;
    break;
   }
   FUNC_2(VAR_10, VAR_11, sizeof(uint32_t), VAR_4);
   if(VAR_10 == ((void*)0)) {
    VAR_12 = VAR_2;
    break;
   }
   *(uint32_t *)VAR_10->data =
       VAR_9->enabled ? (FUNC_7(VAR_9->sscf) + 1)
                     : 0;
   break;

    case 132:
   if (VAR_11->header.arglen != 0) {
    VAR_12 = VAR_0;
    break;
   }
   FUNC_2(VAR_10, VAR_11, sizeof(uint32_t), VAR_4);
   if(VAR_10 == ((void*)0)) {
    VAR_12 = VAR_2;
    break;
   }
   *(uint32_t *)VAR_10->data = FUNC_5(VAR_9->sscf);
   break;

    case 129:
   if (VAR_11->header.arglen != sizeof(uint32_t)) {
    VAR_12 = VAR_0;
    break;
   }
   FUNC_9(VAR_9->sscf, *(uint32_t *)VAR_11->data);
   break;

    default:
   VAR_12 = VAR_0;
   break;
  }
  break;

   default:
  VAR_12 = VAR_0;
  break;
 }

 FUNC_4(VAR_12, VAR_6, VAR_7, VAR_10);
 FUNC_1(VAR_11);

 return (VAR_12);
}
