
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int hw; } ;
typedef TYPE_1__ ocs_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
struct TYPE_9__ {int indicator; } ;
typedef TYPE_2__ ocs_hw_io_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,TYPE_2__*,int ,int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int ,...) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(ocs_t *VAR_5, ocs_hw_io_t *VAR_6)
{
 ocs_hw_rtn_e VAR_7;
 VAR_7 = FUNC_0(&VAR_5->hw, VAR_6, VAR_0,
      VAR_4, VAR_5);
 if((VAR_7 == VAR_1) ||
    (VAR_7 == VAR_2)) {
  FUNC_1(VAR_5, "already aborted XRI 0x%x\n", VAR_6->indicator);
 } else if(VAR_7 != VAR_3) {
  FUNC_1(VAR_5, "Error aborting XRI 0x%x status %d\n",
         VAR_6->indicator, VAR_7);
 }
}
