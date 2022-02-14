
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gcov_node {int * links; } ;
struct TYPE_2__ {scalar_t__ ext; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct gcov_node *VAR_2)
{

 if (VAR_2->links == ((void*)0))
  return;
 for (int VAR_3 = 0; VAR_1[VAR_3].ext; VAR_3++)
  FUNC_0(VAR_2->links[VAR_3]);
 FUNC_1(VAR_2->links, VAR_0);
 VAR_2->links = ((void*)0);
}
