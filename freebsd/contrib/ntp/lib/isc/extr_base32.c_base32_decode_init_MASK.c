
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_buffer_t ;
struct TYPE_3__ {int length; char const* base; int * target; scalar_t__ seen_32; int seen_end; scalar_t__ digits; } ;
typedef TYPE_1__ base32_decode_ctx_t ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(base32_decode_ctx_t *VAR_1, int VAR_2,
     const char VAR_3[], isc_buffer_t *VAR_4)
{
 VAR_1->digits = 0;
 VAR_1->seen_end = VAR_0;
 VAR_1->seen_32 = 0;
 VAR_1->length = VAR_2;
 VAR_1->target = VAR_4;
 VAR_1->base = VAR_3;
}
