
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_uint32_t ;
struct TYPE_4__ {int state; int bits; int tap; int arg; int (* reseed ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ isc_lfsr_t ;


 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static inline isc_uint32_t
FUNC_1(isc_lfsr_t *VAR_0)
{
 if (VAR_0->state == 0) {
  if (VAR_0->reseed != ((void*)0))
   VAR_0->reseed(VAR_0, VAR_0->arg);
  if (VAR_0->state == 0)
   VAR_0->state = 0xffffffffU >> (32 - VAR_0->bits);
 }

 if (VAR_0->state & 0x01) {
  VAR_0->state = (VAR_0->state >> 1) ^ VAR_0->tap;
  return (1);
 } else {
  VAR_0->state >>= 1;
  return (0);
 }
}
