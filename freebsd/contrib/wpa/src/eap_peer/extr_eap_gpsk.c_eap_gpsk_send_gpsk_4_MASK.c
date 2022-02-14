
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_gpsk_data {int specifier; int vendor; int sk_len; int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int *,int,int *) ;
 size_t FUNC_1 (int ,int ) ;
 int FUNC_2 (struct eap_gpsk_data*,int ) ;
 struct wpabuf* FUNC_3 (int ,int ,int,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wpabuf*) ;
 int * FUNC_6 (struct wpabuf*,size_t) ;
 int FUNC_7 (struct wpabuf*,int ) ;
 int FUNC_8 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_9(struct eap_gpsk_data *VAR_6,
         u8 VAR_7)
{
 struct wpabuf *VAR_8;
 u8 *VAR_9, *VAR_10;
 size_t VAR_11;

 FUNC_4(VAR_5, "EAP-GPSK: Sending Response/GPSK-4");

 VAR_11 = FUNC_1(VAR_6->vendor, VAR_6->specifier);

 VAR_8 = FUNC_3(VAR_3, VAR_2, 1 + 2 + VAR_11,
        VAR_0, VAR_7);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 FUNC_8(VAR_8, VAR_1);
 VAR_10 = FUNC_6(VAR_8, 0);


 FUNC_7(VAR_8, 0);

 VAR_9 = FUNC_6(VAR_8, VAR_11);
 if (FUNC_0(VAR_6->sk, VAR_6->sk_len, VAR_6->vendor,
     VAR_6->specifier, VAR_10, VAR_9 - VAR_10, VAR_9) <
     0) {
  FUNC_2(VAR_6, VAR_4);
  FUNC_5(VAR_8);
  return ((void*)0);
 }

 return VAR_8;
}
