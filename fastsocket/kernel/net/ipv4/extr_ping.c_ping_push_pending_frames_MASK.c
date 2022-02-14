
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_write_queue; } ;
struct sk_buff {int ip_summed; } ;
struct TYPE_2__ {int checksum; } ;
struct pingfakehdr {TYPE_1__ icmph; int wcheck; } ;
struct icmphdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,TYPE_1__*,int) ;
 struct sk_buff* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_1, struct pingfakehdr *VAR_2)
{
 struct sk_buff *VAR_3 = FUNC_5(&VAR_1->sk_write_queue);

 VAR_2->wcheck = FUNC_1((char *)&VAR_2->icmph,
  sizeof(struct icmphdr), VAR_2->wcheck);
 VAR_2->icmph.checksum = FUNC_0(VAR_2->wcheck);
 FUNC_4(FUNC_2(VAR_3), &VAR_2->icmph, sizeof(struct icmphdr));
 VAR_3->ip_summed = VAR_0;
 return FUNC_3(VAR_1);
}
