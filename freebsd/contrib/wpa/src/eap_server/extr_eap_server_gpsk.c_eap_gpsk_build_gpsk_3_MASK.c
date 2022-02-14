
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int server_id_len; int server_id; } ;
struct eap_gpsk_data {int specifier; int vendor; int sk_len; int sk; int rand_server; int rand_peer; } ;
struct eap_gpsk_csuite {int specifier; int vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int *,int,int *) ;
 size_t FUNC_3 (int ,int ) ;
 int FUNC_4 (struct eap_gpsk_data*,int ) ;
 struct wpabuf* FUNC_5 (int ,int ,size_t,int ,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct wpabuf*) ;
 void* FUNC_8 (struct wpabuf*,size_t) ;
 int FUNC_9 (struct wpabuf*,int) ;
 int FUNC_10 (struct wpabuf*,int ,int) ;
 int FUNC_11 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_12(struct eap_sm *VAR_8,
          struct eap_gpsk_data *VAR_9, u8 VAR_10)
{
 u8 *VAR_11, *VAR_12;
 size_t VAR_13, VAR_14;
 struct eap_gpsk_csuite *VAR_15;
 struct wpabuf *VAR_16;

 FUNC_6(VAR_6, "EAP-GPSK: Request/GPSK-3");

 VAR_14 = FUNC_3(VAR_9->vendor, VAR_9->specifier);
 VAR_13 = 1 + 2 * VAR_2 + 2 + VAR_8->server_id_len +
  sizeof(struct eap_gpsk_csuite) + 2 + VAR_14;
 VAR_16 = FUNC_5(VAR_4, VAR_3, VAR_13,
       VAR_0, VAR_10);
 if (VAR_16 == ((void*)0)) {
  FUNC_6(VAR_7, "EAP-GPSK: Failed to allocate memory "
      "for request/GPSK-3");
  FUNC_4(VAR_9, VAR_5);
  return ((void*)0);
 }

 FUNC_11(VAR_16, VAR_1);
 VAR_12 = FUNC_8(VAR_16, 0);

 FUNC_10(VAR_16, VAR_9->rand_peer, VAR_2);
 FUNC_10(VAR_16, VAR_9->rand_server, VAR_2);
 FUNC_9(VAR_16, VAR_8->server_id_len);
 FUNC_10(VAR_16, VAR_8->server_id, VAR_8->server_id_len);
 VAR_15 = FUNC_8(VAR_16, sizeof(*VAR_15));
 FUNC_1(VAR_15->vendor, VAR_9->vendor);
 FUNC_0(VAR_15->specifier, VAR_9->specifier);


 FUNC_9(VAR_16, 0);

 VAR_11 = FUNC_8(VAR_16, VAR_14);
 if (FUNC_2(VAR_9->sk, VAR_9->sk_len, VAR_9->vendor,
     VAR_9->specifier, VAR_12, VAR_11 - VAR_12, VAR_11) < 0)
 {
  FUNC_7(VAR_16);
  FUNC_4(VAR_9, VAR_5);
  return ((void*)0);
 }

 return VAR_16;
}
