
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nf_conn_counter {int bytes; int packets; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
typedef enum ctattr_type { ____Placeholder_ctattr_type } ctattr_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (int ) ;
 struct nf_conn_counter* FUNC_2 (struct nf_conn const*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static int
FUNC_5(struct sk_buff *VAR_5, const struct nf_conn *VAR_6,
   enum ip_conntrack_dir VAR_7)
{
 enum ctattr_type VAR_8 = VAR_7 ? VAR_3: VAR_1;
 struct nlattr *VAR_9;
 const struct nf_conn_counter *VAR_10;

 VAR_10 = FUNC_2(VAR_6);
 if (!VAR_10)
  return 0;

 VAR_9 = FUNC_4(VAR_5, VAR_8 | VAR_4);
 if (!VAR_9)
  goto nla_put_failure;

 FUNC_0(VAR_5, VAR_2,
       FUNC_1(VAR_10[VAR_7].packets));
 FUNC_0(VAR_5, VAR_0,
       FUNC_1(VAR_10[VAR_7].bytes));

 FUNC_3(VAR_5, VAR_9);

 return 0;

nla_put_failure:
 return -1;
}
