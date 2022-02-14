
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {struct mls_level* level; } ;
struct TYPE_6__ {TYPE_2__ range; int type; int role; int user; } ;
struct selinux_audit_rule {scalar_t__ au_seqno; TYPE_3__ au_ctxt; } ;
struct mls_level {int dummy; } ;
struct TYPE_4__ {struct mls_level* level; } ;
struct context {TYPE_1__ range; int type; int role; int user; } ;
struct audit_context {int dummy; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct audit_context*,int ,int ,char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct mls_level*,struct mls_level*) ;
 int FUNC_2 (struct mls_level*,struct mls_level*) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 struct context* FUNC_5 (int *,int) ;

int FUNC_6(u32 VAR_7, u32 VAR_8, u32 VAR_9, void *VAR_10,
        struct audit_context *VAR_11)
{
 struct context *VAR_12;
 struct mls_level *VAR_13;
 struct selinux_audit_rule *VAR_14 = VAR_10;
 int VAR_15 = 0;

 if (!VAR_14) {
  FUNC_0(VAR_11, VAR_3, VAR_0,
     "selinux_audit_rule_match: missing rule\n");
  return -VAR_1;
 }

 FUNC_3(&VAR_5);

 if (VAR_14->au_seqno < VAR_4) {
  FUNC_0(VAR_11, VAR_3, VAR_0,
     "selinux_audit_rule_match: stale rule\n");
  VAR_15 = -VAR_2;
  goto out;
 }

 VAR_12 = FUNC_5(&VAR_6, VAR_7);
 if (!VAR_12) {
  FUNC_0(VAR_11, VAR_3, VAR_0,
     "selinux_audit_rule_match: unrecognized SID %d\n",
     VAR_7);
  VAR_15 = -VAR_1;
  goto out;
 }



 switch (VAR_8) {
 case 134:
 case 139:
  switch (VAR_9) {
  case 133:
   VAR_15 = (VAR_12->user == VAR_14->au_ctxt.user);
   break;
  case 128:
   VAR_15 = (VAR_12->user != VAR_14->au_ctxt.user);
   break;
  }
  break;
 case 137:
 case 141:
  switch (VAR_9) {
  case 133:
   VAR_15 = (VAR_12->role == VAR_14->au_ctxt.role);
   break;
  case 128:
   VAR_15 = (VAR_12->role != VAR_14->au_ctxt.role);
   break;
  }
  break;
 case 135:
 case 140:
  switch (VAR_9) {
  case 133:
   VAR_15 = (VAR_12->type == VAR_14->au_ctxt.type);
   break;
  case 128:
   VAR_15 = (VAR_12->type != VAR_14->au_ctxt.type);
   break;
  }
  break;
 case 136:
 case 138:
 case 142:
 case 143:
  VAR_13 = ((VAR_8 == 136 ||
     VAR_8 == 142) ?
    &VAR_12->range.level[0] : &VAR_12->range.level[1]);
  switch (VAR_9) {
  case 133:
   VAR_15 = FUNC_2(&VAR_14->au_ctxt.range.level[0],
          VAR_13);
   break;
  case 128:
   VAR_15 = !FUNC_2(&VAR_14->au_ctxt.range.level[0],
           VAR_13);
   break;
  case 129:
   VAR_15 = (FUNC_1(&VAR_14->au_ctxt.range.level[0],
            VAR_13) &&
     !FUNC_2(&VAR_14->au_ctxt.range.level[0],
            VAR_13));
   break;
  case 130:
   VAR_15 = FUNC_1(&VAR_14->au_ctxt.range.level[0],
           VAR_13);
   break;
  case 131:
   VAR_15 = (FUNC_1(VAR_13,
           &VAR_14->au_ctxt.range.level[0]) &&
     !FUNC_2(VAR_13,
            &VAR_14->au_ctxt.range.level[0]));
   break;
  case 132:
   VAR_15 = FUNC_1(VAR_13,
           &VAR_14->au_ctxt.range.level[0]);
   break;
  }
 }

out:
 FUNC_4(&VAR_5);
 return VAR_15;
}
