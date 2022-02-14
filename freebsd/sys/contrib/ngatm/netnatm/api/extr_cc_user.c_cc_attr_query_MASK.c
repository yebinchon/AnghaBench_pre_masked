
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
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
struct ccconn {int mdcr; int connid; int abradd; int abrsetup; int eetd; int connedsub; int conned; int epref; int aal; int callingsub; int calling; int calledsub; int called; int exqos; int qos; int traffic; int bearer; int blli_selector; int * blli; } ;
typedef enum atm_attribute { ____Placeholder_atm_attribute } atm_attribute ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (struct ccuser*,int ) ;
 int FUNC_3 (struct ccuser*,int ,void*,size_t) ;
 int FUNC_4 (void*,int *,size_t) ;
 int FUNC_5 (void*,int ,size_t) ;

__attribute__((used)) static void
FUNC_6(struct ccuser *VAR_2, struct ccconn *VAR_3,
    uint32_t *VAR_4, u_int VAR_5)
{
 void *VAR_6, *VAR_7;
 size_t VAR_8, VAR_9;
 u_int VAR_10;
 uint32_t *VAR_11;


 VAR_8 = sizeof(uint32_t) + VAR_5 * sizeof(uint32_t);
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  VAR_9 = 0;
  switch ((enum atm_attribute)VAR_4[VAR_10]) {

    case 130:
   break;

    case 142:
   VAR_9 = sizeof(uint32_t);
   break;

    case 143:
   VAR_9 = sizeof(struct uni_ie_blli);
   break;

    case 144:
   VAR_9 = sizeof(struct uni_ie_bearer);
   break;

    case 128:
   VAR_9 = sizeof(struct uni_ie_traffic);
   break;

    case 129:
   VAR_9 = sizeof(struct uni_ie_qos);
   break;

    case 132:
   VAR_9 = sizeof(struct uni_ie_exqos);
   break;

    case 141:
   VAR_9 = sizeof(struct uni_ie_called);
   break;

    case 140:
   VAR_9 = sizeof(struct uni_ie_calledsub);
   break;

    case 139:
   VAR_9 = sizeof(struct uni_ie_calling);
   break;

    case 138:
   VAR_9 = sizeof(struct uni_ie_callingsub);
   break;

    case 147:
   VAR_9 = sizeof(struct uni_ie_aal);
   break;

    case 133:
   VAR_9 = sizeof(struct uni_ie_epref);
   break;

    case 137:
   VAR_9 = sizeof(struct uni_ie_conned);
   break;

    case 136:
   VAR_9 = sizeof(struct uni_ie_connedsub);
   break;

    case 134:
   VAR_9 = sizeof(struct uni_ie_eetd);
   break;

    case 145:
   VAR_9 = sizeof(struct uni_ie_abrsetup);
   break;

    case 146:
   VAR_9 = sizeof(struct uni_ie_abradd);
   break;

    case 135:
   VAR_9 = sizeof(struct uni_ie_connid);
   break;

    case 131:
   VAR_9 = sizeof(struct uni_ie_mdcr);
   break;
  }
  if (VAR_9 == 0) {
   FUNC_2(VAR_2, VAR_0);
   return;
  }
  VAR_8 += VAR_9;
 }


 VAR_6 = FUNC_1(VAR_8);
 if (VAR_6 == ((void*)0))
  return;

 VAR_11 = VAR_6;
 VAR_11[0] = VAR_5;


 VAR_7 = (u_char *)VAR_6 + (sizeof(uint32_t) + VAR_5 * sizeof(uint32_t));
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  VAR_9 = 0;
  VAR_11[VAR_10 + 1] = VAR_4[VAR_10];
  switch (VAR_4[VAR_10]) {

    case 130:
   break;

    case 142:
   VAR_9 = sizeof(uint32_t);
   FUNC_4(VAR_7, &VAR_3->blli_selector, VAR_9);
   break;

    case 143:



   VAR_9 = sizeof(struct uni_ie_blli);
   if (VAR_3->blli_selector == 0)
    FUNC_5(VAR_7, 0, VAR_9);
   else
    FUNC_4(VAR_7, &VAR_3->blli[VAR_3->blli_selector -
        1], VAR_9);
   break;

    case 144:
   VAR_9 = sizeof(struct uni_ie_bearer);
   FUNC_4(VAR_7, &VAR_3->bearer, VAR_9);
   break;

    case 128:
   VAR_9 = sizeof(struct uni_ie_traffic);
   FUNC_4(VAR_7, &VAR_3->traffic, VAR_9);
   break;

    case 129:
   VAR_9 = sizeof(struct uni_ie_qos);
   FUNC_4(VAR_7, &VAR_3->qos, VAR_9);
   break;

    case 132:
   VAR_9 = sizeof(struct uni_ie_exqos);
   FUNC_4(VAR_7, &VAR_3->exqos, VAR_9);
   break;

    case 141:
   VAR_9 = sizeof(struct uni_ie_called);
   FUNC_4(VAR_7, &VAR_3->called, VAR_9);
   break;

    case 140:
   VAR_9 = sizeof(struct uni_ie_calledsub);
   FUNC_4(VAR_7, &VAR_3->calledsub, VAR_9);
   break;

    case 139:
   VAR_9 = sizeof(struct uni_ie_calling);
   FUNC_4(VAR_7, &VAR_3->calling, VAR_9);
   break;

    case 138:
   VAR_9 = sizeof(struct uni_ie_callingsub);
   FUNC_4(VAR_7, &VAR_3->callingsub, VAR_9);
   break;

    case 147:
   VAR_9 = sizeof(struct uni_ie_aal);
   FUNC_4(VAR_7, &VAR_3->aal, VAR_9);
   break;

    case 133:
   VAR_9 = sizeof(struct uni_ie_epref);
   FUNC_4(VAR_7, &VAR_3->epref, VAR_9);
   break;

    case 137:
   VAR_9 = sizeof(struct uni_ie_conned);
   FUNC_4(VAR_7, &VAR_3->conned, VAR_9);
   break;

    case 136:
   VAR_9 = sizeof(struct uni_ie_connedsub);
   FUNC_4(VAR_7, &VAR_3->connedsub, VAR_9);
   break;

    case 134:
   VAR_9 = sizeof(struct uni_ie_eetd);
   FUNC_4(VAR_7, &VAR_3->eetd, VAR_9);
   break;

    case 145:
   VAR_9 = sizeof(struct uni_ie_abrsetup);
   FUNC_4(VAR_7, &VAR_3->abrsetup, VAR_9);
   break;

    case 146:
   VAR_9 = sizeof(struct uni_ie_abradd);
   FUNC_4(VAR_7, &VAR_3->abradd, VAR_9);
   break;

    case 135:
   VAR_9 = sizeof(struct uni_ie_connid);
   FUNC_4(VAR_7, &VAR_3->connid, VAR_9);
   break;

    case 131:
   VAR_9 = sizeof(struct uni_ie_mdcr);
   FUNC_4(VAR_7, &VAR_3->mdcr, VAR_9);
   break;
  }
  VAR_7 = (u_char *)VAR_7 + VAR_9;
 }

 FUNC_3(VAR_2, VAR_1, VAR_6, VAR_8);

 FUNC_0(VAR_6);
}
