
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct udphdr {int dest; int source; } ;
struct udp_table {int dummy; } ;
struct sock {scalar_t__ sk_state; int sk_err; int (* sk_error_report ) (struct sock*) ;} ;
struct sk_buff {TYPE_3__* dev; scalar_t__ data; } ;
struct net {int dummy; } ;
struct iphdr {int ihl; int saddr; int daddr; } ;
struct inet_sock {int recverr; int pmtudisc; } ;
struct TYPE_6__ {int ifindex; } ;
struct TYPE_5__ {int fatal; int errno; } ;
struct TYPE_4__ {int type; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int const VAR_3 ;
 int FUNC_0 (struct net*,int ) ;
 int VAR_4 ;



 int VAR_5 ;
 int const VAR_6 ;
 scalar_t__ VAR_7 ;
 struct sock* FUNC_1 (struct net*,int ,int ,int ,int ,int ,struct udp_table*) ;
 struct net* FUNC_2 (TYPE_3__*) ;
 TYPE_2__* VAR_8 ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 struct inet_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,struct sk_buff*,int,int ,int ,int *) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;

void FUNC_8(struct sk_buff *VAR_9, u32 VAR_10, struct udp_table *VAR_11)
{
 struct inet_sock *VAR_12;
 struct iphdr *VAR_13 = (struct iphdr *)VAR_9->data;
 struct udphdr *VAR_14 = (struct udphdr *)(VAR_9->data+(VAR_13->ihl<<2));
 const int VAR_15 = FUNC_3(VAR_9)->type;
 const int VAR_16 = FUNC_3(VAR_9)->code;
 struct sock *VAR_17;
 int VAR_18;
 int VAR_19;
 struct net *VAR_20 = FUNC_2(VAR_9->dev);

 VAR_17 = FUNC_1(VAR_20, VAR_13->daddr, VAR_14->dest,
   VAR_13->saddr, VAR_14->source, VAR_9->dev->ifindex, VAR_11);
 if (VAR_17 == ((void*)0)) {
  FUNC_0(VAR_20, VAR_4);
  return;
 }

 VAR_19 = 0;
 VAR_18 = 0;
 VAR_12 = FUNC_4(VAR_17);

 switch (VAR_15) {
 default:
 case 128:
  VAR_19 = VAR_0;
  break;
 case 129:
  goto out;
 case 130:
  VAR_19 = VAR_2;
  VAR_18 = 1;
  break;
 case 131:
  if (VAR_16 == VAR_3) {
   if (VAR_12->pmtudisc != VAR_5) {
    VAR_19 = VAR_1;
    VAR_18 = 1;
    break;
   }
   goto out;
  }
  VAR_19 = VAR_0;
  if (VAR_16 <= VAR_6) {
   VAR_18 = VAR_8[VAR_16].fatal;
   VAR_19 = VAR_8[VAR_16].errno;
  }
  break;
 }





 if (!VAR_12->recverr) {
  if (!VAR_18 || VAR_17->sk_state != VAR_7)
   goto out;
 } else {
  FUNC_5(VAR_17, VAR_9, VAR_19, VAR_14->dest, VAR_10, (u8 *)(VAR_14+1));
 }
 VAR_17->sk_err = VAR_19;
 VAR_17->sk_error_report(VAR_17);
out:
 FUNC_6(VAR_17);
}
