
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int arg; int (* cb ) (int ,int ) ;} ;
typedef TYPE_1__ uint8_t ;
struct TYPE_8__ {int os; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef TYPE_1__ ocs_hw_set_nvparms_cb_arg_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int32_t
FUNC_2(ocs_hw_t *VAR_1, int32_t VAR_2, uint8_t *VAR_3, void *VAR_4)
{
 ocs_hw_set_nvparms_cb_arg_t *VAR_5 = VAR_4;

 if (VAR_5->cb) {
  VAR_5->cb(VAR_2, VAR_5->arg);
 }

 FUNC_0(VAR_1->os, VAR_3, VAR_0);
 FUNC_0(VAR_1->os, VAR_5, sizeof(ocs_hw_set_nvparms_cb_arg_t));

 return 0;
}
