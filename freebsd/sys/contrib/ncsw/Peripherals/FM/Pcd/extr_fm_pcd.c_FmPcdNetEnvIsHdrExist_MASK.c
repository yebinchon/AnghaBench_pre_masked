
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_11__ {TYPE_4__* netEnvs; } ;
typedef TYPE_5__ t_FmPcd ;
typedef scalar_t__ e_NetHeaderType ;
struct TYPE_10__ {TYPE_3__* aliasHdrs; TYPE_2__* units; } ;
struct TYPE_9__ {scalar_t__ hdr; } ;
struct TYPE_8__ {TYPE_1__* hdrs; } ;
struct TYPE_7__ {scalar_t__ hdr; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

bool FUNC_1(t_Handle VAR_6, uint8_t VAR_7, e_NetHeaderType VAR_8)
{
    t_FmPcd *VAR_9 = (t_FmPcd*)VAR_6;
    int VAR_10, VAR_11;

    FUNC_0(VAR_9);

    for (VAR_10=0; ((VAR_10 < VAR_2) &&
              (VAR_9->netEnvs[VAR_7].units[VAR_10].hdrs[0].hdr != VAR_4)); VAR_10++)
    {
        for (VAR_11=0; ((VAR_11 < VAR_3) &&
                  (VAR_9->netEnvs[VAR_7].units[VAR_10].hdrs[VAR_11].hdr != VAR_4)); VAR_11++)
            if (VAR_9->netEnvs[VAR_7].units[VAR_10].hdrs[VAR_11].hdr == VAR_8)
                return VAR_5;
    }
    for (VAR_10=0; ((VAR_10 < VAR_1) &&
              (VAR_9->netEnvs[VAR_7].aliasHdrs[VAR_10].hdr != VAR_4)); VAR_10++)
    {
        if (VAR_9->netEnvs[VAR_7].aliasHdrs[VAR_10].hdr == VAR_8)
            return VAR_5;
    }

    return VAR_0;
}
