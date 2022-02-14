
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
struct sk_buff {void* head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 void* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void *FUNC_3(struct sk_buff *VAR_2, int VAR_3)
{
 u8 *VAR_4 = ((void*)0);

 if (VAR_3 >= VAR_1)
  VAR_4 = FUNC_1(VAR_2) + VAR_3 - VAR_1;
 else if (VAR_3 >= VAR_0)
  VAR_4 = FUNC_0(VAR_2) + VAR_3 - VAR_0;

 if (VAR_4 >= VAR_2->head && VAR_4 < FUNC_2(VAR_2))
  return VAR_4;
 return ((void*)0);
}
