
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_match_param {int family; struct xt_cluster_match_info* matchinfo; } ;
struct xt_cluster_match_info {int node_mask; int flags; } ;
struct sk_buff {scalar_t__ pkt_type; } ;
struct nf_conn {struct nf_conn const* master; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct nf_conn const VAR_3 ;
 struct nf_conn* FUNC_0 (struct sk_buff const*,int*) ;
 unsigned long FUNC_1 (struct nf_conn const*,struct xt_cluster_match_info const*) ;
 int FUNC_2 (struct sk_buff const*,int ) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_4, const struct xt_match_param *VAR_5)
{
 struct sk_buff *VAR_6 = (struct sk_buff *)VAR_4;
 const struct xt_cluster_match_info *VAR_7 = VAR_5->matchinfo;
 const struct nf_conn *VAR_8;
 enum ip_conntrack_info VAR_9;
 unsigned long VAR_10;
 if (!FUNC_2(VAR_4, VAR_5->family) &&
     VAR_4->pkt_type == VAR_1) {
      VAR_6->pkt_type = VAR_0;
 }

 VAR_8 = FUNC_0(VAR_4, &VAR_9);
 if (VAR_8 == ((void*)0))
  return 0;

 if (VAR_8 == &VAR_3)
  return 0;

 if (VAR_8->master)
  VAR_10 = FUNC_1(VAR_8->master, VAR_7);
 else
  VAR_10 = FUNC_1(VAR_8, VAR_7);

 return !!((1 << VAR_10) & VAR_7->node_mask) ^
        !!(VAR_7->flags & VAR_2);
}
