
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_err; int sk_err_soft; int (* sk_error_report ) (struct sock*) ;} ;
struct sk_buff {int const len; void* transport_header; void* network_header; scalar_t__ data; } ;
struct sctp_transport {int dummy; } ;
struct sctp_association {int dummy; } ;
struct iphdr {int ihl; } ;
struct inet_sock {scalar_t__ recverr; } ;
typedef void* sk_buff_data_t ;
typedef int __u32 ;
struct TYPE_4__ {int errno; } ;
struct TYPE_3__ {int type; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int const VAR_3 ;
 int const VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;

 int const VAR_6 ;

 int const VAR_7 ;
 TYPE_2__* VAR_8 ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 struct inet_sock* FUNC_2 (struct sock*) ;
 int VAR_9 ;
 int FUNC_3 (struct sock*,struct sctp_association*) ;
 struct sock* FUNC_4 (int ,struct sk_buff*,int ,struct sctp_association**,struct sctp_transport**) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sock*,struct sctp_association*,struct sctp_transport*,int ) ;
 int FUNC_7 (struct sock*,struct sctp_association*,struct sctp_transport*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int const) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;

void FUNC_12(struct sk_buff *VAR_10, __u32 VAR_11)
{
 struct iphdr *VAR_12 = (struct iphdr *)VAR_10->data;
 const int VAR_13 = VAR_12->ihl * 4;
 const int VAR_14 = FUNC_1(VAR_10)->type;
 const int VAR_15 = FUNC_1(VAR_10)->code;
 struct sock *VAR_16;
 struct sctp_association *VAR_17 = ((void*)0);
 struct sctp_transport *VAR_18;
 struct inet_sock *VAR_19;
 sk_buff_data_t VAR_20, VAR_21;
 int VAR_22;

 if (VAR_10->len < VAR_13 + 8) {
  FUNC_0(&VAR_9, VAR_5);
  return;
 }


 VAR_20 = VAR_10->network_header;
 VAR_21 = VAR_10->transport_header;
 FUNC_8(VAR_10);
 FUNC_9(VAR_10, VAR_13);
 VAR_16 = FUNC_4(VAR_0, VAR_10, FUNC_5(VAR_10), &VAR_17, &VAR_18);

 VAR_10->network_header = VAR_20;
 VAR_10->transport_header = VAR_21;
 if (!VAR_16) {
  FUNC_0(&VAR_9, VAR_5);
  return;
 }




 switch (VAR_14) {
 case 129:
  VAR_22 = VAR_2;
  break;
 case 130:
  if (VAR_15 > VAR_7)
   goto out_unlock;


  if (VAR_4 == VAR_15) {
   FUNC_6(VAR_16, VAR_17, VAR_18, VAR_11);
   goto out_unlock;
  }
  else {
   if (VAR_6 == VAR_15) {
    FUNC_7(VAR_16, VAR_17,
           VAR_18);
    goto out_unlock;
   }
  }
  VAR_22 = VAR_8[VAR_15].errno;
  break;
 case 128:



  if (VAR_3 == VAR_15)
   goto out_unlock;

  VAR_22 = VAR_1;
  break;
 default:
  goto out_unlock;
 }

 VAR_19 = FUNC_2(VAR_16);
 if (!FUNC_10(VAR_16) && VAR_19->recverr) {
  VAR_16->sk_err = VAR_22;
  VAR_16->sk_error_report(VAR_16);
 } else {
  VAR_16->sk_err_soft = VAR_22;
 }

out_unlock:
 FUNC_3(VAR_16, VAR_17);
}
