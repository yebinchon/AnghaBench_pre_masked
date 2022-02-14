
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (struct sk_buff*,int) ;
 void* FUNC_1 (struct sk_buff*,int,unsigned int,void*) ;

__attribute__((used)) static inline void *FUNC_2(struct sk_buff *VAR_1, int VAR_2,
     unsigned int VAR_3, void *VAR_4)
{
 if (VAR_2 >= 0)
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 else {
  if (VAR_2 >= VAR_0)
   return ((void*)0);
  return FUNC_0(VAR_1, VAR_2);
 }
}
