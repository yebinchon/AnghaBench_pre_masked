
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_ttls_data {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {int decision; int methodState; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (struct eap_sm*,size_t*) ;
 int * FUNC_2 (struct eap_sm*,size_t*) ;
 int * FUNC_3 (int *,int *,int ,int ,int,int const*,size_t) ;
 int * FUNC_4 (int *,int ,int ,int,size_t) ;
 int FUNC_5 (int *,int const*,size_t) ;
 int FUNC_6 (int *,int ,size_t) ;
 int FUNC_7 (int ,char*) ;
 struct wpabuf* FUNC_8 (size_t) ;
 int * FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*,int) ;

__attribute__((used)) static int FUNC_11(struct eap_sm *VAR_6,
           struct eap_ttls_data *VAR_7,
           struct eap_method_ret *VAR_8,
           struct wpabuf **VAR_9)
{
 struct wpabuf *VAR_10;
 u8 *VAR_11, *VAR_12;
 size_t VAR_13;
 const u8 *VAR_14, *VAR_15;
 size_t VAR_16, VAR_17;

 FUNC_7(VAR_2, "EAP-TTLS: Phase 2 PAP Request");

 VAR_14 = FUNC_1(VAR_6, &VAR_16);
 VAR_15 = FUNC_2(VAR_6, &VAR_17);
 if (VAR_14 == ((void*)0) || VAR_15 == ((void*)0))
  return -1;

 VAR_10 = FUNC_8(VAR_16 + VAR_17 + 100);
 if (VAR_10 == ((void*)0)) {
  FUNC_7(VAR_3,
      "EAP-TTLS/PAP: Failed to allocate memory");
  return -1;
 }
 VAR_12 = VAR_11 = FUNC_9(VAR_10);


 VAR_12 = FUNC_3(VAR_11, VAR_12, VAR_4, 0, 1,
          VAR_14, VAR_16);




 VAR_13 = VAR_17 == 0 ? 16 : (16 - (VAR_17 & 15)) & 15;
 VAR_12 = FUNC_4(VAR_12, VAR_5, 0, 1,
          VAR_17 + VAR_13);
 FUNC_5(VAR_12, VAR_15, VAR_17);
 VAR_12 += VAR_17;
 FUNC_6(VAR_12, 0, VAR_13);
 VAR_12 += VAR_13;
 FUNC_0(VAR_11, VAR_12);

 FUNC_10(VAR_10, VAR_12 - VAR_11);
 *VAR_9 = VAR_10;



 VAR_8->methodState = VAR_1;
 VAR_8->decision = VAR_0;

 return 0;
}
