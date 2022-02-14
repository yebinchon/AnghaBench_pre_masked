
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct sk_buff {int len; int protocol; int pkt_type; struct net_device* dev; scalar_t__ priority; } ;
struct phonethdr {void* pn_sobj; void* pn_robj; int pn_length; scalar_t__ pn_res; void* pn_sdev; void* pn_rdev; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,struct net_device*,int ,int *,int *,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 void* FUNC_10 (int ) ;
 struct phonethdr* FUNC_11 (struct sk_buff*) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_19(struct sk_buff *VAR_6, struct net_device *VAR_7,
   u16 VAR_8, u16 VAR_9, u8 VAR_10, u8 VAR_11)
{
 struct phonethdr *VAR_12;
 int VAR_13;

 if (VAR_6->len + 2 > 0xffff ||
     VAR_6->len + sizeof(struct phonethdr) > VAR_7->mtu) {
  VAR_13 = -VAR_1;
  goto drop;
 }


 if (FUNC_9(VAR_8) == VAR_5) {
  VAR_13 = -VAR_2;
  goto drop;
 }

 FUNC_18(VAR_6);
 FUNC_0(FUNC_13(VAR_6) & 1);
 FUNC_15(VAR_6, sizeof(struct phonethdr));
 FUNC_17(VAR_6);
 VAR_12 = FUNC_11(VAR_6);
 VAR_12->pn_rdev = FUNC_10(VAR_8);
 VAR_12->pn_sdev = FUNC_10(VAR_9);
 VAR_12->pn_res = VAR_10;
 VAR_12->pn_length = FUNC_1(VAR_6->len + 2 - sizeof(*VAR_12));
 VAR_12->pn_robj = FUNC_12(VAR_8);
 VAR_12->pn_sobj = FUNC_12(VAR_9);

 VAR_6->protocol = FUNC_4(VAR_3);
 VAR_6->priority = 0;
 VAR_6->dev = VAR_7;

 if (FUNC_9(VAR_9) == FUNC_9(VAR_8)) {
  FUNC_16(VAR_6);
  VAR_6->pkt_type = VAR_4;
  FUNC_14(VAR_6);
  if (VAR_11)
   FUNC_6(VAR_6);
  else
   FUNC_7(VAR_6);
  VAR_13 = 0;
 } else {
  VAR_13 = FUNC_2(VAR_6, VAR_7, FUNC_8(VAR_6->protocol),
     ((void*)0), ((void*)0), VAR_6->len);
  if (VAR_13 < 0) {
   VAR_13 = -VAR_0;
   goto drop;
  }
  VAR_13 = FUNC_3(VAR_6);
 }

 return VAR_13;
drop:
 FUNC_5(VAR_6);
 return VAR_13;
}
