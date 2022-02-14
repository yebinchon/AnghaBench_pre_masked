
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int virt; } ;
struct TYPE_10__ {scalar_t__ if_type; int os; TYPE_1__ bmbx; } ;
typedef TYPE_2__ sli4_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;

__attribute__((used)) static int32_t
FUNC_8(sli4_t *VAR_6)
{
 uint32_t VAR_7;

 if (VAR_6->if_type == VAR_2 ||
     VAR_6->if_type == VAR_3) {

  if (FUNC_4(VAR_6, VAR_0)) {
   FUNC_0(VAR_6->os, "bootstrap mailbox not ready\n");
   return -1;
  }

  if (FUNC_6(VAR_6)) {
   FUNC_1(VAR_6->os, "bad COM_FUNC_RESET write\n");
   return -1;
  }

  if (FUNC_5(VAR_6, VAR_6->bmbx.virt, VAR_1)) {
   if (FUNC_3(VAR_6)) {
    FUNC_0(VAR_6->os, "bootstrap mailbox write fail (FW_DEINIT)\n");
    return -1;
   }
  } else {
   FUNC_2(VAR_6->os, "bad FW_DEINIT write\n");
   return -1;
  }
 } else {

  VAR_7 = VAR_5;




  FUNC_7(VAR_6, VAR_7);
 }
 return 0;
}
