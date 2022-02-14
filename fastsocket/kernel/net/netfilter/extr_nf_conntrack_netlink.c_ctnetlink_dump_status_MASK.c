
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_conn {int status; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int
FUNC_2(struct sk_buff *VAR_1, const struct nf_conn *VAR_2)
{
 FUNC_0(VAR_1, VAR_0, FUNC_1(VAR_2->status));
 return 0;

nla_put_failure:
 return -1;
}
