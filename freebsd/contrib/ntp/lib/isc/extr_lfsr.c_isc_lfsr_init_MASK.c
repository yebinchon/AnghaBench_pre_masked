
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ isc_uint32_t ;
typedef int (* isc_lfsrreseed_t ) (TYPE_1__*,void*) ;
struct TYPE_6__ {int state; unsigned int bits; unsigned int count; void* arg; int (* reseed ) (TYPE_1__*,void*) ;scalar_t__ tap; } ;
typedef TYPE_1__ isc_lfsr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(isc_lfsr_t *VAR_0, isc_uint32_t VAR_1, unsigned int VAR_2,
       isc_uint32_t VAR_3, unsigned int VAR_4,
       isc_lfsrreseed_t VAR_5, void *VAR_6)
{
 FUNC_0(FUNC_1(VAR_0));
 FUNC_0(8 <= VAR_2 && VAR_2 <= 32);
 FUNC_0(VAR_3 != 0);

 VAR_0->state = VAR_1;
 VAR_0->bits = VAR_2;
 VAR_0->tap = VAR_3;
 VAR_0->count = VAR_4;
 VAR_0->reseed = VAR_5;
 VAR_0->arg = VAR_6;

 if (VAR_4 == 0 && VAR_5 != ((void*)0))
  VAR_5(VAR_0, VAR_6);
 if (VAR_0->state == 0)
  VAR_0->state = 0xffffffffU >> (32 - VAR_0->bits);
}
