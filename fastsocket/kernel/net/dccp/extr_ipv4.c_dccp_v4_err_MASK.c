
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct sock {int sk_state; int sk_err; int sk_err_soft; int (* sk_error_report ) (struct sock*) ;} ;
struct sk_buff {scalar_t__ const data; scalar_t__ const len; int dev; } ;
struct request_sock {int sk; } ;
struct net {int dummy; } ;
struct iphdr {int ihl; int saddr; int daddr; } ;
struct inet_sock {scalar_t__ recverr; } ;
struct dccp_sock {int dccps_awh; int dccps_awl; } ;
struct dccp_hdr {int dccph_dport; int dccph_sport; } ;
typedef int __u64 ;
struct TYPE_6__ {int dreq_iss; } ;
struct TYPE_5__ {int errno; } ;
struct TYPE_4__ {int type; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int const VAR_7 ;
 int FUNC_1 (struct net*,int ) ;
 int VAR_8 ;



 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct net*,int ) ;
 int const VAR_11 ;
 int FUNC_3 (int ) ;
 scalar_t__ const FUNC_4 (struct dccp_hdr const*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,struct iphdr const*,int ) ;
 int FUNC_9 (struct sock*) ;
 int VAR_12 ;
 int FUNC_10 (struct dccp_hdr const*) ;
 TYPE_3__* FUNC_11 (struct request_sock*) ;
 struct dccp_sock* FUNC_12 (struct sock*) ;
 struct net* FUNC_13 (int ) ;
 TYPE_2__* VAR_13 ;
 TYPE_1__* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sock*,struct request_sock*,struct request_sock**) ;
 struct request_sock* FUNC_16 (struct sock*,struct request_sock***,int ,int ,int ) ;
 int FUNC_17 (struct sk_buff*) ;
 struct sock* FUNC_18 (struct net*,int *,int ,int ,int ,int ,int ) ;
 struct inet_sock* FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (struct sock*) ;
 int FUNC_23 (struct sock*) ;
 int FUNC_24 (struct sock*) ;
 int FUNC_25 (struct sock*) ;

__attribute__((used)) static void FUNC_26(struct sk_buff *VAR_14, u32 VAR_15)
{
 const struct iphdr *VAR_16 = (struct iphdr *)VAR_14->data;
 const u8 VAR_17 = VAR_16->ihl << 2;
 const struct dccp_hdr *VAR_18 = (struct dccp_hdr *)(VAR_14->data + VAR_17);
 struct dccp_sock *VAR_19;
 struct inet_sock *VAR_20;
 const int VAR_21 = FUNC_14(VAR_14)->type;
 const int VAR_22 = FUNC_14(VAR_14)->code;
 struct sock *VAR_23;
 __u64 VAR_24;
 int VAR_25;
 struct net *VAR_26 = FUNC_13(VAR_14->dev);

 if (VAR_14->len < VAR_17 + sizeof(*VAR_18) ||
     VAR_14->len < VAR_17 + FUNC_4(VAR_18)) {
  FUNC_1(VAR_26, VAR_8);
  return;
 }

 VAR_23 = FUNC_18(VAR_26, &VAR_12,
   VAR_16->daddr, VAR_18->dccph_dport,
   VAR_16->saddr, VAR_18->dccph_sport, FUNC_17(VAR_14));
 if (VAR_23 == ((void*)0)) {
  FUNC_1(VAR_26, VAR_8);
  return;
 }

 if (VAR_23->sk_state == VAR_4) {
  FUNC_21(FUNC_20(VAR_23));
  return;
 }

 FUNC_6(VAR_23);



 if (FUNC_22(VAR_23))
  FUNC_2(VAR_26, VAR_9);

 if (VAR_23->sk_state == VAR_2)
  goto out;

 VAR_19 = FUNC_12(VAR_23);
 VAR_24 = FUNC_10(VAR_18);
 if ((1 << VAR_23->sk_state) & ~(VAR_1 | VAR_0) &&
     !FUNC_5(VAR_24, VAR_19->dccps_awl, VAR_19->dccps_awh)) {
  FUNC_2(VAR_26, VAR_10);
  goto out;
 }

 switch (VAR_21) {
 case 129:

  goto out;
 case 130:
  VAR_25 = VAR_6;
  break;
 case 131:
  if (VAR_22 > VAR_11)
   goto out;

  if (VAR_22 == VAR_7) {
   if (!FUNC_22(VAR_23))
    FUNC_8(VAR_23, VAR_16, VAR_15);
   goto out;
  }

  VAR_25 = VAR_13[VAR_22].errno;
  break;
 case 128:
  VAR_25 = VAR_5;
  break;
 default:
  goto out;
 }

 switch (VAR_23->sk_state) {
  struct request_sock *VAR_27 , **VAR_28;
 case 134:
  if (FUNC_22(VAR_23))
   goto out;
  VAR_27 = FUNC_16(VAR_23, &VAR_28, VAR_18->dccph_dport,
       VAR_16->daddr, VAR_16->saddr);
  if (!VAR_27)
   goto out;





  FUNC_3(VAR_27->sk);

  if (VAR_24 != FUNC_11(VAR_27)->dreq_iss) {
   FUNC_2(VAR_26, VAR_10);
   goto out;
  }






  FUNC_15(VAR_23, VAR_27, VAR_28);
  goto out;

 case 133:
 case 132:
  if (!FUNC_22(VAR_23)) {
   FUNC_0(VAR_3);
   VAR_23->sk_err = VAR_25;

   VAR_23->sk_error_report(VAR_23);

   FUNC_9(VAR_23);
  } else
   VAR_23->sk_err_soft = VAR_25;
  goto out;
 }
 VAR_20 = FUNC_19(VAR_23);
 if (!FUNC_22(VAR_23) && VAR_20->recverr) {
  VAR_23->sk_err = VAR_25;
  VAR_23->sk_error_report(VAR_23);
 } else
  VAR_23->sk_err_soft = VAR_25;
out:
 FUNC_7(VAR_23);
 FUNC_23(VAR_23);
}
