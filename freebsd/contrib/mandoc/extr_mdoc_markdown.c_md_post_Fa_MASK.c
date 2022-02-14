
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_node {TYPE_1__* next; } ;
struct TYPE_2__ {scalar_t__ tok; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(struct roff_node *VAR_1)
{
 if (VAR_1->next != ((void*)0) && VAR_1->next->tok == VAR_0)
  FUNC_0(",");
}
