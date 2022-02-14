
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sake_hdr {int subtype; } ;
struct eap_sake_data {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_1 (struct eap_sm*,struct eap_sake_data*,struct wpabuf*,int const*,int) ;
 int FUNC_2 (struct eap_sm*,struct eap_sake_data*,struct wpabuf*,int const*,int) ;
 int FUNC_3 (struct eap_sm*,struct eap_sake_data*,struct wpabuf*,int const*,int) ;
 int FUNC_4 (struct eap_sm*,struct eap_sake_data*,struct wpabuf*,int const*,int) ;
 int FUNC_5 (int ,char*,int const*,int) ;

__attribute__((used)) static void FUNC_6(struct eap_sm *VAR_3, void *VAR_4,
        struct wpabuf *VAR_5)
{
 struct eap_sake_data *VAR_6 = VAR_4;
 struct eap_sake_hdr *VAR_7;
 u8 VAR_8;
 size_t VAR_9;
 const u8 *VAR_10, *VAR_11;

 VAR_10 = FUNC_0(VAR_1, VAR_0, VAR_5, &VAR_9);
 if (VAR_10 == ((void*)0) || VAR_9 < sizeof(struct eap_sake_hdr))
  return;

 VAR_7 = (struct eap_sake_hdr *) VAR_10;
 VAR_11 = VAR_10 + VAR_9;
 VAR_8 = VAR_7->subtype;
 VAR_10 = (u8 *) (VAR_7 + 1);

 FUNC_5(VAR_2, "EAP-SAKE: Received attributes",
      VAR_10, VAR_11 - VAR_10);

 switch (VAR_8) {
 case 128:
  FUNC_4(VAR_3, VAR_6, VAR_5, VAR_10, VAR_11 - VAR_10);
  break;
 case 130:
  FUNC_2(VAR_3, VAR_6, VAR_5, VAR_10, VAR_11 - VAR_10);
  break;
 case 129:
  FUNC_3(VAR_3, VAR_6, VAR_5, VAR_10, VAR_11 - VAR_10);
  break;
 case 131:
  FUNC_1(VAR_3, VAR_6, VAR_5, VAR_10,
          VAR_11 - VAR_10);
  break;
 }
}
