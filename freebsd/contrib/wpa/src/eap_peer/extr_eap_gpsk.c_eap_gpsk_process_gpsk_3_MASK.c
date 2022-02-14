
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {int decision; int methodState; int ignore; } ;
struct eap_gpsk_data {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct wpabuf* FUNC_0 (struct eap_gpsk_data*,int ) ;
 int FUNC_1 (struct eap_gpsk_data*,int ) ;
 int * FUNC_2 (struct eap_gpsk_data*,int const*,int const*) ;
 int * FUNC_3 (struct eap_gpsk_data*,int const*,int const*,int const*) ;
 int * FUNC_4 (struct eap_gpsk_data*,int const*,int const*) ;
 int * FUNC_5 (struct eap_gpsk_data*,int const*,int const*) ;
 int * FUNC_6 (struct eap_gpsk_data*,int const*,int const*) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_8(struct eap_sm *VAR_7,
            struct eap_gpsk_data *VAR_8,
            struct eap_method_ret *VAR_9,
            u8 VAR_10,
            const u8 *VAR_11,
            size_t VAR_12)
{
 struct wpabuf *VAR_13;
 const u8 *VAR_14, *VAR_15;

 if (VAR_8->state != VAR_2) {
  VAR_9->ignore = VAR_6;
  return ((void*)0);
 }

 FUNC_7(VAR_4, "EAP-GPSK: Received Request/GPSK-3");

 VAR_15 = VAR_11 + VAR_12;

 VAR_14 = FUNC_6(VAR_8, VAR_11, VAR_15);
 VAR_14 = FUNC_4(VAR_8, VAR_14, VAR_15);
 VAR_14 = FUNC_2(VAR_8, VAR_14, VAR_15);
 VAR_14 = FUNC_5(VAR_8, VAR_14, VAR_15);
 VAR_14 = FUNC_3(VAR_8, VAR_11, VAR_14, VAR_15);

 if (VAR_14 == ((void*)0)) {
  FUNC_1(VAR_8, VAR_1);
  return ((void*)0);
 }
 if (VAR_14 != VAR_15) {
  FUNC_7(VAR_4, "EAP-GPSK: Ignored %lu bytes of extra "
      "data in the end of GPSK-2",
      (unsigned long) (VAR_15 - VAR_14));
 }

 VAR_13 = FUNC_0(VAR_8, VAR_10);
 if (VAR_13 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_8, VAR_5);
 VAR_9->methodState = VAR_3;
 VAR_9->decision = VAR_0;

 return VAR_13;
}
