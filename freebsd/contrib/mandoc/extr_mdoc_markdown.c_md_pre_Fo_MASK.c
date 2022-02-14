
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {int type; int * child; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct roff_node*) ;
 int FUNC_1 (struct roff_node*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct roff_node *VAR_3)
{
 switch (VAR_3->type) {
 case 130:
  FUNC_1(VAR_3);
  break;
 case 128:
  if (VAR_3->child == ((void*)0))
   return 0;
  FUNC_0(VAR_3);
  break;
 case 129:
  VAR_2 &= ~(VAR_1 | VAR_0);
  FUNC_2("(");
  break;
 default:
  break;
 }
 return 1;
}
