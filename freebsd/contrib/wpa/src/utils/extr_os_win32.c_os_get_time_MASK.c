
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct os_time {void* usec; void* sec; } ;
typedef void* os_time_t ;
typedef int ULONGLONG ;
struct TYPE_6__ {int dwHighDateTime; int dwLowDateTime; } ;
struct TYPE_5__ {int QuadPart; int HighPart; int LowPart; } ;
typedef int SYSTEMTIME ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef TYPE_2__ FILETIME ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;

int FUNC_3(struct os_time *VAR_1)
{

 FILETIME VAR_2;
 LARGE_INTEGER VAR_3;
 ULONGLONG VAR_4;







 FUNC_1(&VAR_2);

 VAR_3.LowPart = VAR_2.dwLowDateTime;
 VAR_3.HighPart = VAR_2.dwHighDateTime;
 VAR_4 = (VAR_3.QuadPart - (116444736000000000ULL)) / 10;
 VAR_1->sec = (os_time_t) (VAR_4 / 1000000);
 VAR_1->usec = (os_time_t) (VAR_4 % 1000000);

 return 0;
}
