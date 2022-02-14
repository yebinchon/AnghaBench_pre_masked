
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct roff_node {TYPE_3__* norm; } ;
struct TYPE_6__ {TYPE_2__* Es; } ;
struct TYPE_5__ {TYPE_1__* child; } ;
struct TYPE_4__ {int string; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct roff_node *VAR_2)
{
 if (VAR_2->norm->Es == ((void*)0) ||
     VAR_2->norm->Es->child == ((void*)0))
  return 1;

 FUNC_0(VAR_2->norm->Es->child->string);
 VAR_1 &= ~VAR_0;
 return 1;
}
