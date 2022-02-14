
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct datapath {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int) ;
 int VAR_1 ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct datapath*,struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct datapath *VAR_2, u32 VAR_3,
          u32 VAR_4, u8 VAR_5)
{
 struct sk_buff *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(FUNC_4(), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_3(VAR_2, VAR_6, VAR_3, VAR_4, 0, VAR_5);
 if (VAR_7 < 0) {
  FUNC_2(VAR_6);
  return FUNC_0(VAR_7);
 }
 return VAR_6;
}
