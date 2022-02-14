
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_global {int dummy; } ;
struct dpp_bootstrap_info {char const* uri; } ;


 struct dpp_bootstrap_info* FUNC_0 (struct dpp_global*,unsigned int) ;

const char * FUNC_1(struct dpp_global *VAR_0, unsigned int VAR_1)
{
 struct dpp_bootstrap_info *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);
 return VAR_2->uri;
}
