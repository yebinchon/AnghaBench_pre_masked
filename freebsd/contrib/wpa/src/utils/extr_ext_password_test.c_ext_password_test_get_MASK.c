
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct ext_password_test_data {char* params; } ;


 int VAR_0 ;
 struct wpabuf* FUNC_0 (int) ;
 char* FUNC_1 (char*,char) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (int ,char*,char const*) ;
 int FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*) ;
 int FUNC_8 (struct wpabuf*,char*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_9(void *VAR_1, const char *VAR_2)
{
 struct ext_password_test_data *VAR_3 = VAR_1;
 char *VAR_4, *VAR_5;
 size_t VAR_6;

 FUNC_5(VAR_0, "EXT PW TEST: get(%s)", VAR_2);

 VAR_4 = VAR_3->params;
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 VAR_6 = FUNC_2(VAR_2);

 while (VAR_4 && *VAR_4) {
  if (FUNC_3(VAR_4, VAR_2, VAR_6) == 0 && VAR_4[VAR_6] == '=') {
   struct wpabuf *VAR_7;
   VAR_4 += VAR_6 + 1;
   VAR_5 = VAR_4;
   while (*VAR_5 != '|' && *VAR_5 != '\0')
    VAR_5++;
   VAR_7 = FUNC_0(VAR_5 - VAR_4);
   if (VAR_7 == ((void*)0))
    return ((void*)0);
   FUNC_8(VAR_7, VAR_4, VAR_5 - VAR_4);
   FUNC_4(VAR_0, "EXT PW TEST: value",
           FUNC_6(VAR_7),
           FUNC_7(VAR_7));
   return VAR_7;
  }

  VAR_4 = FUNC_1(VAR_4 + 1, '|');
  if (VAR_4)
   VAR_4++;
 }

 FUNC_5(VAR_0, "EXT PW TEST: get(%s) - not found", VAR_2);

 return ((void*)0);
}
