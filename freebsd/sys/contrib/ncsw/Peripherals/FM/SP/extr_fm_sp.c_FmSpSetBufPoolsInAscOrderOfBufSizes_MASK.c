
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_5__ {int numOfPoolsUsed; TYPE_1__* extBufPool; } ;
typedef TYPE_2__ t_FmExtPools ;
struct TYPE_4__ {scalar_t__ size; size_t id; } ;



void FUNC_0(t_FmExtPools *VAR_0,
                                         uint8_t *VAR_1,
                                         uint16_t *VAR_2)
{
    uint16_t VAR_3 = 0;
    int VAR_4=0, VAR_5=0, VAR_6=0;


    for (VAR_4=0;VAR_4<VAR_0->numOfPoolsUsed;VAR_4++)
    {

        VAR_3 = VAR_0->extBufPool[VAR_4].size;


        VAR_2[VAR_0->extBufPool[VAR_4].id] = VAR_3;


        for (VAR_5=0;VAR_5<=VAR_4;VAR_5++)
        {

            if (VAR_5==VAR_4)
                VAR_1[VAR_4] = VAR_0->extBufPool[VAR_4].id;
            else
            {

                if (VAR_3 < VAR_2[VAR_1[VAR_5]])
                {

                    for (VAR_6=VAR_4;VAR_6>VAR_5;VAR_6--)
                       VAR_1[VAR_6] = VAR_1[VAR_6-1];


                    VAR_1[VAR_6] = VAR_0->extBufPool[VAR_4].id;
                    break;
                }
            }
        }
    }
}
