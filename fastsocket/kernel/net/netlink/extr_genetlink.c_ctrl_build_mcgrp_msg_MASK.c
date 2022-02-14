
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct genl_multicast_group {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct genl_multicast_group*,int ,int,int ,struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct genl_multicast_group *VAR_3,
         u32 VAR_4, int VAR_5, u8 VAR_6)
{
 struct sk_buff *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_2, VAR_1);
 if (VAR_7 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, 0, VAR_7, VAR_6);
 if (VAR_8 < 0) {
  FUNC_2(VAR_7);
  return FUNC_0(VAR_8);
 }

 return VAR_7;
}
