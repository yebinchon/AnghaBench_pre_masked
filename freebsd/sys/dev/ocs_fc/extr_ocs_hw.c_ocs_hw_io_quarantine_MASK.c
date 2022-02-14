
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_8__ {size_t quarantine_index; TYPE_3__** quarantine_ios; } ;
typedef TYPE_1__ ocs_quarantine_info_t ;
struct TYPE_9__ {int * os; } ;
typedef TYPE_2__ ocs_hw_t ;
struct TYPE_10__ {int ref; int reqtag; int indicator; int quarantine; } ;
typedef TYPE_3__ ocs_hw_io_t ;
struct TYPE_11__ {int queue; TYPE_1__ quarantine_info; } ;
typedef TYPE_4__ hw_wq_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(ocs_hw_t *VAR_1, hw_wq_t *VAR_2, ocs_hw_io_t *VAR_3)
{
 ocs_quarantine_info_t *VAR_4 = &VAR_2->quarantine_info;
 uint32_t VAR_5;
 ocs_hw_io_t *VAR_6 = ((void*)0);


 if (!VAR_3->quarantine) {
  return;
 }


 if (FUNC_1(&VAR_3->ref) == 0) {

  FUNC_0(VAR_1 ? VAR_1->os : ((void*)0),
         "io not active xri=0x%x tag=0x%x\n",
         VAR_3->indicator, VAR_3->reqtag);
  return;
 }

 FUNC_3(VAR_2->queue);
  VAR_5 = VAR_4->quarantine_index;
  VAR_6 = VAR_4->quarantine_ios[VAR_5];
  VAR_4->quarantine_ios[VAR_5] = VAR_3;
  VAR_4->quarantine_index = (VAR_5 + 1) % VAR_0;
 FUNC_4(VAR_2->queue);

 if (VAR_6 != ((void*)0)) {
  FUNC_2(&VAR_6->ref);
 }
}
