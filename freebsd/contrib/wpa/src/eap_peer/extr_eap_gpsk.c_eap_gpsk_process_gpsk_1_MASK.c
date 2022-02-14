
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {int methodState; int ignore; } ;
struct eap_gpsk_data {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (struct eap_sm*,struct eap_gpsk_data*,int const**,size_t*,int const*,int const*) ;
 int * FUNC_1 (struct eap_gpsk_data*,int const*,int const*) ;
 int * FUNC_2 (struct eap_gpsk_data*,int const*,int const*) ;
 struct wpabuf* FUNC_3 (struct eap_gpsk_data*,int ,int const*,size_t) ;
 int FUNC_4 (struct eap_gpsk_data*,int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static struct wpabuf * FUNC_6(struct eap_sm *VAR_6,
            struct eap_gpsk_data *VAR_7,
            struct eap_method_ret *VAR_8,
            u8 VAR_9,
            const u8 *VAR_10,
            size_t VAR_11)
{
 size_t VAR_12;
 const u8 *VAR_13, *VAR_14, *VAR_15;
 struct wpabuf *VAR_16;

 if (VAR_7->state != VAR_1) {
  VAR_8->ignore = VAR_5;
  return ((void*)0);
 }

 FUNC_5(VAR_4, "EAP-GPSK: Received Request/GPSK-1");

 VAR_15 = VAR_10 + VAR_11;

 VAR_14 = FUNC_1(VAR_7, VAR_10, VAR_15);
 VAR_14 = FUNC_2(VAR_7, VAR_14, VAR_15);
 VAR_14 = FUNC_0(VAR_6, VAR_7, &VAR_13,
        &VAR_12, VAR_14, VAR_15);
 if (VAR_14 == ((void*)0)) {
  VAR_8->methodState = VAR_3;
  FUNC_4(VAR_7, VAR_0);
  return ((void*)0);
 }

 VAR_16 = FUNC_3(VAR_7, VAR_9,
        VAR_13, VAR_12);
 if (VAR_16 == ((void*)0))
  return ((void*)0);

 FUNC_4(VAR_7, VAR_2);

 return VAR_16;
}
