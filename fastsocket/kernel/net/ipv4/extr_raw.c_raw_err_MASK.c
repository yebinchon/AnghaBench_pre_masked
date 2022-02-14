
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sock {scalar_t__ sk_state; int sk_err; int (* sk_error_report ) (struct sock*) ;} ;
struct sk_buff {int * data; } ;
struct iphdr {int ihl; } ;
struct inet_sock {scalar_t__ recverr; scalar_t__ hdrincl; int pmtudisc; } ;
struct TYPE_4__ {int errno; int fatal; } ;
struct TYPE_3__ {int type; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int const VAR_3 ;



 int VAR_4 ;
 int const VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* VAR_7 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct sk_buff*,int,int ,int ,int *) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_8, struct sk_buff *VAR_9, u32 VAR_10)
{
 struct inet_sock *VAR_11 = FUNC_1(VAR_8);
 const int VAR_12 = FUNC_0(VAR_9)->type;
 const int VAR_13 = FUNC_0(VAR_9)->code;
 int VAR_14 = 0;
 int VAR_15 = 0;






 if (!VAR_11->recverr && VAR_8->sk_state != VAR_6)
  return;

 switch (VAR_12) {
 default:
 case 128:
  VAR_14 = VAR_0;
  break;
 case 129:
  return;
 case 130:
  VAR_14 = VAR_2;
  VAR_15 = 1;
  break;
 case 131:
  VAR_14 = VAR_0;
  if (VAR_13 > VAR_5)
   break;
  VAR_14 = VAR_7[VAR_13].errno;
  VAR_15 = VAR_7[VAR_13].fatal;
  if (VAR_13 == VAR_3) {
   VAR_15 = VAR_11->pmtudisc != VAR_4;
   VAR_14 = VAR_1;
  }
 }

 if (VAR_11->recverr) {
  struct iphdr *VAR_16 = (struct iphdr *)VAR_9->data;
  u8 *VAR_17 = VAR_9->data + (VAR_16->ihl << 2);

  if (VAR_11->hdrincl)
   VAR_17 = VAR_9->data;
  FUNC_2(VAR_8, VAR_9, VAR_14, 0, VAR_10, VAR_17);
 }

 if (VAR_11->recverr || VAR_15) {
  VAR_8->sk_err = VAR_14;
  VAR_8->sk_error_report(VAR_8);
 }
}
