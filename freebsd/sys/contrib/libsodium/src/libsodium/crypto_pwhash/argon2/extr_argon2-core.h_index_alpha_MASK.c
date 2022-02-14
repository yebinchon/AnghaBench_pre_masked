
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ pass; int slice; int index; } ;
typedef TYPE_1__ argon2_position_t ;
struct TYPE_6__ {int segment_length; int lane_length; } ;
typedef TYPE_2__ argon2_instance_t ;


 int VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(const argon2_instance_t *VAR_1,
                            const argon2_position_t *VAR_2, uint32_t VAR_3,
                            int VAR_4)
{
    uint32_t VAR_5;
    uint64_t VAR_6;
    uint32_t VAR_7, VAR_8;

    if (VAR_2->pass == 0) {

        if (VAR_2->slice == 0) {

            VAR_5 =
                VAR_2->index - 1;
        } else {
            if (VAR_4) {

                VAR_5 =
                    VAR_2->slice * VAR_1->segment_length +
                    VAR_2->index - 1;
            } else {
                VAR_5 =
                    VAR_2->slice * VAR_1->segment_length +
                    ((VAR_2->index == 0) ? (-1) : 0);
            }
        }
    } else {

        if (VAR_4) {
            VAR_5 = VAR_1->lane_length -
                                  VAR_1->segment_length + VAR_2->index -
                                  1;
        } else {
            VAR_5 = VAR_1->lane_length -
                                  VAR_1->segment_length +
                                  ((VAR_2->index == 0) ? (-1) : 0);
        }
    }



    VAR_6 = VAR_3;
    VAR_6 = VAR_6 * VAR_6 >> 32;
    VAR_6 = VAR_5 - 1 -
                        (VAR_5 * VAR_6 >> 32);


    VAR_7 = 0;

    if (VAR_2->pass != 0) {
        VAR_7 = (VAR_2->slice == VAR_0 - 1)
                             ? 0
                             : (VAR_2->slice + 1) * VAR_1->segment_length;
    }


    VAR_8 = (VAR_7 + VAR_6) %
                        VAR_1->lane_length;
    return VAR_8;
}
