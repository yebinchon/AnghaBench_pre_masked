
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct ovs_header {int dummy; } ;
struct nlattr {int nla_len; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 () ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static size_t FUNC_4(const struct sk_buff *VAR_0,
         const struct nlattr *VAR_1)
{
 size_t VAR_2 = FUNC_1(sizeof(struct ovs_header))
  + FUNC_3(VAR_0->len)
  + FUNC_3(FUNC_2());


 if (VAR_1)
  VAR_2 += FUNC_0(VAR_1->nla_len);

 return VAR_2;
}
