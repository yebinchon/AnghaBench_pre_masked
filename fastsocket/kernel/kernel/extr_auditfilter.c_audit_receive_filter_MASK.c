
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int u32 ;
struct task_struct {int rule; } ;
struct audit_netlink_list {int pid; int q; } ;
struct audit_entry {int rule; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 struct task_struct* FUNC_3 (void*,size_t) ;
 int FUNC_4 (struct task_struct*) ;
 int VAR_3 ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (int,int,int *) ;
 int FUNC_7 (int,int,int *) ;
 int FUNC_8 (int ,int ,int ,char*,int *,int) ;
 struct task_struct* FUNC_9 (void*) ;
 int VAR_4 ;
 int FUNC_10 (struct audit_netlink_list*) ;
 struct audit_netlink_list* FUNC_11 (int,int ) ;
 struct task_struct* FUNC_12 (int ,struct audit_netlink_list*,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

int FUNC_17(int VAR_5, int VAR_6, int VAR_7, int VAR_8, void *VAR_9,
    size_t VAR_10, uid_t VAR_11, u32 VAR_12, u32 VAR_13)
{
 struct task_struct *VAR_14;
 struct audit_netlink_list *VAR_15;
 int VAR_16 = 0;
 struct audit_entry *VAR_17;

 switch (VAR_5) {
 case 129:
 case 128:






  VAR_15 = FUNC_11(sizeof(struct audit_netlink_list), VAR_2);
  if (!VAR_15)
   return -VAR_1;
  VAR_15->pid = VAR_6;
  FUNC_15(&VAR_15->q);

  FUNC_13(&VAR_3);
  if (VAR_5 == 129)
   FUNC_6(VAR_6, VAR_8, &VAR_15->q);
  else
   FUNC_7(VAR_6, VAR_8, &VAR_15->q);
  FUNC_14(&VAR_3);

  VAR_14 = FUNC_12(VAR_4, VAR_15, "audit_send_list");
  if (FUNC_0(VAR_14)) {
   FUNC_16(&VAR_15->q);
   FUNC_10(VAR_15);
   VAR_16 = FUNC_1(VAR_14);
  }
  break;
 case 133:
 case 132:
  if (VAR_5 == 133)
   VAR_17 = FUNC_9(VAR_9);
  else
   VAR_17 = FUNC_3(VAR_9, VAR_10);
  if (FUNC_0(VAR_17))
   return FUNC_1(VAR_17);

  VAR_16 = FUNC_2(VAR_17);
  FUNC_8(VAR_11, VAR_12, VAR_13, "add rule",
          &VAR_17->rule, !VAR_16);

  if (VAR_16)
   FUNC_5(VAR_17);
  break;
 case 131:
 case 130:
  if (VAR_5 == 131)
   VAR_17 = FUNC_9(VAR_9);
  else
   VAR_17 = FUNC_3(VAR_9, VAR_10);
  if (FUNC_0(VAR_17))
   return FUNC_1(VAR_17);

  VAR_16 = FUNC_4(VAR_17);
  FUNC_8(VAR_11, VAR_12, VAR_13, "remove rule",
          &VAR_17->rule, !VAR_16);

  FUNC_5(VAR_17);
  break;
 default:
  return -VAR_0;
 }

 return VAR_16;
}
