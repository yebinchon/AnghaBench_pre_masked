
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee802154_addr {scalar_t__ short_addr; void* pan_id; int addr_type; } ;
struct genl_info {scalar_t__* attrs; } ;
struct TYPE_2__ {int (* start_req ) (struct net_device*,struct ieee802154_addr*,void*,void*,void*,void*,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct genl_info*) ;
 int FUNC_3 (struct net_device*,int ) ;
 void* FUNC_4 (scalar_t__) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct net_device*,struct ieee802154_addr*,void*,void*,void*,void*,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_14, struct genl_info *VAR_15)
{
 struct net_device *VAR_16;
 struct ieee802154_addr VAR_17;

 u8 VAR_18, VAR_19, VAR_20;
 u8 VAR_21;
 int VAR_22, VAR_23, VAR_24;
 int VAR_25;

 if (!VAR_15->attrs[VAR_7] ||
     !VAR_15->attrs[VAR_9] ||
     !VAR_15->attrs[VAR_6] ||
     !VAR_15->attrs[VAR_5] ||
     !VAR_15->attrs[VAR_12] ||
     !VAR_15->attrs[VAR_11] ||
     !VAR_15->attrs[VAR_4] ||
     !VAR_15->attrs[VAR_8]
  )
  return -VAR_0;

 VAR_16 = FUNC_2(VAR_15);
 if (!VAR_16)
  return -VAR_1;

 VAR_17.addr_type = VAR_3;
 VAR_17.short_addr = FUNC_4(
   VAR_15->attrs[VAR_9]);
 VAR_17.pan_id = FUNC_4(VAR_15->attrs[VAR_7]);

 VAR_18 = FUNC_5(VAR_15->attrs[VAR_6]);
 VAR_19 = FUNC_5(VAR_15->attrs[VAR_5]);
 VAR_20 = FUNC_5(VAR_15->attrs[VAR_12]);
 VAR_22 = FUNC_5(VAR_15->attrs[VAR_11]);
 VAR_23 = FUNC_5(VAR_15->attrs[VAR_4]);
 VAR_24 = FUNC_5(VAR_15->attrs[VAR_8]);

 if (VAR_15->attrs[VAR_10])
  VAR_21 = FUNC_5(VAR_15->attrs[VAR_10]);
 else
  VAR_21 = 0;


 if (VAR_17.short_addr == VAR_2) {
  FUNC_3(VAR_16, VAR_13);
  FUNC_0(VAR_16);
  return -VAR_0;
 }

 VAR_25 = FUNC_1(VAR_16)->start_req(VAR_16, &VAR_17, VAR_18, VAR_21,
  VAR_19, VAR_20, VAR_22, VAR_23, VAR_24);

 FUNC_0(VAR_16);
 return VAR_25;
}
