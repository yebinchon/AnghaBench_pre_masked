
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_12__ {int * v; } ;
typedef TYPE_2__ block ;
struct TYPE_13__ {int lane_length; int lanes; TYPE_1__* region; } ;
typedef TYPE_3__ argon2_instance_t ;
struct TYPE_14__ {int flags; int outlen; int out; } ;
typedef TYPE_4__ argon2_context ;
struct TYPE_11__ {int memory; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int) ;

void
FUNC_6(const argon2_context *VAR_1, argon2_instance_t *VAR_2)
{
    if (VAR_1 != ((void*)0) && VAR_2 != ((void*)0)) {
        block VAR_3;
        uint32_t VAR_4;

        FUNC_1(&VAR_3,
                   VAR_2->region->memory + VAR_2->lane_length - 1);


        for (VAR_4 = 1; VAR_4 < VAR_2->lanes; ++VAR_4) {
            uint32_t VAR_5 =
                VAR_4 * VAR_2->lane_length + (VAR_2->lane_length - 1);
            FUNC_5(&VAR_3,
                      VAR_2->region->memory + VAR_5);
        }


        {
            uint8_t VAR_6[VAR_0];
            FUNC_4(VAR_6, &VAR_3);
            FUNC_0(VAR_1->out, VAR_1->outlen, VAR_6,
                         VAR_0);
            FUNC_3(VAR_3.v,
                           VAR_0);
            FUNC_3(VAR_6,
                           VAR_0);
        }

        FUNC_2(VAR_2, VAR_1->flags);
    }
}
