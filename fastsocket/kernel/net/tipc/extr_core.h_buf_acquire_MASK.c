
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int * next; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static inline struct sk_buff *FUNC_3(u32 VAR_2)
{
 struct sk_buff *VAR_3;
 unsigned int VAR_4 = (VAR_0 + VAR_2 + 3) & ~3u;

 VAR_3 = FUNC_0(VAR_4, VAR_1);
 if (VAR_3) {
  FUNC_2(VAR_3, VAR_0);
  FUNC_1(VAR_3, VAR_2);
  VAR_3->next = ((void*)0);
 }
 return VAR_3;
}
