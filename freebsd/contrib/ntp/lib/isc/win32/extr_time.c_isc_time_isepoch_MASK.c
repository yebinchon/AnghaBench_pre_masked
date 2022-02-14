
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dwLowDateTime; scalar_t__ dwHighDateTime; } ;
struct TYPE_5__ {TYPE_1__ absolute; } ;
typedef TYPE_2__ isc_time_t ;
typedef int isc_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

isc_boolean_t
FUNC_1(const isc_time_t *VAR_2) {
 FUNC_0(VAR_2 != ((void*)0));

 if (VAR_2->absolute.dwLowDateTime == 0 &&
     VAR_2->absolute.dwHighDateTime == 0)
  return (VAR_1);

 return (VAR_0);
}
