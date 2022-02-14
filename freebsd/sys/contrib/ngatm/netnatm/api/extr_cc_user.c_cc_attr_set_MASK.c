
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t u_int ;
typedef int u_char ;
struct uni_ie_traffic {int dummy; } ;
struct uni_ie_qos {int dummy; } ;
struct uni_ie_mdcr {int dummy; } ;
struct uni_ie_exqos {int dummy; } ;
struct uni_ie_epref {int dummy; } ;
struct uni_ie_eetd {int dummy; } ;
struct uni_ie_connid {int dummy; } ;
struct uni_ie_connedsub {int dummy; } ;
struct uni_ie_conned {int dummy; } ;
struct uni_ie_callingsub {int dummy; } ;
struct uni_ie_calling {int dummy; } ;
struct uni_ie_calledsub {int dummy; } ;
struct uni_ie_called {int dummy; } ;
struct uni_ie_blli {int dummy; } ;
struct uni_ie_bearer {int dummy; } ;
struct uni_ie_abrsetup {int dummy; } ;
struct uni_ie_abradd {int dummy; } ;
struct uni_ie_aal {int dummy; } ;
struct ccuser {int dummy; } ;
struct ccconn {int mdcr; int dirty_attr; int connid; int abradd; int abrsetup; int eetd; int aal; int callingsub; int calling; int calledsub; int exqos; int qos; int traffic; int bearer; int blli_selector; int * blli; int state; } ;
typedef int sel ;
typedef enum atm_attribute { ____Placeholder_atm_attribute } atm_attribute ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct ccuser*,int ) ;
 int FUNC_1 (struct ccuser*,int ,int *,int ) ;
 int FUNC_2 (int *,int *,size_t) ;

__attribute__((used)) static void
FUNC_3(struct ccuser *VAR_15, struct ccconn *VAR_16, uint32_t *VAR_17,
    u_int VAR_18, u_char *VAR_19, size_t VAR_20)
{
 size_t VAR_21, VAR_22;
 u_int VAR_23;
 u_char *VAR_24;


 VAR_21 = 0;
 VAR_24 = VAR_19;
 for (VAR_23 = 0; VAR_23 < VAR_18; VAR_23++) {
  VAR_22 = 0;
  switch ((enum atm_attribute)VAR_17[VAR_23]) {

    case 130:
   break;

    case 142:
      {
   uint32_t VAR_25;

   if (VAR_16->state != VAR_13)
    goto rdonly;
   FUNC_2(&VAR_25, VAR_24, sizeof(VAR_25));
   if (VAR_25 == 0 || VAR_25 > VAR_14)
    goto bad_val;
   VAR_22 = sizeof(uint32_t);
   break;
      }

    case 143:
   VAR_22 = sizeof(struct uni_ie_blli);
   break;

    case 144:
   if (VAR_16->state != VAR_13)
    goto rdonly;
   VAR_22 = sizeof(struct uni_ie_bearer);
   break;

    case 128:
   VAR_22 = sizeof(struct uni_ie_traffic);
   break;

    case 129:
   if (VAR_16->state != VAR_13)
    goto rdonly;
   VAR_22 = sizeof(struct uni_ie_qos);
   break;

    case 132:
   VAR_22 = sizeof(struct uni_ie_exqos);
   break;

    case 141:
   goto rdonly;

    case 140:
   if (VAR_16->state != VAR_13)
    goto rdonly;
   VAR_22 = sizeof(struct uni_ie_calledsub);
   break;

    case 139:
   if (VAR_16->state != VAR_13)
    goto rdonly;
   VAR_22 = sizeof(struct uni_ie_calling);
   break;

    case 138:
   if (VAR_16->state != VAR_13)
    goto rdonly;
   VAR_22 = sizeof(struct uni_ie_callingsub);
   break;

    case 147:
   VAR_22 = sizeof(struct uni_ie_aal);
   break;

    case 133:
   goto rdonly;

    case 137:
   goto rdonly;

    case 136:
   goto rdonly;

    case 134:
   VAR_22 = sizeof(struct uni_ie_eetd);
   break;

    case 145:
   VAR_22 = sizeof(struct uni_ie_abrsetup);
   break;

    case 146:
   VAR_22 = sizeof(struct uni_ie_abradd);
   break;

    case 135:
   VAR_22 = sizeof(struct uni_ie_connid);
   break;

    case 131:
   if (VAR_16->state != VAR_13)
    goto rdonly;
   VAR_22 = sizeof(struct uni_ie_mdcr);
   break;
  }
  if (VAR_22 == 0) {
   FUNC_0(VAR_15, VAR_1);
   return;
  }
  VAR_21 += VAR_22;
  VAR_24 += VAR_22;
 }


 if (VAR_20 != VAR_21) {
  FUNC_0(VAR_15, VAR_0);
  return;
 }

 VAR_24 = VAR_19;
 for (VAR_23 = 0; VAR_23 < VAR_18; VAR_23++) {
  VAR_22 = 0;
  switch ((enum atm_attribute)VAR_17[VAR_23]) {

    case 130:
   break;

    case 142:
      {
   uint32_t VAR_26;

   FUNC_2(&VAR_26, VAR_24, sizeof(VAR_26));
   VAR_16->blli_selector = VAR_26;
   VAR_22 = sizeof(uint32_t);
   break;
      }

    case 143:
   VAR_22 = sizeof(struct uni_ie_blli);
   FUNC_2(&VAR_16->blli[VAR_16->blli_selector - 1], VAR_24, VAR_22);
   VAR_16->dirty_attr |= VAR_8;
   break;

    case 144:
   VAR_22 = sizeof(struct uni_ie_bearer);
   FUNC_2(&VAR_16->bearer, VAR_24, VAR_22);
   break;

    case 128:
   VAR_22 = sizeof(struct uni_ie_traffic);
   FUNC_2(&VAR_16->traffic, VAR_24, VAR_22);
   VAR_16->dirty_attr |= VAR_12;
   break;

    case 129:
   VAR_22 = sizeof(struct uni_ie_qos);
   FUNC_2(&VAR_16->qos, VAR_24, VAR_22);
   break;

    case 132:
   VAR_22 = sizeof(struct uni_ie_exqos);
   FUNC_2(&VAR_16->exqos, VAR_24, VAR_22);
   VAR_16->dirty_attr |= VAR_11;
   break;

    case 141:
   VAR_22 = sizeof(struct uni_ie_called);
   break;

    case 140:
   VAR_22 = sizeof(struct uni_ie_calledsub);
   FUNC_2(&VAR_16->calledsub, VAR_24, VAR_22);
   break;

    case 139:
   VAR_22 = sizeof(struct uni_ie_calling);
   FUNC_2(&VAR_16->calling, VAR_24, VAR_22);
   break;

    case 138:
   VAR_22 = sizeof(struct uni_ie_callingsub);
   FUNC_2(&VAR_16->callingsub, VAR_24, VAR_22);
   break;

    case 147:
   VAR_22 = sizeof(struct uni_ie_aal);
   FUNC_2(&VAR_16->aal, VAR_24, VAR_22);
   VAR_16->dirty_attr |= VAR_5;
   break;

    case 133:
   VAR_22 = sizeof(struct uni_ie_epref);
   break;

    case 137:
   VAR_22 = sizeof(struct uni_ie_conned);
   break;

    case 136:
   VAR_22 = sizeof(struct uni_ie_connedsub);
   break;

    case 134:
   VAR_22 = sizeof(struct uni_ie_eetd);
   FUNC_2(&VAR_16->eetd, VAR_24, VAR_22);
   VAR_16->dirty_attr |= VAR_10;
   break;

    case 145:
   VAR_22 = sizeof(struct uni_ie_abrsetup);
   FUNC_2(&VAR_16->abrsetup, VAR_24, VAR_22);
   VAR_16->dirty_attr |= VAR_7;
   break;

    case 146:
   VAR_22 = sizeof(struct uni_ie_abradd);
   FUNC_2(&VAR_16->abradd, VAR_24, VAR_22);
   VAR_16->dirty_attr |= VAR_6;
   break;

    case 135:
   VAR_22 = sizeof(struct uni_ie_connid);
   FUNC_2(&VAR_16->connid, VAR_24, VAR_22);
   VAR_16->dirty_attr |= VAR_9;
   break;

    case 131:
   VAR_22 = sizeof(struct uni_ie_mdcr);
   FUNC_2(&VAR_16->mdcr, VAR_24, VAR_22);
   break;
  }
  VAR_24 += VAR_22;
 }

 FUNC_1(VAR_15, VAR_4, ((void*)0), 0);
 return;

  bad_val:
 FUNC_0(VAR_15, VAR_2);
 return;

  rdonly:
 FUNC_0(VAR_15, VAR_3);
 return;
}
