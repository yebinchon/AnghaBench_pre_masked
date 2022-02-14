
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct dpp_configuration {int akm; } ;
struct dpp_authentication {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct wpabuf* FUNC_1 (struct dpp_authentication*,struct dpp_configuration*,int) ;
 int FUNC_2 (struct wpabuf*,struct dpp_configuration*) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*,char*,int ) ;
 int FUNC_7 (struct wpabuf*,char*) ;

__attribute__((used)) static struct wpabuf *
FUNC_8(struct dpp_authentication *VAR_1, int VAR_2,
     struct dpp_configuration *VAR_3)
{
 struct wpabuf *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_3, 1000);
 if (!VAR_4)
  return ((void*)0);

 FUNC_6(VAR_4, "\"cred\":{\"akm\":\"%s\",", FUNC_0(VAR_3->akm));
 FUNC_2(VAR_4, VAR_3);
 FUNC_7(VAR_4, "}}");

 FUNC_3(VAR_0, "DPP: Configuration Object (legacy)",
         FUNC_4(VAR_4), FUNC_5(VAR_4));

 return VAR_4;
}
