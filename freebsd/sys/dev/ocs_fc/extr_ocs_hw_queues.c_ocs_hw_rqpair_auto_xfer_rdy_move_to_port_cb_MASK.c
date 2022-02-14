
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int os; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;

__attribute__((used)) static int32_t
FUNC_2(ocs_hw_t *VAR_1, int32_t VAR_2, uint8_t *VAR_3, void *VAR_4)
{
 if (VAR_2 != 0) {
  FUNC_1(VAR_1->os, "Status 0x%x\n", VAR_2);
 }

 FUNC_0(VAR_1->os, VAR_3, VAR_0);
 return 0;
}
