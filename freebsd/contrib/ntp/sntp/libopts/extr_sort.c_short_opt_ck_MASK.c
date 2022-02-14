
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int tSuccess ;
struct TYPE_9__ {char** origArgVect; size_t curOptIdx; size_t origArgCt; } ;
typedef TYPE_2__ tOptions ;
struct TYPE_10__ {TYPE_1__* pOD; } ;
typedef TYPE_3__ tOptState ;
struct TYPE_8__ {int fOptState; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 char VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ,TYPE_3__*) ;

__attribute__((used)) static tSuccess
FUNC_3(tOptions * VAR_5, char * VAR_6, tOptState * VAR_7,
             char ** VAR_8, uint32_t * VAR_9)
{
    while (*VAR_6 != VAR_1) {
        if (FUNC_0(FUNC_2(VAR_5, (uint8_t)*VAR_6, VAR_7)))
            return VAR_0;




        if (FUNC_1(VAR_7->pOD->fOptState) == VAR_2) {
            VAR_6++;

        } else if (VAR_7->pOD->fOptState & VAR_3) {




            if (VAR_6[1] != VAR_1)
                return VAR_4;

            VAR_6 = VAR_5->origArgVect[ VAR_5->curOptIdx ];
            if (*VAR_6 != '-')
                VAR_8[ (*VAR_9)++ ] =
                    VAR_5->origArgVect[ (VAR_5->curOptIdx)++ ];
            return VAR_4;

        } else {




            if (VAR_6[1] == VAR_1) {
                if (VAR_5->curOptIdx >= VAR_5->origArgCt)
                    return VAR_0;
                VAR_8[ (*VAR_9)++ ] =
                    VAR_5->origArgVect[ (VAR_5->curOptIdx)++ ];
            }
            return VAR_4;
        }
    }
    return VAR_4;
}
