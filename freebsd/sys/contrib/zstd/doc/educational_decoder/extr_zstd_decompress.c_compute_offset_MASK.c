
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int offset; scalar_t__ literal_length; } ;
typedef TYPE_1__ sequence_command_t ;



__attribute__((used)) static size_t FUNC_0(sequence_command_t VAR_0, u64 *const VAR_1) {
    size_t VAR_2;

    if (VAR_0.offset <= 3) {






        u32 VAR_3 = VAR_0.offset - 1;
        if (VAR_0.literal_length == 0) {





            VAR_3++;
        }

        if (VAR_3 == 0) {
            VAR_2 = VAR_1[0];
        } else {


            VAR_2 = VAR_3 < 3 ? VAR_1[VAR_3] : VAR_1[0] - 1;



            if (VAR_3 > 1) {
                VAR_1[2] = VAR_1[1];
            }
            VAR_1[1] = VAR_1[0];
            VAR_1[0] = VAR_2;
        }
    } else {


        VAR_2 = VAR_0.offset - 3;


        VAR_1[2] = VAR_1[1];
        VAR_1[1] = VAR_1[0];
        VAR_1[0] = VAR_2;
    }
    return VAR_2;
}
