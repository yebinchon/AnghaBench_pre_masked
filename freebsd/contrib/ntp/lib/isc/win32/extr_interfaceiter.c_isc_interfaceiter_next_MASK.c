
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ isc_result_t ;
struct TYPE_10__ {scalar_t__ result; } ;
typedef TYPE_1__ isc_interfaceiter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

isc_result_t
FUNC_8(isc_interfaceiter_t *VAR_5) {
 isc_result_t VAR_6;

 FUNC_0(FUNC_1(VAR_5));
 FUNC_0(VAR_5->result == VAR_2);
 FUNC_0(VAR_4);

 if (VAR_3) {
  do {
   VAR_6 = FUNC_7(VAR_5);
   if (VAR_1 == VAR_6)
    goto set_result;
   VAR_6 = FUNC_4(VAR_5);
  } while (VAR_0 == VAR_6);
  goto set_result;
 }

 for (;;) {
  VAR_6 = FUNC_5(VAR_5);
  if (VAR_6 == VAR_1) {
   VAR_6 = FUNC_6(VAR_5);
   if (VAR_6 != VAR_2)
    break;
   VAR_6 = FUNC_3(VAR_5);
   if (VAR_6 != VAR_0)
    break;
  } else if (VAR_6 != VAR_2)
   break;
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6 != VAR_0)
   break;
 }
 set_result:
 VAR_5->result = VAR_6;
 return (VAR_6);
}
