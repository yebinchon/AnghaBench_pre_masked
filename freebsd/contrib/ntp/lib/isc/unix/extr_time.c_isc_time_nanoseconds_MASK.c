
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_uint32_t ;
struct TYPE_3__ {scalar_t__ nanoseconds; } ;
typedef TYPE_1__ isc_time_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;

isc_uint32_t
FUNC_2(const isc_time_t *VAR_1) {
 FUNC_1(VAR_1 != ((void*)0));

 FUNC_0(VAR_1->nanoseconds < VAR_0);

 return ((isc_uint32_t)VAR_1->nanoseconds);
}
