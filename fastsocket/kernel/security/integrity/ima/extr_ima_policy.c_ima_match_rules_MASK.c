
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct task_struct {TYPE_2__* cred; } ;
struct inode {TYPE_1__* i_sb; } ;
struct ima_measure_rule_entry {int flags; int func; int mask; scalar_t__ fsmagic; scalar_t__ uid; TYPE_3__* lsm; } ;
typedef enum ima_hooks { ____Placeholder_ima_hooks } ima_hooks ;
struct TYPE_6__ {int rule; int type; } ;
struct TYPE_5__ {scalar_t__ uid; } ;
struct TYPE_4__ {scalar_t__ s_magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 struct task_struct* VAR_6 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (struct inode*,int *) ;
 int FUNC_2 (struct task_struct*,int *) ;

__attribute__((used)) static bool FUNC_3(struct ima_measure_rule_entry *VAR_7,
       struct inode *VAR_8, enum ima_hooks VAR_9, int VAR_10)
{
 struct task_struct *VAR_11 = VAR_6;
 int VAR_12;

 if ((VAR_7->flags & VAR_2) && VAR_7->func != VAR_9)
  return 0;
 if ((VAR_7->flags & VAR_3) && VAR_7->mask != VAR_10)
  return 0;
 if ((VAR_7->flags & VAR_1)
     && VAR_7->fsmagic != VAR_8->i_sb->s_magic)
  return 0;
 if ((VAR_7->flags & VAR_4) && VAR_7->uid != VAR_11->cred->uid)
  return 0;
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  int VAR_13 = 0;
  u32 VAR_14, VAR_15;

  if (!VAR_7->lsm[VAR_12].rule)
   continue;

  switch (VAR_12) {
  case 131:
  case 133:
  case 132:
   FUNC_1(VAR_8, &VAR_14);
   VAR_13 = FUNC_0(VAR_14,
       VAR_7->lsm[VAR_12].type,
       VAR_0,
       VAR_7->lsm[VAR_12].rule,
       ((void*)0));
   break;
  case 128:
  case 130:
  case 129:
   FUNC_2(VAR_11, &VAR_15);
   VAR_13 = FUNC_0(VAR_15,
       VAR_7->lsm[VAR_12].type,
       VAR_0,
       VAR_7->lsm[VAR_12].rule,
       ((void*)0));
  default:
   break;
  }
  if (!VAR_13)
   return 0;
 }
 return 1;
}
