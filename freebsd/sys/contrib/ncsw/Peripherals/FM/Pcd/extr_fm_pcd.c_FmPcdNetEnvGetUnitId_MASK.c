
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_12__ {TYPE_4__* netEnvs; } ;
typedef TYPE_5__ t_FmPcd ;
typedef scalar_t__ protocolOpt_t ;
typedef scalar_t__ e_NetHeaderType ;
struct TYPE_11__ {TYPE_3__* aliasHdrs; TYPE_2__* units; } ;
struct TYPE_10__ {scalar_t__ hdr; scalar_t__ opt; size_t aliasHdr; } ;
struct TYPE_9__ {TYPE_1__* hdrs; } ;
struct TYPE_8__ {scalar_t__ hdr; scalar_t__ opt; } ;


 int FUNC_0 (TYPE_5__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;

uint8_t FUNC_1(t_FmPcd *VAR_4, uint8_t VAR_5, e_NetHeaderType VAR_6, bool VAR_7, protocolOpt_t VAR_8)
{
    uint8_t VAR_9, VAR_10;

    FUNC_0(VAR_4);

    if (VAR_7)
    {
        for (VAR_9=0; (VAR_9 < VAR_1) &&
                 (VAR_4->netEnvs[VAR_5].units[VAR_9].hdrs[0].hdr != VAR_3); VAR_9++)
        {
            for (VAR_10=0; (VAR_10 < VAR_2) &&
                     (VAR_4->netEnvs[VAR_5].units[VAR_9].hdrs[VAR_10].hdr != VAR_3); VAR_10++)
            {
                if ((VAR_4->netEnvs[VAR_5].units[VAR_9].hdrs[VAR_10].hdr == VAR_6) &&
                    (VAR_4->netEnvs[VAR_5].units[VAR_9].hdrs[VAR_10].opt == VAR_8))

                return VAR_9;
            }
        }
    }
    else
    {
        for (VAR_9=0; (VAR_9 < VAR_1) &&
                 (VAR_4->netEnvs[VAR_5].units[VAR_9].hdrs[0].hdr != VAR_3); VAR_9++)
            if ((VAR_4->netEnvs[VAR_5].units[VAR_9].hdrs[0].hdr == VAR_6) &&
                (VAR_4->netEnvs[VAR_5].units[VAR_9].hdrs[0].opt == VAR_8) &&
                (VAR_4->netEnvs[VAR_5].units[VAR_9].hdrs[1].hdr == VAR_3))
                    return VAR_9;

        for (VAR_9=0; (VAR_9 < VAR_0) &&
                 (VAR_4->netEnvs[VAR_5].aliasHdrs[VAR_9].hdr != VAR_3); VAR_9++)
            if ((VAR_4->netEnvs[VAR_5].aliasHdrs[VAR_9].hdr == VAR_6) &&
                (VAR_4->netEnvs[VAR_5].aliasHdrs[VAR_9].opt == VAR_8))
                return VAR_4->netEnvs[VAR_5].aliasHdrs[VAR_9].aliasHdr;
    }

    return VAR_1;
}
