
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee802154_addr {int pan_id; int short_addr; int addr_type; int hwaddr; } ;
struct genl_info {scalar_t__* attrs; } ;
struct TYPE_2__ {int (* disassoc_req ) (struct net_device*,struct ieee802154_addr*,int ) ;int (* get_pan_id ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct genl_info*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,struct ieee802154_addr*,int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_8,
  struct genl_info *VAR_9)
{
 struct net_device *VAR_10;
 struct ieee802154_addr VAR_11;
 int VAR_12 = -VAR_0;

 if ((!VAR_9->attrs[VAR_5] &&
  !VAR_9->attrs[VAR_6]) ||
     !VAR_9->attrs[VAR_7])
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_9);
 if (!VAR_10)
  return -VAR_1;

 if (VAR_9->attrs[VAR_5]) {
  VAR_11.addr_type = VAR_3;
  FUNC_5(VAR_11.hwaddr,
    VAR_9->attrs[VAR_5],
    VAR_2);
 } else {
  VAR_11.addr_type = VAR_4;
  VAR_11.short_addr = FUNC_3(
    VAR_9->attrs[VAR_6]);
 }
 VAR_11.pan_id = FUNC_1(VAR_10)->get_pan_id(VAR_10);

 VAR_12 = FUNC_1(VAR_10)->disassoc_req(VAR_10, &VAR_11,
   FUNC_4(VAR_9->attrs[VAR_7]));

 FUNC_0(VAR_10);
 return VAR_12;
}
