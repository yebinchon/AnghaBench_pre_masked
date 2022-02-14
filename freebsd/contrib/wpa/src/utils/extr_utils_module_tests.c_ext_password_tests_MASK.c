
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct ext_password_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ext_password_data*) ;
 int FUNC_1 (struct wpabuf*) ;
 struct wpabuf* FUNC_2 (struct ext_password_data*,char*) ;
 struct ext_password_data* FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(void)
{
 struct ext_password_data *VAR_1;
 int VAR_2 = 0;
 struct wpabuf *VAR_3;

 FUNC_4(VAR_0, "ext_password tests");

 VAR_1 = FUNC_3("unknown", "foo");
 if (VAR_1 != ((void*)0))
  return -1;

 VAR_1 = FUNC_3("test", ((void*)0));
 if (VAR_1 == ((void*)0))
  return -1;
 VAR_3 = FUNC_2(VAR_1, "foo");
 if (VAR_3 != ((void*)0))
  VAR_2 = -1;
 FUNC_1(VAR_3);

 FUNC_0(VAR_1);

 VAR_3 = FUNC_2(((void*)0), "foo");
 if (VAR_3 != ((void*)0))
  VAR_2 = -1;
 FUNC_1(VAR_3);

 return VAR_2;
}
