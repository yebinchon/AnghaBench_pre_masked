
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct ClearToken {scalar_t__ EndTimestamp; scalar_t__ BeginTimestamp; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

void
FUNC_1(struct ClearToken *VAR_0, uid_t VAR_1)
{
    if (VAR_1 != 0)
    {
 if (!((VAR_0->EndTimestamp - VAR_0->BeginTimestamp) & 1))
     VAR_0->EndTimestamp--;
    }
    else
    {
 if (((VAR_0->EndTimestamp - VAR_0->BeginTimestamp) & 1))
     VAR_0->EndTimestamp--;
    }
}
