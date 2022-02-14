
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
typedef enum wps_attribute { ____Placeholder_wps_attribute } wps_attribute ;


 size_t FUNC_0 (char const*) ;
 int FUNC_1 (struct wpabuf*,size_t) ;
 int FUNC_2 (struct wpabuf*,char const*,size_t) ;
 int FUNC_3 (struct wpabuf*,char) ;
 int FUNC_4 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_5(struct wpabuf *VAR_0, enum wps_attribute VAR_1,
         const char *VAR_2)
{
 size_t VAR_3;

 VAR_3 = VAR_2 ? FUNC_0(VAR_2) : 0;
 if (FUNC_4(VAR_0) < 4 + VAR_3)
  return -1;
 FUNC_1(VAR_0, VAR_1);

 if (VAR_3 == 0) {





  if (FUNC_4(VAR_0) < 3)
   return -1;
  FUNC_1(VAR_0, 1);
  FUNC_3(VAR_0, ' ');
  return 0;
 }

 FUNC_1(VAR_0, VAR_3);
 if (VAR_2)
  FUNC_2(VAR_0, VAR_2, VAR_3);
 return 0;
}
