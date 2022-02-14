
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_gpsk_data {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eap_sm*,struct eap_gpsk_data*,int const*,size_t) ;
 int FUNC_1 (struct eap_sm*,struct eap_gpsk_data*,int const*,size_t) ;
 int* FUNC_2 (int ,int ,struct wpabuf*,size_t*) ;

__attribute__((used)) static void FUNC_3(struct eap_sm *VAR_2, void *VAR_3,
        struct wpabuf *VAR_4)
{
 struct eap_gpsk_data *VAR_5 = VAR_3;
 const u8 *VAR_6;
 size_t VAR_7;

 VAR_6 = FUNC_2(VAR_1, VAR_0, VAR_4, &VAR_7);
 if (VAR_6 == ((void*)0) || VAR_7 < 1)
  return;

 switch (*VAR_6) {
 case 129:
  FUNC_0(VAR_2, VAR_5, VAR_6 + 1, VAR_7 - 1);
  break;
 case 128:
  FUNC_1(VAR_2, VAR_5, VAR_6 + 1, VAR_7 - 1);
  break;
 }
}
