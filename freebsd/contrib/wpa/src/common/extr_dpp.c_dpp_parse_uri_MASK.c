
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_bootstrap_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dpp_bootstrap_info*) ;
 scalar_t__ FUNC_1 (struct dpp_bootstrap_info*,char const*) ;
 scalar_t__ FUNC_2 (struct dpp_bootstrap_info*,char const*) ;
 scalar_t__ FUNC_3 (struct dpp_bootstrap_info*,char const*) ;
 scalar_t__ FUNC_4 (struct dpp_bootstrap_info*,char const*) ;
 scalar_t__ FUNC_5 (struct dpp_bootstrap_info*,char const*) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;
 struct dpp_bootstrap_info* FUNC_9 (int) ;
 int FUNC_10 (int ,char*,char const*,int) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static struct dpp_bootstrap_info * FUNC_12(const char *VAR_2)
{
 const char *VAR_3 = VAR_2;
 const char *VAR_4;
 const char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 struct dpp_bootstrap_info *VAR_9;

 FUNC_10(VAR_0, "DPP: URI", VAR_2, FUNC_7(VAR_2));

 if (FUNC_8(VAR_3, "DPP:", 4) != 0) {
  FUNC_11(VAR_1, "DPP: Not a DPP URI");
  return ((void*)0);
 }
 VAR_3 += 4;

 for (;;) {
  VAR_4 = FUNC_6(VAR_3, ';');
  if (!VAR_4)
   break;

  if (VAR_4 == VAR_3) {


   VAR_3++;
   continue;
  }

  if (VAR_3[0] == 'C' && VAR_3[1] == ':' && !VAR_5)
   VAR_5 = VAR_3 + 2;
  else if (VAR_3[0] == 'M' && VAR_3[1] == ':' && !VAR_6)
   VAR_6 = VAR_3 + 2;
  else if (VAR_3[0] == 'I' && VAR_3[1] == ':' && !VAR_7)
   VAR_7 = VAR_3 + 2;
  else if (VAR_3[0] == 'K' && VAR_3[1] == ':' && !VAR_8)
   VAR_8 = VAR_3 + 2;
  else
   FUNC_10(VAR_0,
       "DPP: Ignore unrecognized URI parameter",
       VAR_3, VAR_4 - VAR_3);
  VAR_3 = VAR_4 + 1;
 }

 if (!VAR_8) {
  FUNC_11(VAR_1, "DPP: URI missing public-key");
  return ((void*)0);
 }

 VAR_9 = FUNC_9(sizeof(*VAR_9));
 if (!VAR_9)
  return ((void*)0);

 if (FUNC_1(VAR_9, VAR_2) < 0 ||
     FUNC_2(VAR_9, VAR_5) < 0 ||
     FUNC_4(VAR_9, VAR_6) < 0 ||
     FUNC_3(VAR_9, VAR_7) < 0 ||
     FUNC_5(VAR_9, VAR_8) < 0) {
  FUNC_0(VAR_9);
  VAR_9 = ((void*)0);
 }

 return VAR_9;
}
