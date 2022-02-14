
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_boolean_t ;
struct TYPE_3__ {scalar_t__ references; scalar_t__ state; int events; } ;
typedef TYPE_1__ isc__task_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline isc_boolean_t
FUNC_4(isc__task_t *VAR_4) {





 FUNC_2(VAR_4->references > 0);

 FUNC_3("detach");

 VAR_4->references--;
 if (VAR_4->references == 0 && VAR_4->state == VAR_2) {
  FUNC_1(FUNC_0(VAR_4->events));
  VAR_4->state = VAR_3;
  return (VAR_1);
 }

 return (VAR_0);
}
