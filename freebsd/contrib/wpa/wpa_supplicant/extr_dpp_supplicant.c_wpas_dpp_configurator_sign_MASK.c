
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dpp; } ;
struct dpp_authentication {int dummy; } ;


 int FUNC_0 (struct dpp_authentication*) ;
 scalar_t__ FUNC_1 (struct dpp_authentication*,char*,int ) ;
 scalar_t__ FUNC_2 (int ,struct wpa_supplicant*,struct dpp_authentication*,char const*) ;
 char* FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*) ;
 struct dpp_authentication* FUNC_5 (int) ;
 int FUNC_6 (struct wpa_supplicant*,struct dpp_authentication*) ;
 int FUNC_7 (struct wpa_supplicant*,struct dpp_authentication*) ;

int FUNC_8(struct wpa_supplicant *VAR_0, const char *VAR_1)
{
 struct dpp_authentication *VAR_2;
 int VAR_3 = -1;
 char *VAR_4 = ((void*)0);

 VAR_2 = FUNC_5(sizeof(*VAR_2));
 if (!VAR_2)
  return -1;

 VAR_4 = FUNC_3(VAR_1, " curve=");
 FUNC_7(VAR_0, VAR_2);
 if (FUNC_2(VAR_0->dpp, VAR_0, VAR_2, VAR_1) == 0 &&
     FUNC_1(VAR_2, VAR_4, 0) == 0)
  VAR_3 = FUNC_6(VAR_0, VAR_2);

 FUNC_0(VAR_2);
 FUNC_4(VAR_4);

 return VAR_3;
}
