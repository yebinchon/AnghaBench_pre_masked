
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_global {int dummy; } ;
struct dpp_authentication {int conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (struct dpp_authentication*,char const*) ;
 int FUNC_2 (struct dpp_global*,int ) ;
 char* FUNC_3 (char const*,char*) ;
 int FUNC_4 (void*,int ,char*) ;
 int FUNC_5 (int ,char*,...) ;

int FUNC_6(struct dpp_global *VAR_2, void *VAR_3,
    struct dpp_authentication *VAR_4,
    const char *VAR_5)
{
 const char *VAR_6;

 if (!VAR_5)
  return 0;

 FUNC_5(VAR_0, "DPP: Set configurator parameters: %s", VAR_5);

 VAR_6 = FUNC_3(VAR_5, " configurator=");
 if (VAR_6) {
  VAR_6 += 14;
  VAR_4->conf = FUNC_2(VAR_2, FUNC_0(VAR_6));
  if (!VAR_4->conf) {
   FUNC_5(VAR_1,
       "DPP: Could not find the specified configurator");
   return -1;
  }
 }

 if (FUNC_1(VAR_4, VAR_5) < 0) {
  FUNC_4(VAR_3, VAR_1,
   "DPP: Failed to set configurator parameters");
  return -1;
 }
 return 0;
}
