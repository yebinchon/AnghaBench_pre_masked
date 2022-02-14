
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct wpabuf {int dummy; } ;
struct eap_ttls_data {int auth_response_valid; int master_key; int auth_response; int const ident; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {int dummy; } ;


 int FUNC_0 (int const*,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int const* FUNC_1 (struct eap_sm*,size_t*) ;
 int const* FUNC_2 (struct eap_sm*,size_t*,int*) ;
 int const* FUNC_3 (int const*,int const*,int ,int ,int,int const*,int) ;
 int const* FUNC_4 (int const*,int ,int ,int,int ) ;
 int const* FUNC_5 (struct eap_sm*,struct eap_ttls_data*,int) ;
 scalar_t__ FUNC_6 (int const*,size_t,int const*,size_t,int,int const*,int const*,int const*,int ,int ) ;
 int FUNC_7 (int const*) ;
 scalar_t__ FUNC_8 (int const*,int) ;
 int FUNC_9 (int const*,int ,int) ;
 int FUNC_10 (int ,char*) ;
 struct wpabuf* FUNC_11 (size_t) ;
 int FUNC_12 (struct wpabuf*) ;
 int const* FUNC_13 (struct wpabuf*) ;
 int FUNC_14 (struct wpabuf*,int) ;

__attribute__((used)) static int FUNC_15(struct eap_sm *VAR_8,
         struct eap_ttls_data *VAR_9,
         struct eap_method_ret *VAR_10,
         struct wpabuf **VAR_11)
{
 FUNC_10(VAR_3, "EAP-TTLS: MSCHAPv2 not included in the build");
 return -1;


}
