
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_global {struct wpabuf** wfd_subelem; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 struct wpabuf* FUNC_2 (struct wpa_global*) ;
 int FUNC_3 (char*,size_t,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct wpabuf*) ;
 scalar_t__ FUNC_5 (struct wpabuf*) ;
 scalar_t__ FUNC_6 (struct wpabuf*) ;
 scalar_t__ FUNC_7 (struct wpabuf*) ;

int FUNC_8(struct wpa_global *VAR_1, char *VAR_2,
        char *VAR_3, size_t VAR_4)
{
 int VAR_5;

 if (FUNC_1(VAR_2, "all") == 0) {
  struct wpabuf *VAR_6;
  int VAR_7;

  VAR_6 = FUNC_2(VAR_1);
  if (VAR_6 == ((void*)0))
   return 0;
  VAR_7 = FUNC_3(VAR_3, VAR_4, FUNC_5(VAR_6),
           FUNC_7(VAR_6));
  FUNC_4(VAR_6);
  return VAR_7;
 }

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 < 0 || VAR_5 >= VAR_0)
  return -1;

 if (VAR_1->wfd_subelem[VAR_5] == ((void*)0))
  return 0;

 return FUNC_3(VAR_3, VAR_4,
    FUNC_6(VAR_1->wfd_subelem[VAR_5]) +
    1,
    FUNC_7(VAR_1->wfd_subelem[VAR_5]) - 1);
}
