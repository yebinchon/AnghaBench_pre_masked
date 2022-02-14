
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_10__ {TYPE_3__* netEnvs; } ;
typedef TYPE_4__ t_FmPcd ;
typedef int t_Error ;
typedef scalar_t__ protocolOpt_t ;
struct TYPE_9__ {int * unitsVectors; TYPE_2__* units; } ;
struct TYPE_8__ {TYPE_1__* hdrs; } ;
struct TYPE_7__ {scalar_t__ hdr; scalar_t__ opt; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,char*) ;

t_Error FUNC_2(t_FmPcd *VAR_6, uint8_t VAR_7, protocolOpt_t VAR_8, uint32_t *VAR_9)
{
    uint8_t VAR_10,VAR_11;

    *VAR_9 = 0;

    FUNC_0(VAR_6);
    for (VAR_10=0; ((VAR_10 < VAR_2) &&
              (VAR_6->netEnvs[VAR_7].units[VAR_10].hdrs[0].hdr != VAR_4)); VAR_10++)
    {
        for (VAR_11=0; ((VAR_11 < VAR_3) &&
                  (VAR_6->netEnvs[VAR_7].units[VAR_10].hdrs[VAR_11].hdr != VAR_4)); VAR_11++)
        {
            if (VAR_6->netEnvs[VAR_7].units[VAR_10].hdrs[VAR_11].opt == VAR_8)
                *VAR_9 |= VAR_6->netEnvs[VAR_7].unitsVectors[VAR_10];
        }
    }

    if (!*VAR_9)
        FUNC_1(VAR_5, VAR_0, ("Requested option was not defined for this Network Environment Characteristics module"));
    else
        return VAR_1;
}
