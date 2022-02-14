
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_data {int authkey; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*,int ) ;
 int FUNC_5 (struct wpabuf*,int *,int ) ;

int FUNC_6(struct wps_data *VAR_5, struct wpabuf *VAR_6)
{
 u8 VAR_7[VAR_2];

 FUNC_1(VAR_1, "WPS:  * Key Wrap Authenticator");
 FUNC_0(VAR_5->authkey, VAR_3, FUNC_2(VAR_6),
      FUNC_3(VAR_6), VAR_7);

 FUNC_4(VAR_6, VAR_0);
 FUNC_4(VAR_6, VAR_4);
 FUNC_5(VAR_6, VAR_7, VAR_4);
 return 0;
}
