
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_md5_data {void* state; int challenge; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct wpabuf* FUNC_0 (int ,int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,char*,int ,scalar_t__) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct wpabuf*,int ,scalar_t__) ;
 int FUNC_5 (struct wpabuf*,scalar_t__) ;

__attribute__((used)) static struct wpabuf * FUNC_6(struct eap_sm *VAR_8, void *VAR_9, u8 VAR_10)
{
 struct eap_md5_data *VAR_11 = VAR_9;
 struct wpabuf *VAR_12;

 if (FUNC_1(VAR_11->challenge, VAR_0)) {
  FUNC_3(VAR_6, "EAP-MD5: Failed to get random data");
  VAR_11->state = VAR_5;
  return ((void*)0);
 }

 VAR_12 = FUNC_0(VAR_4, VAR_3, 1 + VAR_0,
       VAR_2, VAR_10);
 if (VAR_12 == ((void*)0)) {
  FUNC_3(VAR_6, "EAP-MD5: Failed to allocate memory for "
      "request");
  VAR_11->state = VAR_5;
  return ((void*)0);
 }

 FUNC_5(VAR_12, VAR_0);
 FUNC_4(VAR_12, VAR_11->challenge, VAR_0);
 FUNC_2(VAR_7, "EAP-MD5: Challenge", VAR_11->challenge,
      VAR_0);

 VAR_11->state = VAR_1;

 return VAR_12;
}
