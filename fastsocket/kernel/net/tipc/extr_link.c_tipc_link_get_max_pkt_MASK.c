
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_node {struct link** active_links; } ;
struct link {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct link*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (struct tipc_node*) ;
 struct tipc_node* FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (struct tipc_node*) ;
 scalar_t__ VAR_3 ;

u32 FUNC_6(u32 VAR_4, u32 VAR_5)
{
 struct tipc_node *VAR_6;
 struct link *VAR_7;
 u32 VAR_8 = VAR_1;

 if (VAR_4 == VAR_3)
  return VAR_0;

 FUNC_1(&VAR_2);
 VAR_6 = FUNC_4(VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_6);
  VAR_7 = VAR_6->active_links[VAR_5 & 1];
  if (VAR_7)
   VAR_8 = FUNC_0(VAR_7);
  FUNC_5(VAR_6);
 }
 FUNC_2(&VAR_2);
 return VAR_8;
}
