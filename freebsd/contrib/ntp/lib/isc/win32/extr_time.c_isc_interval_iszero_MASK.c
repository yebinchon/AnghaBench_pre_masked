
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ interval; } ;
typedef TYPE_1__ isc_interval_t ;
typedef int isc_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

isc_boolean_t
FUNC_1(const isc_interval_t *VAR_2) {
 FUNC_0(VAR_2 != ((void*)0));
 if (VAR_2->interval == 0)
  return (VAR_1);

 return (VAR_0);
}
