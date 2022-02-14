
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* uhash_ctx_t ;
struct TYPE_3__ {int* poly_accum; scalar_t__ msg_len; int hash; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(uhash_ctx_t VAR_0)
{
    FUNC_0(&VAR_0->hash);
    VAR_0->msg_len = 0;
    VAR_0->poly_accum[0] = 1;
    return 1;
}
