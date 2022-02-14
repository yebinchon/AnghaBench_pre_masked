
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int check; } ;
struct sock {int dummy; } ;
struct sk_buff {int csum; int len; } ;
struct request_sock {int dummy; } ;
struct inet_request_sock {int opt; int rmt_addr; int loc_addr; } ;
struct dst_entry {int dummy; } ;


 int FUNC_0 (struct tcphdr*,int ,int ) ;
 int FUNC_1 (struct dst_entry*) ;
 struct dst_entry* FUNC_2 (struct sock*,struct request_sock*) ;
 struct inet_request_sock* FUNC_3 (struct request_sock*) ;
 int FUNC_4 (struct sk_buff*,struct sock*,int ,int ,int ) ;
 int FUNC_5 (int) ;
 struct tcphdr* FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct sock*,struct dst_entry*,struct request_sock*) ;
 int FUNC_8 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_0, struct request_sock *VAR_1,
    struct dst_entry *VAR_2)
{
 const struct inet_request_sock *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = -1;
 struct sk_buff * VAR_5;


 if (!VAR_2 && (VAR_2 = FUNC_2(VAR_0, VAR_1)) == ((void*)0))
  return -1;

 VAR_5 = FUNC_7(VAR_0, VAR_2, VAR_1);

 if (VAR_5) {
  struct tcphdr *VAR_6 = FUNC_6(VAR_5);

  VAR_6->check = FUNC_8(VAR_5->len,
      VAR_3->loc_addr,
      VAR_3->rmt_addr,
      FUNC_0(VAR_6, VAR_5->len,
            VAR_5->csum));

  VAR_4 = FUNC_4(VAR_5, VAR_0, VAR_3->loc_addr,
         VAR_3->rmt_addr,
         VAR_3->opt);
  VAR_4 = FUNC_5(VAR_4);
 }

 FUNC_1(VAR_2);
 return VAR_4;
}
