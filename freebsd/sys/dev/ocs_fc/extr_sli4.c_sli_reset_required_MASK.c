
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int os; } ;
typedef TYPE_1__ sli4_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int32_t FUNC_4(sli4_t *VAR_4)
{
 uint32_t VAR_5;

 if (VAR_0 == FUNC_2(VAR_4)) {
  FUNC_1(VAR_4->os, "reset required N/A for iftype 0\n");
  return 0;
 }

 VAR_5 = FUNC_3(VAR_4, VAR_2);
 if (VAR_3 == VAR_5) {
  FUNC_0(VAR_4->os, "error reading SLIPORT_STATUS\n");
  return -1;
 } else {
  return ((VAR_5 & VAR_1) ? 1 : 0);
 }
}
