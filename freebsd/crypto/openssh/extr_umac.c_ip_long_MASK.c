
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* uhash_ctx_t ;
typedef int u_char ;
typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_3__ {scalar_t__* poly_accum; int* ip_trans; scalar_t__ ip_keys; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_3(uhash_ctx_t VAR_2, u_char *VAR_3)
{
    int VAR_4;
    UINT64 VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {

        if (VAR_2->poly_accum[VAR_4] >= VAR_1)
            VAR_2->poly_accum[VAR_4] -= VAR_1;
        VAR_5 = FUNC_1(0,VAR_2->ip_keys+(VAR_4*4), VAR_2->poly_accum[VAR_4]);
        FUNC_0((UINT32 *)VAR_3+VAR_4,
                         FUNC_2(VAR_5) ^ VAR_2->ip_trans[VAR_4]);
    }
}
