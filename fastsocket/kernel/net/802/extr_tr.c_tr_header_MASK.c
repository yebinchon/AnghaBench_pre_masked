
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trllc {int* protid; int ethertype; int llc; int ssap; int dsap; } ;
struct trh_hdr {int daddr; int saddr; int fc; int ac; } ;
struct sk_buff {int dummy; } ;
struct net_device {void const* dev_addr; int addr_len; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (int ,void const*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,struct trh_hdr*,struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_7, struct net_device *VAR_8,
       unsigned short VAR_9,
       const void *VAR_10, const void *VAR_11, unsigned VAR_12)
{
 struct trh_hdr *VAR_13;
 int VAR_14;





 if (VAR_9 == VAR_2 || VAR_9 == VAR_3 || VAR_9 == VAR_1)
 {
  struct trllc *VAR_15;

  VAR_14 = sizeof(struct trh_hdr) + sizeof(struct trllc);
  VAR_13 = (struct trh_hdr *)FUNC_2(VAR_7, VAR_14);
  VAR_15 = (struct trllc *)(VAR_13+1);
  VAR_15->dsap = VAR_15->ssap = VAR_4;
  VAR_15->llc = VAR_6;
  VAR_15->protid[0] = VAR_15->protid[1] = VAR_15->protid[2] = 0x00;
  VAR_15->ethertype = FUNC_0(VAR_9);
 }
 else
 {
  VAR_14 = sizeof(struct trh_hdr);
  VAR_13 = (struct trh_hdr *)FUNC_2(VAR_7, VAR_14);
 }

 VAR_13->ac=VAR_0;
 VAR_13->fc=VAR_5;

 if(VAR_11)
  FUNC_1(VAR_13->saddr,VAR_11,VAR_8->addr_len);
 else
  FUNC_1(VAR_13->saddr,VAR_8->dev_addr,VAR_8->addr_len);





 if(VAR_10)
 {
  FUNC_1(VAR_13->daddr,VAR_10,VAR_8->addr_len);
  FUNC_3(VAR_7, VAR_13, VAR_8);
  return(VAR_14);
 }

 return -VAR_14;
}
