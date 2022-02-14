
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_target_param {scalar_t__ hooknum; int * out; struct nf_nat_multi_range_compat* targinfo; } ;
struct sk_buff {int dummy; } ;
struct nf_nat_multi_range_compat {int * range; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 struct nf_conn* FUNC_1 (struct sk_buff*,int*) ;
 unsigned int FUNC_2 (struct nf_conn*,int *,int ) ;

__attribute__((used)) static unsigned int
FUNC_3(struct sk_buff *VAR_5, const struct xt_target_param *VAR_6)
{
 struct nf_conn *VAR_7;
 enum ip_conntrack_info VAR_8;
 const struct nf_nat_multi_range_compat *VAR_9 = VAR_6->targinfo;

 FUNC_0(VAR_6->hooknum == VAR_4);

 VAR_7 = FUNC_1(VAR_5, &VAR_8);


 FUNC_0(VAR_7 && (VAR_8 == VAR_1 || VAR_8 == VAR_2 ||
       VAR_8 == VAR_2 + VAR_0));
 FUNC_0(VAR_6->out != ((void*)0));

 return FUNC_2(VAR_7, &VAR_9->range[0], VAR_3);
}
