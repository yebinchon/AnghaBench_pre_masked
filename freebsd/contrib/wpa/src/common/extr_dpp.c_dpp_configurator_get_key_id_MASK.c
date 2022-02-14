
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_global {int dummy; } ;
struct dpp_configurator {int dummy; } ;


 struct dpp_configurator* FUNC_0 (struct dpp_global*,unsigned int) ;
 int FUNC_1 (struct dpp_configurator*,char*,size_t) ;

int FUNC_2(struct dpp_global *VAR_0, unsigned int VAR_1,
    char *VAR_2, size_t VAR_3)
{
 struct dpp_configurator *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_4)
  return -1;

 return FUNC_1(VAR_4, VAR_2, VAR_3);
}
