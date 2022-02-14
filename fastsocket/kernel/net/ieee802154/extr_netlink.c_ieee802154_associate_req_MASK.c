
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee802154_addr {void* pan_id; void* short_addr; int addr_type; int hwaddr; } ;
struct genl_info {scalar_t__* attrs; } ;
struct TYPE_2__ {int (* assoc_req ) (struct net_device*,struct ieee802154_addr*,scalar_t__,scalar_t__,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct genl_info*) ;
 void* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (struct net_device*,struct ieee802154_addr*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_11,
  struct genl_info *VAR_12)
{
 struct net_device *VAR_13;
 struct ieee802154_addr VAR_14;
 u8 VAR_15;
 int VAR_16 = -VAR_0;

 if (!VAR_12->attrs[VAR_6] ||
     !VAR_12->attrs[VAR_8] ||
     (!VAR_12->attrs[VAR_7] &&
  !VAR_12->attrs[VAR_9]) ||
     !VAR_12->attrs[VAR_5])
  return -VAR_0;

 VAR_13 = FUNC_2(VAR_12);
 if (!VAR_13)
  return -VAR_1;

 if (VAR_12->attrs[VAR_7]) {
  VAR_14.addr_type = VAR_3;
  FUNC_5(VAR_14.hwaddr,
    VAR_12->attrs[VAR_7],
    VAR_2);
 } else {
  VAR_14.addr_type = VAR_4;
  VAR_14.short_addr = FUNC_3(
    VAR_12->attrs[VAR_9]);
 }
 VAR_14.pan_id = FUNC_3(VAR_12->attrs[VAR_8]);

 if (VAR_12->attrs[VAR_10])
  VAR_15 = FUNC_4(VAR_12->attrs[VAR_10]);
 else
  VAR_15 = 0;

 VAR_16 = FUNC_1(VAR_13)->assoc_req(VAR_13, &VAR_14,
   FUNC_4(VAR_12->attrs[VAR_6]),
   VAR_15,
   FUNC_4(VAR_12->attrs[VAR_5]));

 FUNC_0(VAR_13);
 return VAR_16;
}
