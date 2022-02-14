
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct tcphdr {int doff; scalar_t__ syn; int seq; scalar_t__ urg; } ;
struct tcp_sock {scalar_t__ urg_data; scalar_t__ urg_seq; } ;
struct sock {int (* sk_data_ready ) (struct sock*,int ) ;} ;
struct sk_buff {scalar_t__ len; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,scalar_t__,int*,int) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sock*,struct tcphdr*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_3, struct sk_buff *VAR_4, struct tcphdr *VAR_5)
{
 struct tcp_sock *VAR_6 = FUNC_6(VAR_3);


 if (VAR_5->urg)
  FUNC_5(VAR_3, VAR_5);


 if (VAR_6->urg_data == VAR_1) {
  u32 VAR_7 = VAR_6->urg_seq - FUNC_1(VAR_5->seq) + (VAR_5->doff * 4) -
     VAR_5->syn;


  if (VAR_7 < VAR_4->len) {
   u8 VAR_8;
   if (FUNC_2(VAR_4, VAR_7, &VAR_8, 1))
    FUNC_0();
   VAR_6->urg_data = VAR_2 | VAR_8;
   if (!FUNC_3(VAR_3, VAR_0))
    VAR_3->sk_data_ready(VAR_3, 0);
  }
 }
}
