
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gid; int uid; int pid; } ;
struct netlink_skb_parms {int sid; int loginuid; TYPE_1__ creds; } ;
struct audit_krule {int field_count; int action; struct audit_field* fields; } ;
struct audit_field {int type; int lsm_rule; int op; int val; } ;
typedef enum audit_state { ____Placeholder_audit_state } audit_state ;



 int VAR_0 ;




 int VAR_1 ;






 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int,int ,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct netlink_skb_parms *VAR_2,
       struct audit_krule *VAR_3,
       enum audit_state *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->field_count; VAR_5++) {
  struct audit_field *VAR_6 = &VAR_3->fields[VAR_5];
  int VAR_7 = 0;

  switch (VAR_6->type) {
  case 134:
   VAR_7 = FUNC_0(VAR_2->creds.pid, VAR_6->op, VAR_6->val);
   break;
  case 128:
   VAR_7 = FUNC_0(VAR_2->creds.uid, VAR_6->op, VAR_6->val);
   break;
  case 137:
   VAR_7 = FUNC_0(VAR_2->creds.gid, VAR_6->op, VAR_6->val);
   break;
  case 136:
   VAR_7 = FUNC_0(VAR_2->loginuid, VAR_6->op, VAR_6->val);
   break;
  case 129:
  case 132:
  case 130:
  case 131:
  case 133:
   if (VAR_6->lsm_rule)
    VAR_7 = FUNC_1(VAR_2->sid,
           VAR_6->type,
           VAR_6->op,
           VAR_6->lsm_rule,
           ((void*)0));
   break;
  }

  if (!VAR_7)
   return 0;
 }
 switch (VAR_3->action) {
 case 135: *VAR_4 = VAR_0; break;
 case 138: *VAR_4 = VAR_1; break;
 }
 return 1;
}
