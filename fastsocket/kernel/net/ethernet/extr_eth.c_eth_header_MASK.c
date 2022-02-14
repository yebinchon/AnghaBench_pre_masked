
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {void* dev_addr; int flags; } ;
struct ethhdr {int h_dest; int h_source; void* h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,void const*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;

int FUNC_4(struct sk_buff *VAR_5, struct net_device *VAR_6,
        unsigned short VAR_7,
        const void *VAR_8, const void *VAR_9, unsigned VAR_10)
{
 struct ethhdr *VAR_11 = (struct ethhdr *)FUNC_3(VAR_5, VAR_1);

 if (VAR_7 != VAR_2)
  VAR_11->h_proto = FUNC_0(VAR_7);
 else
  VAR_11->h_proto = FUNC_0(VAR_10);





 if (!VAR_9)
  VAR_9 = VAR_6->dev_addr;
 FUNC_1(VAR_11->h_source, VAR_9, VAR_0);

 if (VAR_8) {
  FUNC_1(VAR_11->h_dest, VAR_8, VAR_0);
  return VAR_1;
 }





 if (VAR_6->flags & (VAR_3 | VAR_4)) {
  FUNC_2(VAR_11->h_dest, 0, VAR_0);
  return VAR_1;
 }

 return -VAR_1;
}
