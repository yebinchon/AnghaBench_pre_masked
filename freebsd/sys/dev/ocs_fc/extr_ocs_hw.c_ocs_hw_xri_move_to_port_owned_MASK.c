
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_11__ {int io_lock; int io_port_owned; int os; int io_free; scalar_t__ auto_xfer_rdy_enabled; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
struct TYPE_12__ {int is_port_owned; int indicator; int axr_lock; } ;
typedef TYPE_2__ ocs_hw_io_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,char*,int ) ;
 int FUNC_8 (int *) ;

uint32_t
FUNC_9(ocs_hw_t *VAR_1, uint32_t VAR_2)
{
 ocs_hw_io_t *VAR_3;
 uint32_t VAR_4;
 uint32_t VAR_5 = 0;






 FUNC_6(&VAR_1->io_lock);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {

  if (((void*)0) != (VAR_3 = FUNC_5(&VAR_1->io_free))) {
   ocs_hw_rtn_e VAR_6;







   if (VAR_1->auto_xfer_rdy_enabled) {

    FUNC_8(&VAR_1->io_lock);
    VAR_6 = FUNC_2(VAR_1, VAR_3);
    FUNC_6(&VAR_1->io_lock);
    if (VAR_6 != VAR_0) {
     FUNC_3(&VAR_1->io_free, VAR_3);
     break;
    }
   }
   FUNC_7(VAR_1->os, &VAR_3->axr_lock, "HW_axr_lock[%d]", VAR_3->indicator);
   VAR_3->is_port_owned = 1;
   FUNC_4(&VAR_1->io_port_owned, VAR_3);


   if (FUNC_0(VAR_1, VAR_3->indicator, 1) != VAR_0 ) {
    FUNC_1(VAR_1, VAR_3->indicator, VAR_4);
    break;
   }
   VAR_5++;
  } else {

   break;
  }
 }
 FUNC_8(&VAR_1->io_lock);

 return VAR_5;
}
