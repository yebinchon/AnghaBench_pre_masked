
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sw_flow {int dummy; } ;
struct sk_buff {int dummy; } ;
struct datapath {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct sk_buff* FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (struct sw_flow*) ;
 int FUNC_3 (struct sw_flow*,struct datapath*,struct sk_buff*,int ,int ,int ,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct sw_flow *VAR_1,
            struct datapath *VAR_2,
            u32 VAR_3, u32 VAR_4, u8 VAR_5)
{
 struct sk_buff *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_1);
 if (!VAR_6)
  return FUNC_1(-VAR_0);

 VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_6, VAR_3, VAR_4, 0, VAR_5);
 FUNC_0(VAR_7 < 0);
 return VAR_6;
}
