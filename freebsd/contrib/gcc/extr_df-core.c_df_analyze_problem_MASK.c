
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dataflow {TYPE_1__* problem; } ;
typedef int bitmap ;
struct TYPE_2__ {int (* finalize_fun ) (struct dataflow*,int ) ;int (* dataflow_fun ) (struct dataflow*,int ,int ,int*,int,int) ;int (* local_compute_fun ) (struct dataflow*,int ,int ) ;int (* alloc_fun ) (struct dataflow*,int ,int ) ;} ;


 int FUNC_0 (struct dataflow*,int ,int ) ;
 int FUNC_1 (struct dataflow*,int ,int ) ;
 int FUNC_2 (struct dataflow*,int ,int ,int*,int,int) ;
 int FUNC_3 (struct dataflow*,int ) ;

void
FUNC_4 (struct dataflow *VAR_0,
      bitmap VAR_1,
      bitmap VAR_2,
      bitmap VAR_3,
      int *VAR_4, int VAR_5, bool VAR_6)
{

  if (VAR_0->problem->alloc_fun)
    VAR_0->problem->alloc_fun (VAR_0, VAR_3, VAR_2);





  if (VAR_0->problem->local_compute_fun)
    VAR_0->problem->local_compute_fun (VAR_0, VAR_1, VAR_3);


  if (VAR_0->problem->dataflow_fun)
    VAR_0->problem->dataflow_fun (VAR_0, VAR_1, VAR_2,
      VAR_4, VAR_5, VAR_6);


  if (VAR_0->problem->finalize_fun)
    VAR_0->problem->finalize_fun (VAR_0, VAR_1);
}
