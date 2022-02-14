
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct dpp_authentication {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wpabuf* FUNC_0 (struct dpp_authentication*,char const*) ;
 int FUNC_1 (struct wpabuf*) ;
 int FUNC_2 (struct wpabuf*,struct wpabuf*) ;
 struct wpabuf* FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,char*,struct wpabuf*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct wpabuf*) ;
 scalar_t__ FUNC_7 (struct wpabuf*) ;

struct wpabuf * FUNC_8(struct dpp_authentication *VAR_2,
       const char *VAR_3)
{
 struct wpabuf *VAR_4, *VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_5) {
  FUNC_5(VAR_0,
      "DPP: No configuration request data available");
  return ((void*)0);
 }

 VAR_4 = FUNC_3(0, 10 + 2 + FUNC_7(VAR_5));
 if (!VAR_4) {
  FUNC_6(VAR_5);
  return ((void*)0);
 }

 FUNC_1(VAR_4);
 FUNC_2(VAR_4, VAR_5);
 FUNC_6(VAR_5);
 FUNC_4(VAR_1, "DPP: GAS Config Request", VAR_4);

 return VAR_4;
}
