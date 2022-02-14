
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_target_param {int out; int in; int hooknum; int family; struct xt_nflog_info* targinfo; } ;
struct xt_nflog_info {int prefix; int threshold; int group; int len; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int qthreshold; int group; int copy_len; } ;
struct TYPE_4__ {TYPE_1__ ulog; } ;
struct nf_loginfo {TYPE_2__ u; int type; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,struct sk_buff*,int ,int ,struct nf_loginfo*,int ) ;

__attribute__((used)) static unsigned int
FUNC_1(struct sk_buff *VAR_2, const struct xt_target_param *VAR_3)
{
 const struct xt_nflog_info *VAR_4 = VAR_3->targinfo;
 struct nf_loginfo VAR_5;

 VAR_5.type = VAR_0;
 VAR_5.u.ulog.copy_len = VAR_4->len;
 VAR_5.u.ulog.group = VAR_4->group;
 VAR_5.u.ulog.qthreshold = VAR_4->threshold;

 FUNC_0(VAR_3->family, VAR_3->hooknum, VAR_2, VAR_3->in,
     VAR_3->out, &VAR_5, VAR_4->prefix);
 return VAR_1;
}
