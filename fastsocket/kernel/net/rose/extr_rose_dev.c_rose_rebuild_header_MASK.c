
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; int * sk; scalar_t__ data; struct net_device* dev; } ;
struct net_device_stats {unsigned int tx_bytes; int tx_packets; int tx_errors; } ;
struct net_device {struct net_device_stats stats; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int *) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,int *) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1)
{
 return 1;
}
