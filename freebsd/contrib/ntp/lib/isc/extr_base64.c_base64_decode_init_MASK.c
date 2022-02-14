
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_buffer_t ;
struct TYPE_3__ {int length; int * target; int seen_end; scalar_t__ digits; } ;
typedef TYPE_1__ base64_decode_ctx_t ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(base64_decode_ctx_t *VAR_1, int VAR_2, isc_buffer_t *VAR_3)
{
 VAR_1->digits = 0;
 VAR_1->seen_end = VAR_0;
 VAR_1->length = VAR_2;
 VAR_1->target = VAR_3;
}
