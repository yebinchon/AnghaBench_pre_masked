
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int seq; } ;
struct sk_buff {int dummy; } ;
struct ip_vs_conn {int flags; int out_seq; int in_seq; } ;
struct ip_vs_app {int (* pkt_out ) (struct ip_vs_app*,struct ip_vs_conn*,struct sk_buff*,int*) ;} ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,unsigned int const) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct ip_vs_app*,struct ip_vs_conn*,struct sk_buff*,int*) ;
 int FUNC_5 (int *,struct tcphdr*) ;
 int FUNC_6 (int *,struct tcphdr*) ;
 int FUNC_7 (struct ip_vs_conn*,int *,int,int ,int) ;

__attribute__((used)) static inline int FUNC_8(struct ip_vs_conn *VAR_2, struct sk_buff *VAR_3,
      struct ip_vs_app *VAR_4)
{
 int VAR_5;
 const unsigned int VAR_6 = FUNC_0(VAR_3);
 struct tcphdr *VAR_7;
 __u32 VAR_8;

 if (!FUNC_2(VAR_3, VAR_6 + sizeof(*VAR_7)))
  return 0;

 VAR_7 = (struct tcphdr *)(FUNC_3(VAR_3) + VAR_6);




 VAR_8 = FUNC_1(VAR_7->seq);




 if (VAR_2->flags & VAR_1)
  FUNC_6(&VAR_2->out_seq, VAR_7);
 if (VAR_2->flags & VAR_0)
  FUNC_5(&VAR_2->in_seq, VAR_7);




 if (VAR_4->pkt_out == ((void*)0))
  return 1;

 if (!VAR_4->pkt_out(VAR_4, VAR_2, VAR_3, &VAR_5))
  return 0;




 if (VAR_5 != 0)
  FUNC_7(VAR_2, &VAR_2->out_seq,
         VAR_1, VAR_8, VAR_5);

 return 1;
}
