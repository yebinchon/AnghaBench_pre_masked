
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int dummy; } ;
struct wpa_cred {size_t num_roaming_partner; TYPE_2__* roaming_partner; } ;
struct wpa_bss {TYPE_1__* anqp; } ;
struct TYPE_4__ {int priority; } ;
struct TYPE_3__ {int * domain_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wpa_supplicant*,struct wpa_cred*,int *) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*,TYPE_2__*,int *) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static u8 FUNC_3(struct wpa_supplicant *VAR_1, struct wpa_cred *VAR_2,
         struct wpa_bss *VAR_3)
{
 size_t VAR_4;

 if (VAR_3->anqp == ((void*)0) || VAR_3->anqp->domain_name == ((void*)0)) {
  FUNC_2(VAR_0, "Interworking: No ANQP domain name info -> use default roaming partner priority 128");
  return 128;
 }

 if (FUNC_0(VAR_1, VAR_2, VAR_3->anqp->domain_name) > 0)
 {
  FUNC_2(VAR_0, "Interworking: Determined to be home SP -> use maximum preference 0 as roaming partner priority");
  return 0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_2->num_roaming_partner; VAR_4++) {
  if (FUNC_1(VAR_1, &VAR_2->roaming_partner[VAR_4],
       VAR_3->anqp->domain_name)) {
   FUNC_2(VAR_0, "Interworking: Roaming partner preference match - priority %u",
       VAR_2->roaming_partner[VAR_4].priority);
   return VAR_2->roaming_partner[VAR_4].priority;
  }
 }

 FUNC_2(VAR_0, "Interworking: No roaming partner preference match - use default roaming partner priority 128");
 return 128;
}
