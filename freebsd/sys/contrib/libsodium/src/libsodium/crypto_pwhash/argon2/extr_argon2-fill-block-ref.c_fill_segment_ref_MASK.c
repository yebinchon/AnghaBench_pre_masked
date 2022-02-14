
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_18__ {int* v; } ;
typedef TYPE_2__ block ;
struct TYPE_19__ {scalar_t__ pass; int slice; int lane; int index; } ;
typedef TYPE_3__ argon2_position_t ;
struct TYPE_20__ {scalar_t__ type; int* pseudo_rands; int lane_length; int segment_length; int lanes; TYPE_1__* region; } ;
typedef TYPE_4__ argon2_instance_t ;
struct TYPE_17__ {TYPE_2__* memory; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_4__ const*,TYPE_3__*,int*) ;
 int FUNC_3 (TYPE_4__ const*,TYPE_3__*,int,int) ;

void
FUNC_4(const argon2_instance_t *VAR_2, argon2_position_t VAR_3)
{
    block *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

    uint64_t *VAR_6 = ((void*)0);
    uint64_t VAR_7, VAR_8, VAR_9;
    uint32_t VAR_10, VAR_11;
    uint32_t VAR_12;
    uint32_t VAR_13;
    int VAR_14 = 1;

    if (VAR_2 == ((void*)0)) {
        return;
    }

    if (VAR_2->type == VAR_1 &&
        (VAR_3.pass != 0 || VAR_3.slice >= VAR_0 / 2)) {
        VAR_14 = 0;
    }

    VAR_6 = VAR_2->pseudo_rands;

    if (VAR_14) {
        FUNC_2(VAR_2, &VAR_3, VAR_6);
    }

    VAR_12 = 0;

    if ((0 == VAR_3.pass) && (0 == VAR_3.slice)) {
        VAR_12 = 2;
    }


    VAR_11 = VAR_3.lane * VAR_2->lane_length +
                  VAR_3.slice * VAR_2->segment_length + VAR_12;

    if (0 == VAR_11 % VAR_2->lane_length) {

        VAR_10 = VAR_11 + VAR_2->lane_length - 1;
    } else {

        VAR_10 = VAR_11 - 1;
    }

    for (VAR_13 = VAR_12; VAR_13 < VAR_2->segment_length;
         ++VAR_13, ++VAR_11, ++VAR_10) {

        if (VAR_11 % VAR_2->lane_length == 1) {
            VAR_10 = VAR_11 - 1;
        }



        if (VAR_14) {
#pragma warning(push)
#pragma warning(disable : 6385)
 VAR_7 = VAR_6[VAR_13];
#pragma warning(pop)
 } else {
            VAR_7 = VAR_2->region->memory[VAR_10].v[0];
        }


        VAR_9 = ((VAR_7 >> 32)) % VAR_2->lanes;

        if ((VAR_3.pass == 0) && (VAR_3.slice == 0)) {

            VAR_9 = VAR_3.lane;
        }




        VAR_3.index = VAR_13;
        VAR_8 = FUNC_3(VAR_2, &VAR_3, VAR_7 & 0xFFFFFFFF,
                                VAR_9 == VAR_3.lane);


        VAR_4 = VAR_2->region->memory +
                    VAR_2->lane_length * VAR_9 + VAR_8;
        VAR_5 = VAR_2->region->memory + VAR_11;
        if (VAR_3.pass != 0) {
            FUNC_1(VAR_2->region->memory + VAR_10,
                                VAR_4, VAR_5);
        } else {
            FUNC_0(VAR_2->region->memory + VAR_10, VAR_4,
                       VAR_5);
        }
    }
}
