
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ _variable; size_t _maximum; } ;
typedef TYPE_1__ ldns_rr_descriptor ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;

size_t
FUNC_0(const ldns_rr_descriptor *VAR_2)
{
 if (VAR_2) {
  if (VAR_2->_variable != VAR_0) {

   return VAR_1;
  } else {
   return VAR_2->_maximum;
  }
 } else {
  return 0;
 }
}
