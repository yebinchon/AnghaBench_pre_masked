
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_uint64_t ;
struct TYPE_6__ {int dwHighDateTime; int dwLowDateTime; } ;
struct TYPE_7__ {TYPE_1__ absolute; } ;
typedef TYPE_2__ isc_time_t ;
struct TYPE_8__ {scalar_t__ QuadPart; int HighPart; int LowPart; } ;
typedef TYPE_3__ ULARGE_INTEGER ;
typedef int LONGLONG ;


 int FUNC_0 (int) ;

isc_uint64_t
FUNC_1(const isc_time_t *VAR_0, const isc_time_t *VAR_1) {
 ULARGE_INTEGER VAR_2, VAR_3;
 LONGLONG VAR_4;

 FUNC_0(VAR_0 != ((void*)0) && VAR_1 != ((void*)0));

 VAR_2 = VAR_0->absolute.dwLowDateTime;
 VAR_2 = VAR_0->absolute.dwHighDateTime;
 VAR_3 = VAR_1->absolute.dwLowDateTime;
 VAR_3 = VAR_1->absolute.dwHighDateTime;

 if (VAR_2 <= VAR_3)
  return (0);




 VAR_4 = (VAR_2 - VAR_3) / 10;

 return (VAR_4);
}
