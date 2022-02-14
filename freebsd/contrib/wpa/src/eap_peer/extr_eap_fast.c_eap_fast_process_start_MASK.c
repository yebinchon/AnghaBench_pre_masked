
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_fast_data {int fast_version; int provisioning; int provisioning_allowed; scalar_t__ current_pac; scalar_t__ resuming; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct eap_sm*,struct eap_fast_data*) ;
 int* FUNC_1 (int const*,size_t,size_t*) ;
 int FUNC_2 (struct eap_fast_data*,int const*,size_t) ;
 scalar_t__ FUNC_3 (struct eap_sm*,struct eap_fast_data*) ;
 scalar_t__ FUNC_4 (struct eap_sm*,struct eap_fast_data*,scalar_t__) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int FUNC_6(struct eap_sm *VAR_2,
      struct eap_fast_data *VAR_3, u8 VAR_4,
      const u8 *VAR_5, size_t VAR_6)
{
 const u8 *VAR_7;
 size_t VAR_8;


 FUNC_5(VAR_1, "EAP-FAST: Start (server ver=%d, own ver=%d)",
     VAR_4 & VAR_0, VAR_3->fast_version);
 if ((VAR_4 & VAR_0) < VAR_3->fast_version)
  VAR_3->fast_version = VAR_4 & VAR_0;
 FUNC_5(VAR_1, "EAP-FAST: Using FAST version %d",
     VAR_3->fast_version);

 VAR_7 = FUNC_1(VAR_5, VAR_6, &VAR_8);
 FUNC_2(VAR_3, VAR_7, VAR_8);

 if (VAR_3->resuming && VAR_3->current_pac) {
  FUNC_5(VAR_1, "EAP-FAST: Trying to resume session - "
      "do not add PAC-Opaque to TLS ClientHello");
  if (FUNC_0(VAR_2, VAR_3) < 0)
   return -1;
 } else if (VAR_3->current_pac) {




  if (FUNC_4(VAR_2, VAR_3, VAR_3->current_pac) < 0)
   return -1;
 } else {

  if (!VAR_3->provisioning_allowed) {
   FUNC_5(VAR_1, "EAP-FAST: No PAC found and "
       "provisioning disabled");
   return -1;
  }
  FUNC_5(VAR_1, "EAP-FAST: No PAC found - "
      "starting provisioning");
  if (FUNC_3(VAR_2, VAR_3) < 0 ||
      FUNC_0(VAR_2, VAR_3) < 0)
   return -1;
  VAR_3->provisioning = 1;
 }

 return 0;
}
