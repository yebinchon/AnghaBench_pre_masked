
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_buffer_t ;
struct TYPE_3__ {int length; int * target; scalar_t__ digits; } ;
typedef TYPE_1__ hex_decode_ctx_t ;



__attribute__((used)) static inline void
FUNC_0(hex_decode_ctx_t *VAR_0, int VAR_1, isc_buffer_t *VAR_2)
{
 VAR_0->digits = 0;
 VAR_0->length = VAR_1;
 VAR_0->target = VAR_2;
}
