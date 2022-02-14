
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_supplicant {struct wpabuf* ric_ies; } ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (struct wpabuf*) ;
 struct wpabuf* FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct wpa_supplicant *VAR_0,
       const char *VAR_1)
{
 struct wpabuf *VAR_2;

 if (*VAR_1 == '\0' || FUNC_0(VAR_1, "\"\"") == 0) {
  FUNC_1(VAR_0->ric_ies);
  VAR_0->ric_ies = ((void*)0);
  return 0;
 }

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2)
  return -1;

 FUNC_1(VAR_0->ric_ies);
 VAR_0->ric_ies = VAR_2;

 return 0;
}
