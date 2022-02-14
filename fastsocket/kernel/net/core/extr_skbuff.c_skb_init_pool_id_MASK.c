
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int pool_id; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(void *VAR_1)
{
 struct sk_buff *VAR_2 = (struct sk_buff *)VAR_1;

 VAR_2->pool_id = VAR_0;
}
