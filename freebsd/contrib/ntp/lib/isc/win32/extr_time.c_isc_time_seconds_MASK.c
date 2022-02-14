
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int isc_uint32_t ;
struct TYPE_9__ {int dwHighDateTime; int dwLowDateTime; } ;
struct TYPE_10__ {TYPE_1__ absolute; } ;
typedef TYPE_2__ isc_time_t ;
struct TYPE_11__ {int QuadPart; int HighPart; int LowPart; } ;
typedef TYPE_3__ ULARGE_INTEGER ;
struct TYPE_13__ {int dwHighDateTime; int dwLowDateTime; } ;
struct TYPE_12__ {int member_0; int member_1; int member_2; int member_3; int member_7; int member_6; int member_5; int member_4; } ;
typedef TYPE_4__ SYSTEMTIME ;
typedef int LONGLONG ;
typedef TYPE_5__ FILETIME ;


 int FUNC_0 (TYPE_4__*,TYPE_5__*) ;

isc_uint32_t
FUNC_1(const isc_time_t *VAR_0) {
 SYSTEMTIME VAR_1 = { 1970, 1, 4, 1, 0, 0, 0, 0 };
 FILETIME VAR_2;
 ULARGE_INTEGER VAR_3, VAR_4;
 LONGLONG VAR_5;

 FUNC_0(&VAR_1, &VAR_2);

 VAR_3 = VAR_0->absolute.dwLowDateTime;
 VAR_3 = VAR_0->absolute.dwHighDateTime;
 VAR_4 = VAR_2.dwLowDateTime;
 VAR_4 = VAR_2.dwHighDateTime;

 VAR_5 = (VAR_3 - VAR_4) / 10000000;

 return ((isc_uint32_t)VAR_5);
}
