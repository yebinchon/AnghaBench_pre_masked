
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned FUNC_1(const struct sk_buff *VAR_2)
{
 return VAR_2->len - (VAR_2->protocol == FUNC_0(VAR_0) ? VAR_1 : 0);
}
