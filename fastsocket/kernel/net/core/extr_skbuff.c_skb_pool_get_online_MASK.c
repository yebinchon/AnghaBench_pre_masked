
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_pool {int dummy; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 struct skb_pool* FUNC_1 (int ,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static struct skb_pool *FUNC_2(loff_t *VAR_3)
{
 struct skb_pool *VAR_4 = ((void*)0);

 while (*VAR_3 < VAR_1)
  if (FUNC_0(*VAR_3)) {
   VAR_4 = FUNC_1(VAR_2, *VAR_3);
   break;
  } else
   ++*VAR_3;
 VAR_0 = *VAR_3;

 return VAR_4;
}
