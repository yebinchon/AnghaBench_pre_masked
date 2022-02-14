
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; int sk_shutdown; scalar_t__ sk_err; int sk_receive_queue; } ;
struct sk_buff {size_t len; } ;
struct msghdr {int msg_iov; int msg_flags; } ;
struct kiocb {int dummy; } ;
struct dccp_hdr {int dccph_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;





 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sock*) ;
 struct dccp_hdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_8 (struct sock*,long*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ,size_t) ;
 struct sk_buff* FUNC_10 (int *) ;
 size_t FUNC_11 (struct sock*) ;
 scalar_t__ FUNC_12 (struct sock*,int ) ;
 size_t FUNC_13 (long) ;
 long FUNC_14 (struct sock*,int) ;

int FUNC_15(struct kiocb *VAR_10, struct sock *VAR_11, struct msghdr *VAR_12,
   size_t VAR_13, int VAR_14, int VAR_15, int *VAR_16)
{
 const struct dccp_hdr *VAR_17;
 long VAR_18;

 FUNC_4(VAR_11);

 if (VAR_11->sk_state == VAR_1) {
  VAR_13 = -VAR_4;
  goto out;
 }

 VAR_18 = FUNC_14(VAR_11, VAR_14);

 do {
  struct sk_buff *VAR_19 = FUNC_10(&VAR_11->sk_receive_queue);

  if (VAR_19 == ((void*)0))
   goto verify_sock_status;

  VAR_17 = FUNC_1(VAR_19);

  switch (VAR_17->dccph_type) {
  case 130:
  case 129:
   goto found_ok_skb;

  case 132:
  case 131:
   if (!(VAR_15 & VAR_5))
    FUNC_0(VAR_11);

  case 128:
   FUNC_3("found fin (%s) ok!\n",
          FUNC_2(VAR_17->dccph_type));
   VAR_13 = 0;
   goto found_fin_ok;
  default:
   FUNC_3("packet_type=%s\n",
          FUNC_2(VAR_17->dccph_type));
   FUNC_7(VAR_11, VAR_19, 0);
  }
verify_sock_status:
  if (FUNC_12(VAR_11, VAR_8)) {
   VAR_13 = 0;
   break;
  }

  if (VAR_11->sk_err) {
   VAR_13 = FUNC_11(VAR_11);
   break;
  }

  if (VAR_11->sk_shutdown & VAR_7) {
   VAR_13 = 0;
   break;
  }

  if (VAR_11->sk_state == VAR_0) {
   if (!FUNC_12(VAR_11, VAR_8)) {



    VAR_13 = -VAR_4;
    break;
   }
   VAR_13 = 0;
   break;
  }

  if (!VAR_18) {
   VAR_13 = -VAR_2;
   break;
  }

  if (FUNC_6(VAR_9)) {
   VAR_13 = FUNC_13(VAR_18);
   break;
  }

  FUNC_8(VAR_11, &VAR_18);
  continue;
 found_ok_skb:
  if (VAR_13 > VAR_19->len)
   VAR_13 = VAR_19->len;
  else if (VAR_13 < VAR_19->len)
   VAR_12->msg_flags |= VAR_6;

  if (FUNC_9(VAR_19, 0, VAR_12->msg_iov, VAR_13)) {

   VAR_13 = -VAR_3;
   break;
  }
 found_fin_ok:
  if (!(VAR_15 & VAR_5))
   FUNC_7(VAR_11, VAR_19, 0);
  break;
 } while (1);
out:
 FUNC_5(VAR_11);
 return VAR_13;
}
