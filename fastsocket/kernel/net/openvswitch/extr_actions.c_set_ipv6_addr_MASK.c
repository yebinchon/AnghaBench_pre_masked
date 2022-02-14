
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ rxhash; } ;
typedef int __be32 ;


 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (struct sk_buff*,int ,int *,int const*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0, u8 VAR_1,
     __be32 VAR_2[4], const __be32 VAR_3[4],
     bool VAR_4)
{
 if (VAR_4)
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 VAR_0->rxhash = 0;
 FUNC_0(VAR_2, VAR_3, sizeof(__be32[4]));
}
