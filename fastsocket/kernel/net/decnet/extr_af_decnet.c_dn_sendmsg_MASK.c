
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {scalar_t__ type; struct sock* sk; } ;
struct sockaddr_dn {int dummy; } ;
struct sock {int sk_shutdown; int sk_allocation; int sk_sleep; TYPE_1__* sk_socket; scalar_t__ sk_dst_cache; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int msg_flags; int msg_namelen; int msg_iov; scalar_t__ msg_name; } ;
struct kiocb {int dummy; } ;
struct dn_skb_cb {int nsp_flags; } ;
struct dn_scp {size_t segsize_rem; unsigned char services_rem; scalar_t__ seg_total; int persist; int flowrem_dat; int flowrem_oth; int persist_fxn; struct sk_buff_head other_xmit_queue; struct sk_buff_head data_xmit_queue; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct dn_scp* FUNC_1 (struct sock*) ;
 struct dn_skb_cb* FUNC_2 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (int ,int *) ;
 int VAR_23 ;
 struct sk_buff* FUNC_4 (struct sock*,scalar_t__,int,int*) ;
 int FUNC_5 (struct sock*,struct sockaddr_dn*,int,long*,int) ;
 size_t FUNC_6 (struct sock*,int) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,struct sk_buff*,int ,int) ;
 int VAR_24 ;
 scalar_t__ FUNC_9 (struct dn_scp*,struct sk_buff_head*,int) ;
 int FUNC_10 (scalar_t__*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sock*) ;
 scalar_t__ FUNC_14 (int ,int ,size_t) ;
 int FUNC_15 (int ,int *,int ) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int ,int *) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (struct sock*,int,int) ;
 int FUNC_21 (struct sock*,long*,int) ;
 int FUNC_22 (struct sk_buff*,size_t) ;
 int FUNC_23 (struct sk_buff*,scalar_t__) ;
 int FUNC_24 (struct sock*) ;
 int FUNC_25 (long) ;
 long FUNC_26 (struct sock*,int) ;
 int VAR_25 ;

__attribute__((used)) static int FUNC_27(struct kiocb *VAR_26, struct socket *VAR_27,
        struct msghdr *VAR_28, size_t VAR_29)
{
 struct sock *VAR_30 = VAR_27->sk;
 struct dn_scp *VAR_31 = FUNC_1(VAR_30);
 size_t VAR_32;
 struct sk_buff_head *VAR_33 = &VAR_31->data_xmit_queue;
 int VAR_34 = VAR_28->msg_flags;
 int VAR_35 = 0;
 size_t VAR_36 = 0;
 int VAR_37 = VAR_28->msg_namelen;
 struct sockaddr_dn *VAR_38 = (struct sockaddr_dn *)VAR_28->msg_name;
 struct sk_buff *VAR_39 = ((void*)0);
 struct dn_skb_cb *VAR_40;
 size_t VAR_41;
 unsigned char VAR_42;
 long VAR_43;

 if (VAR_34 & ~(VAR_13|VAR_12|VAR_8|VAR_9|VAR_11|VAR_10|VAR_7))
  return -VAR_4;

 if (VAR_37 && (VAR_37 != sizeof(struct sockaddr_dn)))
  return -VAR_2;

 FUNC_13(VAR_30);
 VAR_43 = FUNC_26(VAR_30, VAR_34 & VAR_8);





 if (VAR_27->type == VAR_21) {
  if (VAR_34 & VAR_9) {
   VAR_35 = -VAR_2;
   goto out;
  }
  VAR_34 |= VAR_9;
 }


 VAR_35 = FUNC_5(VAR_30, VAR_38, VAR_37, &VAR_43, VAR_34);
 if (VAR_35)
  goto out_err;

 if (VAR_30->sk_shutdown & VAR_18) {
  VAR_35 = -VAR_5;
  if (!(VAR_34 & VAR_11))
   FUNC_17(VAR_19, VAR_23, 0);
  goto out_err;
 }

 if ((VAR_34 & VAR_13) && VAR_30->sk_dst_cache)
  FUNC_10(&VAR_30->sk_dst_cache);

 VAR_32 = VAR_31->segsize_rem;
 VAR_42 = VAR_31->services_rem & VAR_14;

 VAR_32 = FUNC_6(VAR_30, VAR_34);

 if (VAR_34 & VAR_12) {
  VAR_33 = &VAR_31->other_xmit_queue;
  if (VAR_29 > VAR_32) {
   VAR_35 = -VAR_3;
   goto out;
  }
 }

 VAR_31->persist_fxn = VAR_24;

 while(VAR_36 < VAR_29) {
  VAR_35 = FUNC_24(VAR_30);
  if (VAR_35)
   goto out;

  if (FUNC_19(VAR_23)) {
   VAR_35 = FUNC_25(VAR_43);
   goto out;
  }




  VAR_41 = VAR_29 - VAR_36;

  if (VAR_41 > VAR_32)
   VAR_41 = VAR_32;





  if (FUNC_9(VAR_31, VAR_33, VAR_34)) {
   FUNC_0(VAR_25);

   if (VAR_34 & VAR_8) {
    VAR_35 = -VAR_6;
    goto out;
   }

   FUNC_15(VAR_30->sk_sleep, &VAR_25, VAR_22);
   FUNC_18(VAR_20, &VAR_30->sk_socket->flags);
   FUNC_21(VAR_30, &VAR_43,
          !FUNC_9(VAR_31, VAR_33, VAR_34));
   FUNC_3(VAR_20, &VAR_30->sk_socket->flags);
   FUNC_11(VAR_30->sk_sleep, &VAR_25);
   continue;
  }







  VAR_39 = FUNC_4(VAR_30, VAR_41 + 64 + VAR_0,
      VAR_34 & VAR_8, &VAR_35);

  if (VAR_35)
   break;

  if (!VAR_39)
   continue;

  VAR_40 = FUNC_2(VAR_39);

  FUNC_23(VAR_39, 64 + VAR_0);

  if (FUNC_14(FUNC_22(VAR_39, VAR_41), VAR_28->msg_iov, VAR_41)) {
   VAR_35 = -VAR_1;
   goto out;
  }

  if (VAR_34 & VAR_12) {
   VAR_40->nsp_flags = 0x30;
   if (VAR_42 != VAR_15)
    VAR_31->flowrem_oth--;
  } else {
   VAR_40->nsp_flags = 0x00;
   if (VAR_31->seg_total == 0)
    VAR_40->nsp_flags |= 0x20;

   VAR_31->seg_total += VAR_41;

   if (((VAR_36 + VAR_41) == VAR_29) && (VAR_34 & VAR_9)) {
    VAR_40->nsp_flags |= 0x40;
    VAR_31->seg_total = 0;
    if (VAR_42 == VAR_16)
     VAR_31->flowrem_dat--;
   }
   if (VAR_42 == VAR_17)
    VAR_31->flowrem_dat--;
  }

  VAR_36 += VAR_41;
  FUNC_8(VAR_30, VAR_39, VAR_30->sk_allocation, VAR_34 & VAR_12);
  VAR_39 = ((void*)0);

  VAR_31->persist = FUNC_7(VAR_30);

 }
out:

 FUNC_12(VAR_39);

 FUNC_16(VAR_30);

 return VAR_36 ? VAR_36 : VAR_35;

out_err:
 VAR_35 = FUNC_20(VAR_30, VAR_34, VAR_35);
 FUNC_16(VAR_30);
 return VAR_35;
}
