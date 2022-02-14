
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ isc_result_t ;
struct TYPE_6__ {scalar_t__ result; } ;
typedef TYPE_1__ isc_interfaceiter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

isc_result_t
FUNC_4(isc_interfaceiter_t *VAR_2) {
 isc_result_t VAR_3;

 FUNC_0(FUNC_1(VAR_2));
 FUNC_0(VAR_2->result == VAR_1);

 for (;;) {
  VAR_3 = FUNC_3(VAR_2);
  if (VAR_3 != VAR_1)
   break;
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3 != VAR_0)
   break;
 }
 VAR_2->result = VAR_3;
 return (VAR_3);
}
