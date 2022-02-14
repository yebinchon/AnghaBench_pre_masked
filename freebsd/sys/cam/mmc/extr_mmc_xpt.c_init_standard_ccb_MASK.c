
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timeout; int cbfcnp; scalar_t__ retry_count; int flags; int func_code; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_0(union ccb *VAR_2, uint32_t VAR_3)
{
 VAR_2->ccb_h.func_code = VAR_3;
 VAR_2->ccb_h.flags = VAR_0;
 VAR_2->ccb_h.retry_count = 0;
 VAR_2->ccb_h.timeout = 15 * 1000;
 VAR_2->ccb_h.cbfcnp = VAR_1;
}
