
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int tx_queue_len; int ifindex; int if_port; int dma; int irq; int base_addr; int mem_end; int mem_start; int type; int addr_len; int dev_addr; int mtu; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int port; int dma; int irq; int base_addr; int mem_end; int mem_start; } ;
struct TYPE_3__ {int sa_family; int sa_data; } ;
struct ifreq {short ifr_flags; int ifr_qlen; int ifr_ifindex; TYPE_2__ ifr_map; TYPE_1__ ifr_hwaddr; int ifr_mtu; int ifr_metric; int ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct net_device* FUNC_1 (struct net*,int ) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int,size_t) ;

__attribute__((used)) static int FUNC_6(struct net *VAR_2, struct ifreq *VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 struct net_device *VAR_6 = FUNC_1(VAR_2, VAR_3->ifr_name);

 if (!VAR_6)
  return -VAR_1;

 switch (VAR_4) {
 case 135:
  VAR_3->ifr_flags = (short) FUNC_2(VAR_6);
  return 0;

 case 131:

  VAR_3->ifr_metric = 0;
  return 0;

 case 130:
  VAR_3->ifr_mtu = VAR_6->mtu;
  return 0;

 case 134:
  if (!VAR_6->addr_len)
   FUNC_4(VAR_3->ifr_hwaddr.sa_data, 0, sizeof VAR_3->ifr_hwaddr.sa_data);
  else
   FUNC_3(VAR_3->ifr_hwaddr.sa_data, VAR_6->dev_addr,
          FUNC_5(sizeof VAR_3->ifr_hwaddr.sa_data, (size_t) VAR_6->addr_len));
  VAR_3->ifr_hwaddr.sa_family = VAR_6->type;
  return 0;

 case 129:
  VAR_5 = -VAR_0;
  break;

 case 132:
  VAR_3->ifr_map.mem_start = VAR_6->mem_start;
  VAR_3->ifr_map.mem_end = VAR_6->mem_end;
  VAR_3->ifr_map.base_addr = VAR_6->base_addr;
  VAR_3->ifr_map.irq = VAR_6->irq;
  VAR_3->ifr_map.dma = VAR_6->dma;
  VAR_3->ifr_map.port = VAR_6->if_port;
  return 0;

 case 133:
  VAR_3->ifr_ifindex = VAR_6->ifindex;
  return 0;

 case 128:
  VAR_3->ifr_qlen = VAR_6->tx_queue_len;
  return 0;

 default:



  FUNC_0(1);
  VAR_5 = -VAR_0;
  break;

 }
 return VAR_5;
}
