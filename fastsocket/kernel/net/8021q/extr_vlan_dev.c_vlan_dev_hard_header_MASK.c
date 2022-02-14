
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct vlan_hdr {void* h_vlan_encapsulated_proto; void* h_vlan_TCI; } ;
struct sk_buff {void* protocol; } ;
struct net_device {scalar_t__ hard_header_len; void* dev_addr; } ;
struct TYPE_2__ {int flags; unsigned int vlan_id; struct net_device* real_dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct net_device*,unsigned short,void const*,void const*,unsigned int) ;
 void* FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_5 (struct net_device*,struct sk_buff*) ;
 TYPE_1__* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_5, struct net_device *VAR_6,
    unsigned short VAR_7,
    const void *VAR_8, const void *VAR_9,
    unsigned int VAR_10)
{
 struct vlan_hdr *VAR_11;
 unsigned int VAR_12 = 0;
 u16 VAR_13 = 0;
 int VAR_14;

 if (FUNC_0(FUNC_3(VAR_5) < VAR_6->hard_header_len))
  return -VAR_0;

 if (!(FUNC_6(VAR_6)->flags & VAR_3)) {
  VAR_11 = (struct vlan_hdr *) FUNC_4(VAR_5, VAR_4);

  VAR_13 = FUNC_6(VAR_6)->vlan_id;
  VAR_13 |= FUNC_5(VAR_6, VAR_5);
  VAR_11->h_vlan_TCI = FUNC_2(VAR_13);






  if (VAR_7 != VAR_2)
   VAR_11->h_vlan_encapsulated_proto = FUNC_2(VAR_7);
  else
   VAR_11->h_vlan_encapsulated_proto = FUNC_2(VAR_10);

  VAR_5->protocol = FUNC_2(VAR_1);
  VAR_7 = VAR_1;
  VAR_12 = VAR_4;
 }


 if (VAR_9 == ((void*)0))
  VAR_9 = VAR_6->dev_addr;


 VAR_6 = FUNC_6(VAR_6)->real_dev;
 VAR_14 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 + VAR_12);
 if (VAR_14 > 0)
  VAR_14 += VAR_12;
 return VAR_14;
}
