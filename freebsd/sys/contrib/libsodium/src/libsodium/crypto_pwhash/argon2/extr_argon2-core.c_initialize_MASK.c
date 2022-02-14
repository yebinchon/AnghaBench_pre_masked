
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_8__ {int segment_length; int type; int memory_blocks; int region; int * pseudo_rands; } ;
typedef TYPE_1__ argon2_instance_t ;
struct TYPE_9__ {int flags; } ;
typedef TYPE_2__ argon2_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,int) ;

int
FUNC_6(argon2_instance_t *VAR_5, argon2_context *VAR_6)
{
    uint8_t VAR_7[VAR_4];
    int VAR_8 = VAR_2;

    if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) {
        return VAR_0;
    }



    if ((VAR_5->pseudo_rands = (uint64_t *)
         FUNC_4(sizeof(uint64_t) * VAR_5->segment_length)) == ((void*)0)) {
        return VAR_1;
    }

    VAR_8 = FUNC_0(&(VAR_5->region), VAR_5->memory_blocks);
    if (VAR_2 != VAR_8) {
        FUNC_2(VAR_5, VAR_6->flags);
        return VAR_8;
    }





    FUNC_3(VAR_7, VAR_6, VAR_5->type);

    FUNC_5(VAR_7 + VAR_3,
                   VAR_4 - VAR_3);



    FUNC_1(VAR_7, VAR_5);

    FUNC_5(VAR_7, VAR_4);

    return VAR_2;
}
