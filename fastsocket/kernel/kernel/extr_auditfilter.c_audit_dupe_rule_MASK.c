
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct audit_watch {int dummy; } ;
struct audit_krule {int field_count; char* filterkey; struct audit_watch* watch; TYPE_1__* fields; int tree; int inode_f; int buflen; int prio; int * mask; int action; int listnr; int flags; int vers_ops; } ;
struct audit_field {int dummy; } ;
struct audit_entry {struct audit_krule rule; } ;
struct TYPE_5__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct audit_entry* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (struct audit_entry*) ;
 int FUNC_3 (struct audit_watch*) ;
 struct audit_entry* FUNC_4 (int) ;
 char* FUNC_5 (char*,int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_7 (int) ;

struct audit_entry *FUNC_8(struct audit_krule *VAR_3,
        struct audit_watch *VAR_4)
{
 u32 VAR_5 = VAR_3->field_count;
 struct audit_entry *VAR_6;
 struct audit_krule *VAR_7;
 char *VAR_8;
 int VAR_9, VAR_10 = 0;

 VAR_6 = FUNC_4(VAR_5);
 if (FUNC_7(!VAR_6))
  return FUNC_0(-VAR_1);

 VAR_7 = &VAR_6->rule;
 VAR_7->vers_ops = VAR_3->vers_ops;
 VAR_7->flags = VAR_3->flags;
 VAR_7->listnr = VAR_3->listnr;
 VAR_7->action = VAR_3->action;
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  VAR_7->mask[VAR_9] = VAR_3->mask[VAR_9];
 VAR_7->prio = VAR_3->prio;
 VAR_7->buflen = VAR_3->buflen;
 VAR_7->inode_f = VAR_3->inode_f;
 VAR_7->watch = ((void*)0);
 VAR_7->field_count = VAR_3->field_count;







 VAR_7->tree = VAR_3->tree;
 FUNC_6(VAR_7->fields, VAR_3->fields, sizeof(struct audit_field) * VAR_5);



 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  switch (VAR_7->fields[VAR_9].type) {
  case 128:
  case 131:
  case 129:
  case 130:
  case 132:
  case 133:
  case 135:
  case 134:
  case 136:
  case 137:
   VAR_10 = FUNC_1(&VAR_7->fields[VAR_9],
             &VAR_3->fields[VAR_9]);
   break;
  case 138:
   VAR_8 = FUNC_5(VAR_3->filterkey, VAR_2);
   if (FUNC_7(!VAR_8))
    VAR_10 = -VAR_1;
   else
    VAR_7->filterkey = VAR_8;
  }
  if (VAR_10) {
   FUNC_2(VAR_6);
   return FUNC_0(VAR_10);
  }
 }

 if (VAR_4) {
  FUNC_3(VAR_4);
  VAR_7->watch = VAR_4;
 }

 return VAR_6;
}
