
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int isc_uint32_t ;
struct TYPE_5__ {int dwHighDateTime; int dwLowDateTime; } ;
struct TYPE_6__ {TYPE_1__ absolute; } ;
typedef TYPE_2__ isc_time_t ;
struct TYPE_7__ {int QuadPart; int HighPart; int LowPart; } ;
typedef TYPE_3__ ULARGE_INTEGER ;



isc_uint32_t
FUNC_0(const isc_time_t *VAR_0) {
 ULARGE_INTEGER VAR_1;

 VAR_1.LowPart = VAR_0->absolute.dwLowDateTime;
 VAR_1.HighPart = VAR_0->absolute.dwHighDateTime;
 return ((isc_uint32_t)(VAR_1.QuadPart % 10000000) * 100);
}
