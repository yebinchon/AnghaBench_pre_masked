
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {int type; int tok; int sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_1(struct roff_node *VAR_6)
{
 switch (VAR_6->type) {
 case 130:
  if (VAR_6->sec == VAR_4)
   VAR_5 &= ~(VAR_2 | VAR_1);
  break;
 case 128:
  VAR_5 |= VAR_3;
  FUNC_0(VAR_6->tok == VAR_0 ? "#" : "##");
  break;
 case 129:
  VAR_5 |= VAR_3;
  break;
 default:
  break;
 }
 return 1;
}
