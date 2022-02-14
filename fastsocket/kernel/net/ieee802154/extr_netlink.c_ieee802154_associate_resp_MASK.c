
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee802154_addr {int pan_id; int hwaddr; int addr_type; } ;
struct genl_info {int * attrs; } ;
struct TYPE_2__ {int (* assoc_resp ) (struct net_device*,struct ieee802154_addr*,int ,int ) ;int (* get_pan_id ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct genl_info*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,struct ieee802154_addr*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_7,
  struct genl_info *VAR_8)
{
 struct net_device *VAR_9;
 struct ieee802154_addr VAR_10;
 int VAR_11 = -VAR_0;

 if (!VAR_8->attrs[VAR_6] ||
     !VAR_8->attrs[VAR_4] ||
     !VAR_8->attrs[VAR_5])
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_8);
 if (!VAR_9)
  return -VAR_1;

 VAR_10.addr_type = VAR_3;
 FUNC_5(VAR_10.hwaddr, VAR_8->attrs[VAR_4],
   VAR_2);
 VAR_10.pan_id = FUNC_1(VAR_9)->get_pan_id(VAR_9);


 VAR_11 = FUNC_1(VAR_9)->assoc_resp(VAR_9, &VAR_10,
  FUNC_3(VAR_8->attrs[VAR_5]),
  FUNC_4(VAR_8->attrs[VAR_6]));

 FUNC_0(VAR_9);
 return VAR_11;
}
