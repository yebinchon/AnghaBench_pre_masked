
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct audit_rule {int field_count; int* fields; int* values; } ;
struct audit_field {scalar_t__ op; int type; int val; } ;
struct TYPE_4__ {int vers_ops; TYPE_1__* inode_f; struct audit_field* arch_f; struct audit_field* fields; } ;
struct audit_entry {TYPE_2__ rule; } ;
struct TYPE_3__ {scalar_t__ op; } ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct audit_entry* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct audit_entry*) ;
 int VAR_8 ;
 int FUNC_2 (struct audit_entry*) ;
 struct audit_entry* FUNC_3 (struct audit_rule*) ;
 int FUNC_4 (TYPE_2__*,struct audit_field*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct audit_entry *FUNC_6(struct audit_rule *VAR_9)
{
 struct audit_entry *VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 VAR_10 = FUNC_3(VAR_9);
 if (FUNC_1(VAR_10))
  goto exit_nofree;

 for (VAR_12 = 0; VAR_12 < VAR_9->field_count; VAR_12++) {
  struct audit_field *VAR_13 = &VAR_10->rule.fields[VAR_12];
  u32 VAR_14;

  VAR_14 = VAR_9->fields[VAR_12] & (VAR_0|VAR_1);



  if (VAR_14 & VAR_0)
   VAR_13->op = VAR_6;
  else if (!VAR_14)
   VAR_13->op = VAR_5;
  else
   VAR_13->op = FUNC_5(VAR_14);

  VAR_10->rule.vers_ops = (VAR_14 & VAR_1) ? 2 : 1;

  VAR_13->type = VAR_9->fields[VAR_12] & ~(VAR_0|VAR_1);
  VAR_13->val = VAR_9->values[VAR_12];

  VAR_11 = -VAR_7;
  if (VAR_13->op == VAR_2)
   goto exit_free;

  switch(VAR_13->type) {
  default:
   goto exit_free;
  case 133:
  case 128:
  case 144:
  case 129:
  case 140:
  case 139:
  case 145:
  case 131:
  case 141:
  case 137:
  case 134:
  case 136:
  case 132:
  case 147:
  case 146:
  case 143:
  case 130:

   if (VAR_13->op == VAR_3 || VAR_13->op == VAR_4)
    goto exit_free;
   break;
  case 151:
  case 150:
  case 149:
  case 148:
   break;

  case 152:
   if (VAR_13->op != VAR_6 && VAR_13->op != VAR_5)
    goto exit_free;
   VAR_10->rule.arch_f = VAR_13;
   break;
  case 135:
   if (VAR_13->val & ~15)
    goto exit_free;
   break;
  case 142:
   if (VAR_13->val & ~VAR_8)
    goto exit_free;
   break;
  case 138:
   VAR_11 = FUNC_4(&VAR_10->rule, VAR_13);
   if (VAR_11)
    goto exit_free;
   break;
  }
 }

 if (VAR_10->rule.inode_f && VAR_10->rule.inode_f->op == VAR_6)
  VAR_10->rule.inode_f = ((void*)0);

exit_nofree:
 return VAR_10;

exit_free:
 FUNC_2(VAR_10);
 return FUNC_0(VAR_11);
}
