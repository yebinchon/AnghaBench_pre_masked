
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct inet_request_sock {int opt; int rmt_addr; int loc_addr; } ;
struct dst_entry {int dummy; } ;
struct dccp_hdr {int dccph_checksum; } ;


 struct dccp_hdr* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct sock*,struct dst_entry*,struct request_sock*) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct dst_entry*) ;
 struct dst_entry* FUNC_4 (struct sock*,struct request_sock*) ;
 struct inet_request_sock* FUNC_5 (struct request_sock*) ;
 int FUNC_6 (struct sk_buff*,struct sock*,int ,int ,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_0, struct request_sock *VAR_1)
{
 int VAR_2 = -1;
 struct sk_buff *VAR_3;
 struct dst_entry *VAR_4;

 VAR_4 = FUNC_4(VAR_0, VAR_1);
 if (VAR_4 == ((void*)0))
  goto out;

 VAR_3 = FUNC_1(VAR_0, VAR_4, VAR_1);
 if (VAR_3 != ((void*)0)) {
  const struct inet_request_sock *VAR_5 = FUNC_5(VAR_1);
  struct dccp_hdr *VAR_6 = FUNC_0(VAR_3);

  VAR_6->dccph_checksum = FUNC_2(VAR_3, VAR_5->loc_addr,
             VAR_5->rmt_addr);
  VAR_2 = FUNC_6(VAR_3, VAR_0, VAR_5->loc_addr,
         VAR_5->rmt_addr,
         VAR_5->opt);
  VAR_2 = FUNC_7(VAR_2);
 }

out:
 FUNC_3(VAR_4);
 return VAR_2;
}
