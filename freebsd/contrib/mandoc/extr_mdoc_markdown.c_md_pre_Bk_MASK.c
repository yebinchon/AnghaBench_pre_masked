
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {int type; } ;


 int VAR_0 ;


 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct roff_node *VAR_2)
{
 switch (VAR_2->type) {
 case 129:
  return 1;
 case 128:
  VAR_1 |= VAR_0;
  return 1;
 default:
  return 0;
 }
}
