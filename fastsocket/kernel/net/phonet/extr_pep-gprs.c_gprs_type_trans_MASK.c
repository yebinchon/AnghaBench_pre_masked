
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int* FUNC_1 (struct sk_buff*,int ,int,int*) ;

__attribute__((used)) static __be16 FUNC_2(struct sk_buff *VAR_2)
{
 const u8 *VAR_3;
 u8 VAR_4;

 VAR_3 = FUNC_1(VAR_2, 0, 1, &VAR_4);
 if (!VAR_3)
  return FUNC_0(0);

 switch (*VAR_3 >> 4) {
 case 4:
  return FUNC_0(VAR_0);
 case 6:
  return FUNC_0(VAR_1);
 }
 return FUNC_0(0);
}
