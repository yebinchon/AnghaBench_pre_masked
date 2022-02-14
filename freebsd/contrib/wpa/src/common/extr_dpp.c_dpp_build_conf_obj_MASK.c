
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct dpp_configuration {int akm; } ;
struct dpp_authentication {struct dpp_configuration* conf_sta; struct dpp_configuration* conf_ap; scalar_t__ config_obj_override; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct wpabuf* FUNC_1 (struct dpp_authentication*,int,struct dpp_configuration*) ;
 struct wpabuf* FUNC_2 (struct dpp_authentication*,int,struct dpp_configuration*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*,...) ;
 struct wpabuf* FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static struct wpabuf *
FUNC_6(struct dpp_authentication *VAR_1, int VAR_2)
{
 struct dpp_configuration *VAR_3;
 VAR_3 = VAR_2 ? VAR_1->conf_ap : VAR_1->conf_sta;
 if (!VAR_3) {
  FUNC_4(VAR_0,
      "DPP: No configuration available for Enrollee(%s) - reject configuration request",
      VAR_2 ? "ap" : "sta");
  return ((void*)0);
 }

 if (FUNC_0(VAR_3->akm))
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 return FUNC_2(VAR_1, VAR_2, VAR_3);
}
