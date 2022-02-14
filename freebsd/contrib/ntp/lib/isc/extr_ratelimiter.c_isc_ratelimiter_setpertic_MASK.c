
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_uint32_t ;
struct TYPE_3__ {int pertic; } ;
typedef TYPE_1__ isc_ratelimiter_t ;



void
FUNC_0(isc_ratelimiter_t *VAR_0, isc_uint32_t VAR_1) {
 if (VAR_1 == 0)
  VAR_1 = 1;
 VAR_0->pertic = VAR_1;
}
