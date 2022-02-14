
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct callchain_node {int hit; scalar_t__ children_hit; } ;
struct callchain_cursor {int dummy; } ;


 struct callchain_node* FUNC_0 (struct callchain_node*,int) ;
 int FUNC_1 (struct callchain_node*,struct callchain_cursor*) ;

__attribute__((used)) static void
FUNC_2(struct callchain_node *VAR_0,
   struct callchain_cursor *VAR_1,
   u64 VAR_2)
{
 struct callchain_node *VAR_3;

 VAR_3 = FUNC_0(VAR_0, 0);
 FUNC_1(VAR_3, VAR_1);

 VAR_3->children_hit = 0;
 VAR_3->hit = VAR_2;
}
