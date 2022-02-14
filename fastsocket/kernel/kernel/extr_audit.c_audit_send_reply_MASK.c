
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct sk_buff {int dummy; } ;
struct audit_reply {int pid; struct sk_buff* skb; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 struct sk_buff* FUNC_1 (int,int,int,int,int,void*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct audit_reply*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct audit_reply* FUNC_4 (int,int ) ;
 struct task_struct* FUNC_5 (int ,struct audit_reply*,char*) ;

void FUNC_6(int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6,
        void *VAR_7, int VAR_8)
{
 struct sk_buff *VAR_9;
 struct task_struct *VAR_10;
 struct audit_reply *VAR_11 = FUNC_4(sizeof(struct audit_reply),
         VAR_0);

 if (!VAR_11)
  return;

 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (!VAR_9)
  goto out;

 VAR_11->pid = VAR_2;
 VAR_11->skb = VAR_9;

 VAR_10 = FUNC_5(VAR_1, VAR_11, "audit_send_reply");
 if (!FUNC_0(VAR_10))
  return;
 FUNC_3(VAR_9);
out:
 FUNC_2(VAR_11);
}
