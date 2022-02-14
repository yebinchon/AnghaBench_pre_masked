
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_data {int authkey; struct wpabuf const* last_msg; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int const**,size_t*,int *) ;
 scalar_t__ FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (struct wpabuf const*) ;
 int FUNC_4 (struct wpabuf const*) ;

int FUNC_5(struct wps_data *VAR_4, const u8 *VAR_5,
         const struct wpabuf *VAR_6)
{
 u8 VAR_7[VAR_1];
 const u8 *VAR_8[2];
 size_t VAR_9[2];

 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_0, "WPS: No Authenticator attribute "
      "included");
  return -1;
 }

 if (VAR_4->last_msg == ((void*)0)) {
  FUNC_2(VAR_0, "WPS: Last message not available for "
      "validating authenticator");
  return -1;
 }




 VAR_8[0] = FUNC_3(VAR_4->last_msg);
 VAR_9[0] = FUNC_4(VAR_4->last_msg);
 VAR_8[1] = FUNC_3(VAR_6);
 VAR_9[1] = FUNC_4(VAR_6) - 4 - VAR_2;
 FUNC_0(VAR_4->authkey, VAR_3, 2, VAR_8, VAR_9, VAR_7);

 if (FUNC_1(VAR_7, VAR_5, VAR_2) != 0) {
  FUNC_2(VAR_0, "WPS: Incorrect Authenticator");
  return -1;
 }

 return 0;
}
