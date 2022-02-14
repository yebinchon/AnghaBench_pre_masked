
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* nestVal; } ;
struct TYPE_8__ {scalar_t__ valType; TYPE_1__ v; } ;
typedef TYPE_2__ tOptionValue ;
struct TYPE_9__ {int useCt; int apzArgs; } ;
typedef TYPE_3__ tArgList ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void** FUNC_0 (int ) ;
 int VAR_3 ;

tOptionValue const *
FUNC_1(tOptionValue const * VAR_4,tOptionValue const * VAR_5 )
{
    tArgList * VAR_6;
    const tOptionValue * VAR_7 = ((void*)0);
    int VAR_8 = VAR_0;

    if ((VAR_4 == ((void*)0)) || (VAR_4->valType != VAR_2)) {
        VAR_3 = VAR_0;
        return ((void*)0);
    }
    VAR_6 = VAR_4->v.nestVal;
    {
        int VAR_9 = VAR_6->useCt;
        const void ** VAR_10 = FUNC_0(VAR_6->apzArgs);

        while (VAR_9-- > 0) {
            const tOptionValue * VAR_11 = *(VAR_10++);
            if (VAR_11 == VAR_5) {
                if (VAR_9 == 0) {
                    VAR_8 = VAR_1;

                } else {
                    VAR_8 = 0;
                    VAR_7 = (const tOptionValue *)*VAR_10;
                }
                break;
            }
        }
    }
    if (VAR_8 != 0)
        VAR_3 = VAR_8;
    return VAR_7;
}
