
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int if_type; int os; } ;
typedef TYPE_1__ sli4_t ;
typedef int int32_t ;


 int VAR_0 ;


 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (TYPE_1__*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;

int32_t
FUNC_6(sli4_t *VAR_5)
{
 uint32_t VAR_6;
 uint32_t VAR_7;




 VAR_7 = FUNC_5(VAR_5, VAR_0);
 if (!VAR_7) {
  FUNC_2(VAR_5->os, "FW status is NOT ready\n");
  return -1;
 }
 switch(VAR_5->if_type) {
 case 129:

  VAR_6 = FUNC_0(VAR_5->os, VAR_1);
  VAR_6 |= VAR_2;
  FUNC_1(VAR_5->os, VAR_1, VAR_6);
  break;
 case 128:


  VAR_6 = VAR_3;
  FUNC_4(VAR_5, VAR_4, VAR_6);
  break;
 default:
  FUNC_3(VAR_5->os, "Unexpected iftype %d\n", VAR_5->if_type);
  return -1;
  break;
 }


 VAR_7 = FUNC_5(VAR_5, VAR_0);
 if (!VAR_7) {
  FUNC_2(VAR_5->os, "Failed to become ready after firmware reset\n");
  return -1;
 }
 return 0;
}
