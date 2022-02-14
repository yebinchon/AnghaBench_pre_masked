
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_target_param {scalar_t__ targinfo; } ;
struct sk_buff {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static unsigned int
FUNC_2(struct sk_buff *VAR_1, const struct xt_target_param *VAR_2)
{
 if (FUNC_0())
  FUNC_1("ip6_tables: error: `%s'\n",
         (const char *)VAR_2->targinfo);

 return VAR_0;
}
