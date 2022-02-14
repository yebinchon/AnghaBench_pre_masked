
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ref_count; } ;
typedef TYPE_1__ VCHIQ_SERVICE_T ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(VCHIQ_SERVICE_T *VAR_1)
{
 FUNC_1(&VAR_0);
 FUNC_0(!VAR_1 || (VAR_1->ref_count == 0));
 if (VAR_1)
  VAR_1->ref_count++;
 FUNC_2(&VAR_0);
}
