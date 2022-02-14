
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct user_datum {int value; } ;
struct type_datum {int value; } ;
struct TYPE_11__ {int type; int role; int user; } ;
struct selinux_audit_rule {TYPE_5__ au_ctxt; int au_seqno; } ;
struct role_datum {int value; } ;
struct TYPE_9__ {int table; } ;
struct TYPE_8__ {int table; } ;
struct TYPE_7__ {int table; } ;
struct TYPE_10__ {TYPE_3__ p_types; TYPE_2__ p_roles; TYPE_1__ p_users; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__*) ;
 void* FUNC_1 (int ,char*) ;
 struct selinux_audit_rule* FUNC_2 (int,int ) ;
 int VAR_7 ;
 int FUNC_3 (char*,TYPE_5__*,int ) ;
 int VAR_8 ;
 TYPE_4__ VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct selinux_audit_rule*) ;
 int VAR_10 ;
 int FUNC_7 (char*,char) ;

int FUNC_8(u32 VAR_11, u32 VAR_12, char *VAR_13, void **VAR_14)
{
 struct selinux_audit_rule *VAR_15;
 struct role_datum *VAR_16;
 struct type_datum *VAR_17;
 struct user_datum *VAR_18;
 struct selinux_audit_rule **VAR_19 = (struct selinux_audit_rule **)VAR_14;
 int VAR_20 = 0;

 *VAR_19 = ((void*)0);

 if (!VAR_10)
  return -VAR_4;

 switch (VAR_11) {
 case 128:
 case 131:
 case 129:
 case 133:
 case 135:
 case 134:

  if (VAR_12 != VAR_0 && VAR_12 != VAR_1)
   return -VAR_2;
  break;
 case 130:
 case 132:
 case 136:
 case 137:

  if (FUNC_7(VAR_13, '-'))
   return -VAR_2;
  break;
 default:

  return -VAR_2;
 }

 VAR_15 = FUNC_2(sizeof(struct selinux_audit_rule), VAR_6);
 if (!VAR_15)
  return -VAR_3;

 FUNC_0(&VAR_15->au_ctxt);

 FUNC_4(&VAR_8);

 VAR_15->au_seqno = VAR_7;

 switch (VAR_11) {
 case 128:
 case 133:
  VAR_18 = FUNC_1(VAR_9.p_users.table, VAR_13);
  if (!VAR_18)
   VAR_20 = -VAR_2;
  else
   VAR_15->au_ctxt.user = VAR_18->value;
  break;
 case 131:
 case 135:
  VAR_16 = FUNC_1(VAR_9.p_roles.table, VAR_13);
  if (!VAR_16)
   VAR_20 = -VAR_2;
  else
   VAR_15->au_ctxt.role = VAR_16->value;
  break;
 case 129:
 case 134:
  VAR_17 = FUNC_1(VAR_9.p_types.table, VAR_13);
  if (!VAR_17)
   VAR_20 = -VAR_2;
  else
   VAR_15->au_ctxt.type = VAR_17->value;
  break;
 case 130:
 case 132:
 case 136:
 case 137:
  VAR_20 = FUNC_3(VAR_13, &VAR_15->au_ctxt, VAR_5);
  break;
 }

 FUNC_5(&VAR_8);

 if (VAR_20) {
  FUNC_6(VAR_15);
  VAR_15 = ((void*)0);
 }

 *VAR_19 = VAR_15;

 return VAR_20;
}
