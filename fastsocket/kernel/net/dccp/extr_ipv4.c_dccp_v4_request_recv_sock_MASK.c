
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct inet_sock {int id; int mc_ttl; int mc_index; int * opt; int saddr; int rcv_saddr; int daddr; } ;
struct inet_request_sock {int * opt; int loc_addr; int rmt_addr; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {int ttl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*,struct sock*) ;
 struct sock* FUNC_3 (struct sock*,struct request_sock*,struct sk_buff*) ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct dst_entry*) ;
 int FUNC_6 (struct dst_entry*) ;
 struct dst_entry* FUNC_7 (struct sock*,struct request_sock*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct inet_request_sock* FUNC_9 (struct request_sock*) ;
 struct inet_sock* FUNC_10 (struct sock*) ;
 TYPE_1__* FUNC_11 (struct sk_buff*) ;
 int VAR_2 ;
 scalar_t__ FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*,struct dst_entry*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*) ;

struct sock *FUNC_16(struct sock *VAR_3, struct sk_buff *VAR_4,
           struct request_sock *VAR_5,
           struct dst_entry *VAR_6)
{
 struct inet_request_sock *VAR_7;
 struct inet_sock *VAR_8;
 struct sock *VAR_9;

 if (FUNC_12(VAR_3))
  goto exit_overflow;

 if (VAR_6 == ((void*)0) && (VAR_6 = FUNC_7(VAR_3, VAR_5)) == ((void*)0))
  goto exit;

 VAR_9 = FUNC_3(VAR_3, VAR_5, VAR_4);
 if (VAR_9 == ((void*)0))
  goto exit_nonewsk;

 FUNC_13(VAR_9, VAR_6);

 VAR_8 = FUNC_10(VAR_9);
 VAR_7 = FUNC_9(VAR_5);
 VAR_8->daddr = VAR_7->rmt_addr;
 VAR_8->rcv_saddr = VAR_7->loc_addr;
 VAR_8->saddr = VAR_7->loc_addr;
 VAR_8->opt = VAR_7->opt;
 VAR_7->opt = ((void*)0);
 VAR_8->mc_index = FUNC_8(VAR_4);
 VAR_8->mc_ttl = FUNC_11(VAR_4)->ttl;
 VAR_8->id = VAR_2;

 FUNC_4(VAR_9, FUNC_5(VAR_6));

 if (FUNC_2(VAR_3, VAR_9) < 0) {
  FUNC_15(VAR_9);
  goto exit;
 }
 FUNC_1(VAR_9);

 return VAR_9;

exit_overflow:
 FUNC_0(FUNC_14(VAR_3), VAR_1);
exit_nonewsk:
 FUNC_6(VAR_6);
exit:
 FUNC_0(FUNC_14(VAR_3), VAR_0);
 return ((void*)0);
}
