
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int csum; int len; } ;
typedef int __sum16 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline __sum16 FUNC_1(struct sk_buff *VAR_1,
          __be32 VAR_2, __be32 VAR_3)
{
 return FUNC_0(VAR_2, VAR_3, VAR_1->len, VAR_0, VAR_1->csum);
}
