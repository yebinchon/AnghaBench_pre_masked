
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_supplicant {int dummy; } ;


 int FUNC_0 (struct wpa_supplicant*,int ,int ,int,unsigned int) ;
 int FUNC_1 (struct wpabuf const*) ;
 int FUNC_2 (struct wpabuf const*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, const struct wpabuf *VAR_1,
    unsigned int VAR_2)
{
 struct wpa_supplicant *VAR_3 = VAR_0;
 return FUNC_0(VAR_3, FUNC_1(VAR_1), FUNC_2(VAR_1), 1,
     VAR_2);
}
