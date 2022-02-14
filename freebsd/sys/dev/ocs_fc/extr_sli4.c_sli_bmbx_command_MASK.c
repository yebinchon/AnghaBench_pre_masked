
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {scalar_t__ virt; scalar_t__ phys; } ;
struct TYPE_9__ {int os; TYPE_8__ bmbx; } ;
typedef TYPE_1__ sli4_t ;
struct TYPE_10__ {scalar_t__ val; } ;
typedef TYPE_2__ sli4_mcqe_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_8__*,int ) ;
 int FUNC_1 (int ,int ,char*,void*,int) ;
 int FUNC_2 (int ,char*,void*,int ,...) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,char*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ) ;

int32_t
FUNC_9(sli4_t *VAR_7)
{
 void *VAR_8 = (uint8_t *)VAR_7->bmbx.virt + VAR_2;





 if (FUNC_7(VAR_7) > 0) {
  FUNC_2(VAR_7->os, "Chip is in an error state - Mailbox "
   "command rejected status=%#x error1=%#x error2=%#x\n",
   FUNC_8(VAR_7, VAR_6),
   FUNC_8(VAR_7, VAR_4),
   FUNC_8(VAR_7, VAR_5));
  return -1;
 }

 if (FUNC_4(VAR_7)) {
  FUNC_2(VAR_7->os, "bootstrap mailbox write fail phys=%p reg=%#x\n",
   (void*)VAR_7->bmbx.phys,
   FUNC_8(VAR_7, VAR_3));
  return -1;
 }


 FUNC_0(&VAR_7->bmbx, VAR_1);
 if (((sli4_mcqe_t *)VAR_8)->val) {




  return FUNC_5(VAR_8);
 } else {
  FUNC_3(VAR_7->os, "invalid or wrong type\n");
  return -1;
 }
}
