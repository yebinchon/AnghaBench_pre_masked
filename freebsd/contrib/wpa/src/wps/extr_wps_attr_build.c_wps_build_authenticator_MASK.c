
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_data {int authkey; struct wpabuf* last_msg; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int const**,size_t*,int *) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (struct wpabuf*) ;
 size_t FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*,int ) ;
 int FUNC_5 (struct wpabuf*,int *,int ) ;

int FUNC_6(struct wps_data *VAR_5, struct wpabuf *VAR_6)
{
 u8 VAR_7[VAR_2];
 const u8 *VAR_8[2];
 size_t VAR_9[2];

 if (VAR_5->last_msg == ((void*)0)) {
  FUNC_1(VAR_1, "WPS: Last message not available for "
      "building authenticator");
  return -1;
 }




 VAR_8[0] = FUNC_2(VAR_5->last_msg);
 VAR_9[0] = FUNC_3(VAR_5->last_msg);
 VAR_8[1] = FUNC_2(VAR_6);
 VAR_9[1] = FUNC_3(VAR_6);
 FUNC_0(VAR_5->authkey, VAR_4, 2, VAR_8, VAR_9, VAR_7);

 FUNC_1(VAR_1, "WPS:  * Authenticator");
 FUNC_4(VAR_6, VAR_0);
 FUNC_4(VAR_6, VAR_3);
 FUNC_5(VAR_6, VAR_7, VAR_3);

 return 0;
}
