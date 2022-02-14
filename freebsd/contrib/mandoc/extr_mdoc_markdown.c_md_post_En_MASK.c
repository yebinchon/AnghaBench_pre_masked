
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct roff_node {TYPE_4__* norm; } ;
struct TYPE_8__ {TYPE_3__* Es; } ;
struct TYPE_7__ {TYPE_2__* child; } ;
struct TYPE_6__ {TYPE_1__* next; } ;
struct TYPE_5__ {int string; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct roff_node *VAR_2)
{
 if (VAR_2->norm->Es == ((void*)0) ||
     VAR_2->norm->Es->child == ((void*)0) ||
     VAR_2->norm->Es->child->next == ((void*)0))
  return;

 VAR_1 &= ~VAR_0;
 FUNC_0(VAR_2->norm->Es->child->next->string);
}
