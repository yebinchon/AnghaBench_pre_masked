
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ isc_result_t ;
struct TYPE_3__ {scalar_t__ result; int current; } ;
typedef TYPE_1__ isc_interfaceiter_t ;
typedef int isc_interface_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;

isc_result_t
FUNC_2(isc_interfaceiter_t *VAR_1,
     isc_interface_t *VAR_2) {
 FUNC_0(VAR_1->result == VAR_0);
 FUNC_1(VAR_2, &VAR_1->current, sizeof(*VAR_2));
 return (VAR_0);
}
