
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_bootstrap_info {scalar_t__ uri; } ;


 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(struct dpp_bootstrap_info *VAR_0, const char *VAR_1)
{
 VAR_0->uri = FUNC_0(VAR_1);
 return VAR_0->uri ? 0 : -1;
}
