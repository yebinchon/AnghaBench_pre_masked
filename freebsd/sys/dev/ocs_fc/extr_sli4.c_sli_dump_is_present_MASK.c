
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int os; } ;
typedef TYPE_1__ sli4_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

int32_t FUNC_5(sli4_t *VAR_5)
{
 uint32_t VAR_6;
 uint32_t VAR_7;

 if (VAR_0 != FUNC_2(VAR_5)) {
  FUNC_1(VAR_5->os, "Function only supported for I/F type 2");
  return -1;
 }


 VAR_7 = FUNC_4(VAR_5, VAR_1);
 if (!VAR_7) {
  return 0;
 }

 VAR_6 = FUNC_3(VAR_5, VAR_3);
 if (VAR_4 == VAR_6) {
  FUNC_0(VAR_5->os, "error reading SLIPORT_STATUS\n");
  return -1;
 } else {
  return ((VAR_6 & VAR_2) ? 1 : 0);
 }
}
