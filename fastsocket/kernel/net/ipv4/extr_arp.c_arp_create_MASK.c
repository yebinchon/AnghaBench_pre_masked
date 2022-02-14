
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; void* protocol; struct net_device* dev; } ;
struct net_device {unsigned char* dev_addr; unsigned char* broadcast; int type; int addr_len; } ;
struct arphdr {int ar_hln; int ar_pln; void* ar_op; void* ar_pro; void* ar_hrd; } ;
typedef unsigned char const __be32 ;



 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct sk_buff* FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct net_device*,int,unsigned char const*,unsigned char const*,int ) ;
 void* FUNC_5 (int const) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (unsigned char*,unsigned char const*,int) ;
 int FUNC_8 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_9 (struct sk_buff*,scalar_t__) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*) ;

struct sk_buff *FUNC_12(int VAR_6, int VAR_7, __be32 VAR_8,
      struct net_device *VAR_9, __be32 VAR_10,
      const unsigned char *VAR_11,
      const unsigned char *VAR_12,
      const unsigned char *VAR_13)
{
 struct sk_buff *VAR_14;
 struct arphdr *VAR_15;
 unsigned char *VAR_16;





 VAR_14 = FUNC_2(FUNC_3(VAR_9) + FUNC_0(VAR_9), VAR_5);
 if (VAR_14 == ((void*)0))
  return ((void*)0);

 FUNC_10(VAR_14, FUNC_1(VAR_9));
 FUNC_11(VAR_14);
 VAR_15 = (struct arphdr *) FUNC_9(VAR_14, FUNC_3(VAR_9));
 VAR_14->dev = VAR_9;
 VAR_14->protocol = FUNC_5(VAR_3);
 if (VAR_12 == ((void*)0))
  VAR_12 = VAR_9->dev_addr;
 if (VAR_11 == ((void*)0))
  VAR_11 = VAR_9->broadcast;




 if (FUNC_4(VAR_14, VAR_9, VAR_7, VAR_11, VAR_12, VAR_14->len) < 0)
  goto out;
 switch (VAR_9->type) {
 default:
  VAR_15->ar_hrd = FUNC_5(VAR_9->type);
  VAR_15->ar_pro = FUNC_5(VAR_4);
  break;
 }

 VAR_15->ar_hln = VAR_9->addr_len;
 VAR_15->ar_pln = 4;
 VAR_15->ar_op = FUNC_5(VAR_6);

 VAR_16=(unsigned char *)(VAR_15+1);

 FUNC_7(VAR_16, VAR_12, VAR_9->addr_len);
 VAR_16 += VAR_9->addr_len;
 FUNC_7(VAR_16, &VAR_10, 4);
 VAR_16 += 4;
 if (VAR_13 != ((void*)0))
  FUNC_7(VAR_16, VAR_13, VAR_9->addr_len);
 else
  FUNC_8(VAR_16, 0, VAR_9->addr_len);
 VAR_16 += VAR_9->addr_len;
 FUNC_7(VAR_16, &VAR_8, 4);

 return VAR_14;

out:
 FUNC_6(VAR_14);
 return ((void*)0);
}
