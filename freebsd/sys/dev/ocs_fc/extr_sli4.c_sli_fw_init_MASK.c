
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int virt; } ;
struct TYPE_11__ {int if_type; int os; TYPE_1__ bmbx; } ;
typedef TYPE_2__ sli4_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;

__attribute__((used)) static int32_t
FUNC_9(sli4_t *VAR_5)
{
 uint32_t VAR_6;
 uint32_t VAR_7;




 VAR_6 = FUNC_8(VAR_5, VAR_2);
 if (!VAR_6) {
  FUNC_0(VAR_5->os, "FW status is NOT ready\n");
  return -1;
 }




 switch (VAR_5->if_type) {
 case 130:
 case 129:

  if (FUNC_4(VAR_5, VAR_0)) {
   FUNC_0(VAR_5->os, "bootstrap mailbox not ready\n");
   return -1;
  }

  if (FUNC_5(VAR_5, VAR_5->bmbx.virt, VAR_1)) {
   if (FUNC_3(VAR_5)) {
    FUNC_0(VAR_5->os, "bootstrap mailbox write fail (FW_INIT)\n");
    return -1;
   }
  } else {
   FUNC_0(VAR_5->os, "bad FW_INIT write\n");
   return -1;
  }

  if (FUNC_6(VAR_5)) {
   FUNC_1(VAR_5->os, "bad COM_FUNC_RESET write\n");
   return -1;
  }
  break;
 case 128:

  VAR_7 = VAR_4;




  if (FUNC_7(VAR_5, VAR_7))
   return -1;
  break;
 default:
  FUNC_2(VAR_5->os, "if_type %d not supported\n", VAR_5->if_type);
  return -1;
 }

 return 0;
}
