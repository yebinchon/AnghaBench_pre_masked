
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int hard_header_len; int mtu; } ;
struct iphdr {int dummy; } ;
struct ip_tunnel {int hlen; } ;


 int VAR_0 ;
 struct ip_tunnel* FUNC_0 (struct net_device*) ;

int FUNC_1(struct net_device *VAR_1, int VAR_2)
{
 struct ip_tunnel *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = VAR_3->hlen + sizeof(struct iphdr);

 if (VAR_2 < 68 ||
     VAR_2 > 0xFFF8 - VAR_1->hard_header_len - VAR_4)
  return -VAR_0;
 VAR_1->mtu = VAR_2;
 return 0;
}
