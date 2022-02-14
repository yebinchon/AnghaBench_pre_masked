
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct udphdr {int source; int dest; int len; } ;
struct sk_buff {scalar_t__ protocol; scalar_t__ pkt_type; int len; scalar_t__ data; TYPE_1__* dev; } ;
struct netpoll_info {int arp_tx; struct netpoll* rx_np; } ;
struct netpoll {scalar_t__ local_ip; scalar_t__ remote_ip; int local_port; int (* rx_hook ) (struct netpoll*,int,char*,int) ;} ;
struct iphdr {int ihl; int version; scalar_t__ protocol; scalar_t__ saddr; scalar_t__ daddr; int tot_len; } ;
struct TYPE_4__ {int h_proto; } ;
struct TYPE_3__ {scalar_t__ type; struct netpoll_info* npinfo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct udphdr*,int,scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct netpoll*,int,char*,int) ;
 int VAR_5 ;

int FUNC_12(struct sk_buff *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 struct iphdr *VAR_10;
 struct udphdr *VAR_11;
 struct netpoll_info *VAR_12 = VAR_6->dev->npinfo;
 struct netpoll *VAR_13 = VAR_12->rx_np;

 if (!VAR_13)
  goto out;
 if (VAR_6->dev->type != VAR_0)
  goto out;


 if (VAR_6->protocol == FUNC_3(VAR_1) &&
     FUNC_0(&VAR_5)) {
  FUNC_9(&VAR_12->arp_tx, VAR_6);
  return 1;
 }

 VAR_7 = FUNC_6(FUNC_2(VAR_6)->h_proto);
 if (VAR_7 != VAR_2)
  goto out;
 if (VAR_6->pkt_type == VAR_4)
  goto out;
 if (FUNC_10(VAR_6))
  goto out;

 VAR_10 = (struct iphdr *)VAR_6->data;
 if (!FUNC_7(VAR_6, sizeof(struct iphdr)))
  goto out;
 if (VAR_10->ihl < 5 || VAR_10->version != 4)
  goto out;
 if (!FUNC_7(VAR_6, VAR_10->ihl*4))
  goto out;
 if (FUNC_4((u8 *)VAR_10, VAR_10->ihl) != 0)
  goto out;

 VAR_8 = FUNC_6(VAR_10->tot_len);
 if (VAR_6->len < VAR_8 || VAR_8 < VAR_10->ihl*4)
  goto out;





 if (FUNC_8(VAR_6, VAR_8))
  goto out;

 if (VAR_10->protocol != VAR_3)
  goto out;

 VAR_8 -= VAR_10->ihl*4;
 VAR_11 = (struct udphdr *)(((char *)VAR_10) + VAR_10->ihl*4);
 VAR_9 = FUNC_6(VAR_11->len);

 if (VAR_9 != VAR_8)
  goto out;
 if (FUNC_1(VAR_6, VAR_11, VAR_9, VAR_10->saddr, VAR_10->daddr))
  goto out;
 if (VAR_13->local_ip && VAR_13->local_ip != VAR_10->daddr)
  goto out;
 if (VAR_13->remote_ip && VAR_13->remote_ip != VAR_10->saddr)
  goto out;
 if (VAR_13->local_port && VAR_13->local_port != FUNC_6(VAR_11->dest))
  goto out;

 VAR_13->rx_hook(VAR_13, FUNC_6(VAR_11->source),
      (char *)(VAR_11+1),
      VAR_9 - sizeof(struct udphdr));

 FUNC_5(VAR_6);
 return 1;

out:
 if (FUNC_0(&VAR_5)) {
  FUNC_5(VAR_6);
  return 1;
 }

 return 0;
}
