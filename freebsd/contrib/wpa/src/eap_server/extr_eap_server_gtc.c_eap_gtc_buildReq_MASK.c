
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_gtc_data {int state; scalar_t__ prefix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct wpabuf* FUNC_0 (int ,int ,size_t,int ,int ) ;
 size_t FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpabuf*,char*,size_t) ;

__attribute__((used)) static struct wpabuf * FUNC_4(struct eap_sm *VAR_6, void *VAR_7, u8 VAR_8)
{
 struct eap_gtc_data *VAR_9 = VAR_7;
 struct wpabuf *VAR_10;
 char *VAR_11;
 size_t VAR_12;

 VAR_11 = VAR_9->prefix ? "CHALLENGE=Password" : "Password";

 VAR_12 = FUNC_1(VAR_11);
 VAR_10 = FUNC_0(VAR_3, VAR_2, VAR_12,
       VAR_1, VAR_8);
 if (VAR_10 == ((void*)0)) {
  FUNC_2(VAR_5, "EAP-GTC: Failed to allocate memory for "
      "request");
  VAR_9->state = VAR_4;
  return ((void*)0);
 }

 FUNC_3(VAR_10, VAR_11, VAR_12);

 VAR_9->state = VAR_0;

 return VAR_10;
}
