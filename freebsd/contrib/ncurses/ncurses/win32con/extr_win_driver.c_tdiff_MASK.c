
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONGLONG ;
struct TYPE_5__ {int QuadPart; int HighPart; int LowPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;
struct TYPE_6__ {int dwHighDateTime; int dwLowDateTime; } ;
typedef TYPE_2__ FILETIME ;



__attribute__((used)) static ULONGLONG
FUNC_0(FILETIME VAR_0, FILETIME VAR_1)
{
    ULARGE_INTEGER VAR_2;
    ULARGE_INTEGER VAR_3;
    ULONGLONG VAR_4;

    VAR_2.LowPart = VAR_0.dwLowDateTime;
    VAR_2.HighPart = VAR_0.dwHighDateTime;
    VAR_3.LowPart = VAR_1.dwLowDateTime;
    VAR_3.HighPart = VAR_1.dwHighDateTime;

    VAR_4 = (VAR_3.QuadPart - VAR_2.QuadPart) / 10000;
    return VAR_4;
}
