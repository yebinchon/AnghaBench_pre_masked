
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;


 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static inline struct sk_buff *FUNC_4(struct sk_buff_head *VAR_0)
{
 struct sk_buff *VAR_1;

 if (FUNC_1()) {
  VAR_1 = FUNC_0(VAR_0);
 } else {
  FUNC_2();
  VAR_1 = FUNC_0(VAR_0);
  FUNC_3();
 }

 return VAR_1;
}
