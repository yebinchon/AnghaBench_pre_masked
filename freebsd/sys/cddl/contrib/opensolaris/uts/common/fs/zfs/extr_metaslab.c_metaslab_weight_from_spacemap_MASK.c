
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {TYPE_2__* ms_sm; } ;
typedef TYPE_3__ metaslab_t ;
struct TYPE_6__ {scalar_t__ sm_shift; TYPE_1__* sm_phys; } ;
struct TYPE_5__ {scalar_t__* smp_histogram; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static uint64_t
FUNC_3(metaslab_t *VAR_1)
{
 uint64_t VAR_2 = 0;

 for (int VAR_3 = VAR_0 - 1; VAR_3 >= 0; VAR_3--) {
  if (VAR_1->ms_sm->sm_phys->smp_histogram[VAR_3] != 0) {
   FUNC_1(VAR_2,
       VAR_1->ms_sm->sm_phys->smp_histogram[VAR_3]);
   FUNC_2(VAR_2, VAR_3 +
       VAR_1->ms_sm->sm_shift);
   FUNC_0(VAR_2, 0);
   break;
  }
 }
 return (VAR_2);
}
