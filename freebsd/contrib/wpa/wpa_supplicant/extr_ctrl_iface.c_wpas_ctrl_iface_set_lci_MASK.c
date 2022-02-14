
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_supplicant {struct wpabuf* lci; int lci_time; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (struct wpabuf*) ;
 struct wpabuf* FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(struct wpa_supplicant *VAR_0,
       const char *VAR_1)
{
 struct wpabuf *VAR_2;

 if (*VAR_1 == '\0' || FUNC_1(VAR_1, "\"\"") == 0) {
  FUNC_2(VAR_0->lci);
  VAR_0->lci = ((void*)0);
  return 0;
 }

 VAR_2 = FUNC_3(VAR_1);
 if (!VAR_2)
  return -1;

 if (FUNC_0(&VAR_0->lci_time)) {
  FUNC_2(VAR_2);
  return -1;
 }

 FUNC_2(VAR_0->lci);
 VAR_0->lci = VAR_2;

 return 0;
}
