
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_target_param {int out; int in; int hooknum; struct ebt_log_info* targinfo; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int logflags; int level; } ;
struct TYPE_4__ {TYPE_1__ log; } ;
struct nf_loginfo {TYPE_2__ u; int type; } ;
struct ebt_log_info {int bitmask; int prefix; int loglevel; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,struct sk_buff*,int ,int ,struct nf_loginfo*,int ) ;
 int FUNC_1 (int ,int ,struct sk_buff*,int ,int ,struct nf_loginfo*,char*,int ) ;

__attribute__((used)) static unsigned int
FUNC_2(struct sk_buff *VAR_4, const struct xt_target_param *VAR_5)
{
 const struct ebt_log_info *VAR_6 = VAR_5->targinfo;
 struct nf_loginfo VAR_7;

 VAR_7.type = VAR_3;
 VAR_7.u.log.level = VAR_6->loglevel;
 VAR_7.u.log.logflags = VAR_6->bitmask;

 if (VAR_6->bitmask & VAR_1)
  FUNC_1(VAR_2, VAR_5->hooknum, VAR_4, VAR_5->in,
                VAR_5->out, &VAR_7, "%s", VAR_6->prefix);
 else
  FUNC_0(VAR_2, VAR_5->hooknum, VAR_4, VAR_5->in,
                 VAR_5->out, &VAR_7, VAR_6->prefix);
 return VAR_0;
}
