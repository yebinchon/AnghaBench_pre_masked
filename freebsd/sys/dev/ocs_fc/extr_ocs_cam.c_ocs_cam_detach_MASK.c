
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_vports; int sim_lock; int devq; } ;
typedef TYPE_1__ ocs_t ;
typedef int int32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int) ;

int32_t
FUNC_4(ocs_t *VAR_0)
{
 int VAR_1 = 0;

 for (VAR_1 = (VAR_0->num_vports); VAR_1 >= 0; VAR_1--) {
  FUNC_3(VAR_0, VAR_1);
 }

 FUNC_0(VAR_0->devq);

 if (FUNC_2(&VAR_0->sim_lock))
  FUNC_1(&VAR_0->sim_lock);

 return 0;
}
