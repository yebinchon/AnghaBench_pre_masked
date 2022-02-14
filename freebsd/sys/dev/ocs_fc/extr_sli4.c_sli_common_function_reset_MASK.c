
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int virt; } ;
struct TYPE_7__ {int os; TYPE_1__ bmbx; } ;
typedef TYPE_2__ sli4_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int32_t
FUNC_5(sli4_t *VAR_1)
{

 if (FUNC_3(VAR_1, VAR_1->bmbx.virt, VAR_0)) {
  if (FUNC_2(VAR_1)) {
   FUNC_0(VAR_1->os, "bootstrap mailbox write fail (COM_FUNC_RESET)\n");
   return -1;
  }
  if (FUNC_4(VAR_1->bmbx.virt)) {
   FUNC_1(VAR_1->os, "bad status COM_FUNC_RESET\n");
   return -1;
  }
 } else {
  FUNC_1(VAR_1->os, "bad COM_FUNC_RESET write\n");
  return -1;
 }

 return 0;
}
