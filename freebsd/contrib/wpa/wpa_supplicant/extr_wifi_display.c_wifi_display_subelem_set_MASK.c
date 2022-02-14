
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_global {struct wpabuf** wfd_subelem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int ,size_t) ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 size_t FUNC_4 (char*) ;
 int FUNC_5 (struct wpa_global*,struct wpabuf*) ;
 int FUNC_6 (struct wpa_global*) ;
 int FUNC_7 (int ,char*,int) ;
 struct wpabuf* FUNC_8 (int) ;
 int FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*,size_t) ;
 int FUNC_11 (struct wpabuf*,int) ;

int FUNC_12(struct wpa_global *VAR_2, char *VAR_3)
{
 char *VAR_4;
 int VAR_5;
 size_t VAR_6;
 struct wpabuf *VAR_7;

 VAR_4 = FUNC_2(VAR_3, ' ');
 if (VAR_4 == ((void*)0))
  return -1;
 *VAR_4++ = '\0';

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6 & 1)
  return -1;
 VAR_6 /= 2;

 if (FUNC_3(VAR_3, "all") == 0) {
  int VAR_8;

  VAR_7 = FUNC_8(VAR_6);
  if (VAR_7 == ((void*)0))
   return -1;
  if (FUNC_1(VAR_4, FUNC_10(VAR_7, VAR_6), VAR_6) < 0) {
   FUNC_9(VAR_7);
   return -1;
  }
  VAR_8 = FUNC_5(VAR_2, VAR_7);
  FUNC_9(VAR_7);
  return VAR_8;
 }

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 < 0 || VAR_5 >= VAR_0)
  return -1;

 if (VAR_6 == 0) {

  VAR_7 = ((void*)0);
  FUNC_7(VAR_1, "WFD: Clear subelement %d", VAR_5);
 } else {
  VAR_7 = FUNC_8(1 + VAR_6);
  if (VAR_7 == ((void*)0))
   return -1;
  FUNC_11(VAR_7, VAR_5);
  if (FUNC_1(VAR_4, FUNC_10(VAR_7, VAR_6), VAR_6) < 0) {
   FUNC_9(VAR_7);
   return -1;
  }
  FUNC_7(VAR_1, "WFD: Set subelement %d", VAR_5);
 }

 FUNC_9(VAR_2->wfd_subelem[VAR_5]);
 VAR_2->wfd_subelem[VAR_5] = VAR_7;
 FUNC_6(VAR_2);

 return 0;
}
