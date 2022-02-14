
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {scalar_t__ pos6; } ;
typedef TYPE_1__ isc_interfaceiter_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static isc_result_t
FUNC_0(isc_interfaceiter_t *VAR_2) {
 if (VAR_2->pos6 == 0)
  return (VAR_0);
 VAR_2->pos6--;
 return (VAR_1);
}
