
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_port {int dummy; } ;
struct sk_buff {struct sk_buff* next; } ;
typedef int Handler ;


 struct sk_buff* VAR_0 ;
 struct sk_buff* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static u32 FUNC_3(struct tipc_port *VAR_4, struct sk_buff *VAR_5)
{
 VAR_5->next = ((void*)0);
 FUNC_0(&VAR_3);
 if (VAR_0) {
  VAR_1->next = VAR_5;
  VAR_1 = VAR_5;
 } else {
  VAR_1 = VAR_0 = VAR_5;
  FUNC_2((Handler)VAR_2, 0);
 }
 FUNC_1(&VAR_3);
 return 0;
}
