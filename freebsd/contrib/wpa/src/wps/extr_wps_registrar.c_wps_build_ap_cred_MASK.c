
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_data {int dummy; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 struct wpabuf* FUNC_0 (int) ;
 int FUNC_1 (struct wpabuf*) ;
 int FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*,int ) ;
 int FUNC_5 (struct wpabuf*,struct wpabuf*) ;
 scalar_t__ FUNC_6 (struct wps_data*,struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_7(struct wps_data *VAR_1)
{
 struct wpabuf *VAR_2, *VAR_3;

 VAR_2 = FUNC_0(1000);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_3 = FUNC_0(200);
 if (VAR_3 == ((void*)0)) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }

 if (FUNC_6(VAR_1, VAR_3)) {
  FUNC_1(VAR_3);
  FUNC_2(VAR_2);
  return ((void*)0);
 }

 FUNC_4(VAR_2, VAR_0);
 FUNC_4(VAR_2, FUNC_3(VAR_3));
 FUNC_5(VAR_2, VAR_3);
 FUNC_1(VAR_3);

 return VAR_2;
}
