
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {int type; } ;


 int VAR_0 ;



 int FUNC_0 (struct roff_node*) ;
 int FUNC_1 (struct roff_node*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct roff_node *VAR_2)
{
 switch (VAR_2->type) {
 case 130:
  VAR_1 |= VAR_0;
  FUNC_1(VAR_2);
  break;
 case 128:
 case 129:
  FUNC_0(VAR_2);
  break;
 default:
  break;
 }
 return 1;
}
