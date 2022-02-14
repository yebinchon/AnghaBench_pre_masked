
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* uhash_ctx_t ;
typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_3__ {int * poly_key_8; void** poly_accum; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,int ,int) ;

__attribute__((used)) static void FUNC_1(uhash_ctx_t VAR_2, UINT32 VAR_3[])
{
    int VAR_4;
    UINT64 *VAR_5=(UINT64*)VAR_3;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if ((UINT32)(VAR_5[VAR_4] >> 32) == 0xfffffffful) {
            VAR_2->poly_accum[VAR_4] = FUNC_0(VAR_2->poly_accum[VAR_4],
                                       VAR_2->poly_key_8[VAR_4], VAR_1 - 1);
            VAR_2->poly_accum[VAR_4] = FUNC_0(VAR_2->poly_accum[VAR_4],
                                       VAR_2->poly_key_8[VAR_4], (VAR_5[VAR_4] - 59));
        } else {
            VAR_2->poly_accum[VAR_4] = FUNC_0(VAR_2->poly_accum[VAR_4],
                                       VAR_2->poly_key_8[VAR_4], VAR_5[VAR_4]);
        }
    }
}
