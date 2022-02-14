
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_credential {int mac_addr; } ;
struct wpabuf {int dummy; } ;


 scalar_t__ FUNC_0 (struct wpabuf*,struct wps_credential const*) ;
 scalar_t__ FUNC_1 (struct wpabuf*,struct wps_credential const*) ;
 scalar_t__ FUNC_2 (struct wpabuf*,struct wps_credential const*) ;
 scalar_t__ FUNC_3 (struct wpabuf*,struct wps_credential const*) ;
 scalar_t__ FUNC_4 (struct wpabuf*,struct wps_credential const*) ;
 scalar_t__ FUNC_5 (struct wpabuf*,int ) ;

__attribute__((used)) static int FUNC_6(struct wpabuf *VAR_0,
    const struct wps_credential *VAR_1)
{
 if (FUNC_2(VAR_0, VAR_1) ||
     FUNC_4(VAR_0, VAR_1) ||
     FUNC_0(VAR_0, VAR_1) ||
     FUNC_1(VAR_0, VAR_1) ||
     FUNC_3(VAR_0, VAR_1) ||
     FUNC_5(VAR_0, VAR_1->mac_addr))
  return -1;
 return 0;
}
