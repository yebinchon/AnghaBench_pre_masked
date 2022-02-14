
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct roff_node {TYPE_2__* norm; } ;
struct TYPE_3__ {scalar_t__ type; scalar_t__ count; } ;
struct TYPE_4__ {TYPE_1__ Bl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct roff_node*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct roff_node *VAR_3)
{
 VAR_3->norm->Bl.count = 0;
 if (VAR_3->norm->Bl.type == VAR_0)
  FUNC_0(VAR_3);
 VAR_2 |= VAR_1;
}
