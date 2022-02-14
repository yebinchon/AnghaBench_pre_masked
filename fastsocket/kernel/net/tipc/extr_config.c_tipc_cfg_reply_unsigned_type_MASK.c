
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value_net ;
typedef int value ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ,int *,int) ;
 struct sk_buff* FUNC_3 (int ) ;

struct sk_buff *FUNC_4(u16 VAR_0, u32 VAR_1)
{
 struct sk_buff *VAR_2;
 __be32 VAR_3;

 VAR_2 = FUNC_3(FUNC_0(sizeof(VAR_1)));
 if (VAR_2) {
  VAR_3 = FUNC_1(VAR_1);
  FUNC_2(VAR_2, VAR_0, &VAR_3,
        sizeof(VAR_3));
 }
 return VAR_2;
}
