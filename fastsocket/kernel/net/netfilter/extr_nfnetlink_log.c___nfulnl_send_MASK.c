
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfulnl_instance {int qlen; int * skb; int peer_pid; } ;
struct nfgenmsg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct nfulnl_instance *VAR_2)
{
 int VAR_3 = -1;

 if (VAR_2->qlen > 1)
  FUNC_0(VAR_2->skb, 0, 0,
     VAR_1,
     sizeof(struct nfgenmsg));

 VAR_3 = FUNC_1(VAR_2->skb, VAR_2->peer_pid, VAR_0);

 VAR_2->qlen = 0;
 VAR_2->skb = ((void*)0);

nlmsg_failure:
 return VAR_3;
}
