
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sock {scalar_t__ sk_state; int sk_err; int (* sk_error_report ) (struct sock*) ;} ;
struct sk_buff {TYPE_4__* dev; scalar_t__ data; } ;
struct net {int dummy; } ;
struct iphdr {int ihl; int saddr; int daddr; } ;
struct inet_sock {int recverr; int pmtudisc; } ;
struct TYPE_5__ {int id; int sequence; } ;
struct TYPE_6__ {TYPE_1__ echo; } ;
struct icmphdr {int type; int code; TYPE_2__ un; } ;
struct TYPE_8__ {int ifindex; } ;
struct TYPE_7__ {int fatal; int errno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct net* FUNC_0 (TYPE_4__*) ;
 TYPE_3__* VAR_8 ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct sk_buff*,int,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 struct sock* FUNC_5 (struct net*,int ,int ,int ,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;

void FUNC_9(struct sk_buff *VAR_9, u32 VAR_10)
{
 struct iphdr *VAR_11 = (struct iphdr *)VAR_9->data;
 struct icmphdr *VAR_12 = (struct icmphdr *)(VAR_9->data+(VAR_11->ihl<<2));
 struct inet_sock *VAR_13;
 int VAR_14 = VAR_12->type;
 int VAR_15 = VAR_12->code;
 struct net *VAR_16 = FUNC_0(VAR_9->dev);
 struct sock *VAR_17;
 int VAR_18;
 int VAR_19;



 if (!FUNC_4(VAR_12->type, VAR_12->code))
  return;

 FUNC_6("ping_err(type=%04x,code=%04x,id=%04x,seq=%04x)\n", VAR_14,
  VAR_15, FUNC_3(VAR_12->un.echo.id), FUNC_3(VAR_12->un.echo.sequence));

 VAR_17 = FUNC_5(VAR_16, VAR_11->daddr, VAR_11->saddr,
       FUNC_3(VAR_12->un.echo.id), VAR_9->dev->ifindex);
 if (VAR_17 == ((void*)0)) {
  FUNC_6("no socket, dropping\n");
  return;
 }
 FUNC_6("err on socket %p\n", VAR_17);

 VAR_19 = 0;
 VAR_18 = 0;
 VAR_13 = FUNC_1(VAR_17);

 switch (VAR_14) {
 default:
 case 128:
  VAR_19 = VAR_0;
  break;
 case 129:


  VAR_19 = VAR_3;
  break;
 case 131:
  VAR_19 = VAR_2;
  VAR_18 = 1;
  break;
 case 132:
  if (VAR_15 == VAR_4) {
   if (VAR_13->pmtudisc != VAR_5) {
    VAR_19 = VAR_1;
    VAR_18 = 1;
    break;
   }
   goto out;
  }
  VAR_19 = VAR_0;
  if (VAR_15 <= VAR_6) {
   VAR_18 = VAR_8[VAR_15].fatal;
   VAR_19 = VAR_8[VAR_15].errno;
  }
  break;
 case 130:

  VAR_19 = VAR_3;
  break;
 }





 if (!VAR_13->recverr) {
  if (!VAR_18 || VAR_17->sk_state != VAR_7)
   goto out;
 } else {
  FUNC_2(VAR_17, VAR_9, VAR_19, 0 ,
    VAR_10, (u8 *)VAR_12);
 }
 VAR_17->sk_err = VAR_19;
 VAR_17->sk_error_report(VAR_17);
out:
 FUNC_7(VAR_17);
}
