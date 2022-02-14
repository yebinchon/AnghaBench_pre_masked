
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {int type; int * child; } ;




 int FUNC_0 (struct roff_node*) ;
 int FUNC_1 (struct roff_node*) ;

__attribute__((used)) static void
FUNC_2(struct roff_node *VAR_0)
{
 switch (VAR_0->type) {
 case 128:
  if (VAR_0->child != ((void*)0))
   FUNC_1(VAR_0);
  break;
 case 129:
  FUNC_0(VAR_0);
  break;
 default:
  break;
 }
}
