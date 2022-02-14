
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_global {int bootstrap; } ;
struct dpp_bootstrap_info {int list; int id; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct dpp_global*) ;
 struct dpp_bootstrap_info* FUNC_2 (char const*) ;

struct dpp_bootstrap_info * FUNC_3(struct dpp_global *VAR_0,
         const char *VAR_1)
{
 struct dpp_bootstrap_info *VAR_2;

 if (!VAR_0)
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->id = FUNC_1(VAR_0);
 FUNC_0(&VAR_0->bootstrap, &VAR_2->list);
 return VAR_2;
}
