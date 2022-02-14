
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t u_int ;
struct TYPE_3__ {size_t pos; int * buf; } ;
struct TYPE_4__ {TYPE_1__ hc_entropy_fast_accumulator; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 () ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (void const*,size_t,int ) ;

void
FUNC_2(const void *VAR_2, u_int VAR_3)
{
 u_int VAR_4;

 VAR_4 = VAR_1.hc_entropy_fast_accumulator.pos;
 VAR_1.hc_entropy_fast_accumulator.buf[VAR_4] ^= FUNC_1(VAR_2, VAR_3, (uint32_t)FUNC_0());
 VAR_1.hc_entropy_fast_accumulator.pos = (VAR_4 + 1)%VAR_0;
}
