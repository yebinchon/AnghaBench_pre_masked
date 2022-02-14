
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_data_ready ) (struct sock*,int ) ;int sk_receive_queue; } ;
struct sk_buff {int len; int truesize; } ;
struct atmarp_ctrl {int type; int itf_num; int ip; } ;
typedef enum atmarp_ctrl_type { ____Placeholder_atmarp_ctrl_type } atmarp_ctrl_type ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (char*,int) ;
 struct sock* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_7(enum atmarp_ctrl_type VAR_4, int VAR_5, __be32 VAR_6)
{
 struct sock *VAR_7;
 struct atmarp_ctrl *VAR_8;
 struct sk_buff *VAR_9;

 FUNC_2("to_atmarpd(%d)\n", VAR_4);
 if (!VAR_3)
  return -VAR_1;
 VAR_9 = FUNC_0(sizeof(struct atmarp_ctrl),VAR_2);
 if (!VAR_9)
  return -VAR_0;
 VAR_8 = (struct atmarp_ctrl *) FUNC_4(VAR_9,sizeof(struct atmarp_ctrl));
 VAR_8->type = VAR_4;
 VAR_8->itf_num = VAR_5;
 VAR_8->ip = VAR_6;
 FUNC_1(VAR_3, VAR_9->truesize);

 VAR_7 = FUNC_3(VAR_3);
 FUNC_5(&VAR_7->sk_receive_queue, VAR_9);
 VAR_7->sk_data_ready(VAR_7, VAR_9->len);
 return 0;
}
