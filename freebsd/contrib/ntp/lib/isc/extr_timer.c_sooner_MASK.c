
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_boolean_t ;
struct TYPE_3__ {int due; } ;
typedef TYPE_1__ isc__timer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int *) ;

__attribute__((used)) static isc_boolean_t
FUNC_3(void *VAR_2, void *VAR_3) {
 isc__timer_t *VAR_4, *VAR_5;

 VAR_4 = VAR_2;
 VAR_5 = VAR_3;
 FUNC_0(FUNC_1(VAR_4));
 FUNC_0(FUNC_1(VAR_5));

 if (FUNC_2(&VAR_4->due, &VAR_5->due) < 0)
  return (VAR_1);
 return (VAR_0);
}
