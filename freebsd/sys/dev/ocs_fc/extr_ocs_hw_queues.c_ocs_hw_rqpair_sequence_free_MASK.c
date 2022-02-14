
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int os; } ;
typedef TYPE_2__ ocs_hw_t ;
struct TYPE_12__ {TYPE_1__* header; } ;
typedef TYPE_3__ ocs_hw_sequence_t ;
typedef int ocs_hw_rtn_e ;
struct TYPE_10__ {scalar_t__ rqindex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (int ,char*) ;

ocs_hw_rtn_e
FUNC_3(ocs_hw_t *VAR_3, ocs_hw_sequence_t *VAR_4)
{
 ocs_hw_rtn_e VAR_5 = VAR_2;


 if (VAR_4->header->rqindex == VAR_0) {
  return FUNC_0(VAR_3, VAR_4);
 }





 if (FUNC_1(VAR_3, VAR_4)) {
  FUNC_2(VAR_3->os, "error writing buffers\n");
  return VAR_1;
 }

 return VAR_5;
}
