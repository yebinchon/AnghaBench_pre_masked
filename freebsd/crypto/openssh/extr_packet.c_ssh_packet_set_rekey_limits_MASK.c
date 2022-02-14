
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
typedef scalar_t__ u_int32_t ;
struct ssh {TYPE_1__* state; } ;
struct TYPE_2__ {scalar_t__ rekey_interval; scalar_t__ rekey_limit; } ;


 int FUNC_0 (char*,unsigned long long,unsigned int) ;

void
FUNC_1(struct ssh *VAR_0, u_int64_t VAR_1, u_int32_t VAR_2)
{
 FUNC_0("rekey after %llu bytes, %u seconds", (unsigned long long)VAR_1,
     (unsigned int)VAR_2);
 VAR_0->state->rekey_limit = VAR_1;
 VAR_0->state->rekey_interval = VAR_2;
}
