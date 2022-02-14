
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,char const*,char const*) ;
 int FUNC_1 (struct wpabuf*) ;
 struct wpabuf* FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(int VAR_1, const char *VAR_2, struct wpabuf **VAR_3,
       const char *VAR_4)
{
 struct wpabuf *VAR_5;

 if (VAR_4[0] == '\0') {
  FUNC_1(*VAR_3);
  *VAR_3 = ((void*)0);
  return 0;
 }

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5) {
  FUNC_0(VAR_0, "Line %d: Invalid %s '%s'",
      VAR_1, VAR_2, VAR_4);
  return -1;
 }

 FUNC_1(*VAR_3);
 *VAR_3 = VAR_5;

 return 0;
}
