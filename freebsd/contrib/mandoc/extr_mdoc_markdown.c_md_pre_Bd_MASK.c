
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct roff_node {TYPE_2__* norm; } ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ Bd; } ;




 int FUNC_0 (struct roff_node*) ;
 int FUNC_1 (struct roff_node*) ;

__attribute__((used)) static int
FUNC_2(struct roff_node *VAR_0)
{
 switch (VAR_0->norm->Bd.type) {
 case 128:
 case 129:
  return FUNC_1(VAR_0);
 default:
  return FUNC_0(VAR_0);
 }
}
