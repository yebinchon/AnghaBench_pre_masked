
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_target_param {int out; int in; int hooknum; struct ip6t_log_info* targinfo; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int logflags; int level; } ;
struct TYPE_4__ {TYPE_1__ log; } ;
struct nf_loginfo {TYPE_2__ u; int type; } ;
struct ip6t_log_info {int prefix; int logflags; int level; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,struct sk_buff*,int ,int ,struct nf_loginfo*,int ) ;

__attribute__((used)) static unsigned int
FUNC_1(struct sk_buff *VAR_3, const struct xt_target_param *VAR_4)
{
 const struct ip6t_log_info *VAR_5 = VAR_4->targinfo;
 struct nf_loginfo VAR_6;

 VAR_6.type = VAR_1;
 VAR_6.u.log.level = VAR_5->level;
 VAR_6.u.log.logflags = VAR_5->logflags;

 FUNC_0(VAR_0, VAR_4->hooknum, VAR_3, VAR_4->in, VAR_4->out,
   &VAR_6, VAR_5->prefix);
 return VAR_2;
}
