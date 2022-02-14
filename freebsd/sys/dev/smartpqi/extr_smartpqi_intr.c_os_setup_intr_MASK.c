
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ intr_type; } ;
typedef TYPE_1__ pqisrc_softstate_t ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(pqisrc_softstate_t *VAR_1)
{
 int VAR_2 = 0;

 FUNC_0("IN\n");

 if (VAR_1->intr_type == VAR_0) {
  VAR_2 = FUNC_1(VAR_1);
 }
 else {
  VAR_2 = FUNC_2(VAR_1);
 }
 if (VAR_2) {
  FUNC_0("OUT failed error = %d\n", VAR_2);
  return VAR_2;
 }

 FUNC_0("OUT error = %d\n", VAR_2);

 return VAR_2;
}
