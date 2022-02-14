
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_credential {int dummy; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 struct wpabuf* FUNC_0 (int) ;
 int FUNC_1 (struct wpabuf*) ;
 int FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (struct wpabuf*,int ) ;
 int FUNC_4 (struct wpabuf*,struct wpabuf*) ;
 scalar_t__ FUNC_5 (struct wpabuf*,struct wps_credential const*) ;

int FUNC_6(struct wpabuf *VAR_1,
         const struct wps_credential *VAR_2)
{
 struct wpabuf *VAR_3;
 VAR_3 = FUNC_0(200);
 if (VAR_3 == ((void*)0))
  return -1;
 if (FUNC_5(VAR_3, VAR_2)) {
  FUNC_1(VAR_3);
  return -1;
 }
 FUNC_3(VAR_1, VAR_0);
 FUNC_3(VAR_1, FUNC_2(VAR_3));
 FUNC_4(VAR_1, VAR_3);
 FUNC_1(VAR_3);
 return 0;
}
