
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int processorid_t ;
typedef int maxid ;
struct TYPE_4__ {int (* dtv_status ) (int ,int) ;} ;
typedef TYPE_1__ dtrace_vector_t ;
struct TYPE_5__ {int dt_varg; TYPE_1__* dt_vector; } ;
typedef TYPE_2__ dtrace_hdl_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (char*,int*,size_t*,int *,int ) ;

int
FUNC_3(dtrace_hdl_t *VAR_1, processorid_t VAR_2)
{
 const dtrace_vector_t *VAR_3 = VAR_1->dt_vector;

 if (VAR_3 == ((void*)0)) {



  int VAR_4 = 0;
  size_t VAR_5 = sizeof(VAR_4);
  if (FUNC_2("kern.smp.maxid", &VAR_4, &VAR_5, ((void*)0), 0) != 0)
   return (VAR_2 == 0 ? 1 : -1);
  else
   return (VAR_2 <= VAR_4 ? 1 : -1);

 }

 return (VAR_3->dtv_status(VAR_1->dt_varg, VAR_2));
}
