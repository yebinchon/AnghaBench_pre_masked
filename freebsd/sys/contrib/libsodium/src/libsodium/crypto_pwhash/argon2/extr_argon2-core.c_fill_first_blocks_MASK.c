
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int lanes; int lane_length; TYPE_1__* region; } ;
typedef TYPE_2__ argon2_instance_t ;
struct TYPE_4__ {int * memory; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int) ;

void
FUNC_4(uint8_t *VAR_3, const argon2_instance_t *VAR_4)
{
    uint32_t VAR_5;


    uint8_t VAR_6[VAR_0];
    for (VAR_5 = 0; VAR_5 < VAR_4->lanes; ++VAR_5) {
        FUNC_0(VAR_3 + VAR_1, 0);
        FUNC_0(VAR_3 + VAR_1 + 4, VAR_5);
        FUNC_1(VAR_6, VAR_0, VAR_3,
                     VAR_2);
        FUNC_2(&VAR_4->region->memory[VAR_5 * VAR_4->lane_length + 0],
                   VAR_6);

        FUNC_0(VAR_3 + VAR_1, 1);
        FUNC_1(VAR_6, VAR_0, VAR_3,
                     VAR_2);
        FUNC_2(&VAR_4->region->memory[VAR_5 * VAR_4->lane_length + 1],
                   VAR_6);
    }
    FUNC_3(VAR_6, VAR_0);
}
