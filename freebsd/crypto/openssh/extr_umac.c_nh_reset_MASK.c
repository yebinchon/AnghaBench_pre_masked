
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* state; scalar_t__ next_data_empty; scalar_t__ bytes_hashed; } ;
typedef TYPE_1__ nh_ctx ;



__attribute__((used)) static void FUNC_0(nh_ctx *VAR_0)

{
    VAR_0->bytes_hashed = 0;
    VAR_0->next_data_empty = 0;
    VAR_0->state[0] = 0;
}
