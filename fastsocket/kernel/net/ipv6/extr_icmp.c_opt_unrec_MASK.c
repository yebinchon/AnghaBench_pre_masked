
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
typedef int _optval ;
typedef int __u32 ;


 int* FUNC_0 (struct sk_buff*,int ,int,int*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static __inline__ int FUNC_2(struct sk_buff *VAR_0, __u32 VAR_1)
{
 u8 VAR_2, *VAR_3;

 VAR_1 += FUNC_1(VAR_0);
 VAR_3 = FUNC_0(VAR_0, VAR_1, sizeof(VAR_2), &VAR_2);
 if (VAR_3 == ((void*)0))
  return 1;
 return (*VAR_3 & 0xC0) == 0x80;
}
