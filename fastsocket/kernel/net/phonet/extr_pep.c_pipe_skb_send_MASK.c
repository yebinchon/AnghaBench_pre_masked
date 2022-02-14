
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pnpipehdr {int pipe_handle; int message_id; scalar_t__ utid; } ;
struct pep_sock {int pipe_handle; int tx_credits; int tx_fc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct pep_sock* FUNC_2 (struct sock*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sock*,struct sk_buff*,int *) ;
 struct pnpipehdr* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 struct pep_sock *VAR_5 = FUNC_2(VAR_3);
 struct pnpipehdr *VAR_6;

 if (FUNC_3(VAR_5->tx_fc) &&
     !FUNC_0(&VAR_5->tx_credits, -1, 0)) {
  FUNC_1(VAR_4);
  return -VAR_0;
 }

 FUNC_6(VAR_4, 3);
 FUNC_7(VAR_4);
 VAR_6 = FUNC_5(VAR_4);
 VAR_6->utid = 0;
 VAR_6->message_id = VAR_1;
 VAR_6->pipe_handle = VAR_5->pipe_handle;

 return FUNC_4(VAR_3, VAR_4, &VAR_2);
}
