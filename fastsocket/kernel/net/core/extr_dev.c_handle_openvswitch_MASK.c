
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; } ;
struct packet_type {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int priv_flags; int ax25_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct packet_type*,struct net_device*) ;
 struct sk_buff* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline struct sk_buff *FUNC_2(struct sk_buff *VAR_1,
       struct packet_type **VAR_2,
       int *VAR_3,
       struct net_device *VAR_4)
{
 if (!(VAR_1->dev->priv_flags & VAR_0) || !VAR_1->dev->ax25_ptr)
  return VAR_1;

 if (*VAR_2) {
  *VAR_3 = FUNC_0(VAR_1, *VAR_2, VAR_4);
  *VAR_2 = ((void*)0);
 }
 return FUNC_1(VAR_1);
}
