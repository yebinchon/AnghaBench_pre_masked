
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct genl_info {scalar_t__* attrs; } ;
struct TYPE_2__ {int (* scan_req ) (struct net_device*,scalar_t__,int ,scalar_t__,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct genl_info*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct net_device*,scalar_t__,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct net_device *VAR_8;
 int VAR_9;
 u8 VAR_10;
 u32 VAR_11;
 u8 VAR_12;
 u8 VAR_13;

 if (!VAR_7->attrs[VAR_5] ||
     !VAR_7->attrs[VAR_2] ||
     !VAR_7->attrs[VAR_3])
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_7);
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_4(VAR_7->attrs[VAR_5]);
 VAR_11 = FUNC_3(VAR_7->attrs[VAR_2]);
 VAR_12 = FUNC_4(VAR_7->attrs[VAR_3]);

 if (VAR_7->attrs[VAR_4])
  VAR_13 = FUNC_4(VAR_7->attrs[VAR_4]);
 else
  VAR_13 = 0;


 VAR_9 = FUNC_1(VAR_8)->scan_req(VAR_8, VAR_10, VAR_11, VAR_13,
   VAR_12);

 FUNC_0(VAR_8);
 return VAR_9;
}
