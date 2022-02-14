
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_14__ {scalar_t__ dontParseAfterManip; } ;
struct TYPE_15__ {TYPE_1__ hdr; } ;
struct TYPE_16__ {TYPE_2__ u; scalar_t__ h_NextManip; } ;
typedef TYPE_3__ t_FmPcdManipParams ;
struct TYPE_17__ {scalar_t__ tableSize; scalar_t__ dataSize; scalar_t__ dontParseAfterManip; scalar_t__* p_Data; scalar_t__* p_Hmct; struct TYPE_17__* h_PrevManip; TYPE_3__ manipParams; struct TYPE_17__* h_NextManip; scalar_t__ h_FmPcd; } ;
typedef TYPE_4__ t_FmPcdManip ;
struct TYPE_18__ {scalar_t__* p_CcShadow; } ;
typedef TYPE_5__ t_FmPcd ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,scalar_t__*,scalar_t__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_6 (scalar_t__*,int) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (int ,scalar_t__,char*) ;
 int VAR_5 ;

__attribute__((used)) static t_Error FUNC_9(t_FmPcdManip *VAR_6,
                                       t_FmPcdManipParams *VAR_7)
{
    uint8_t *VAR_8, *VAR_9, VAR_10, *VAR_11 = ((void*)0);
    uint16_t VAR_12;
    t_FmPcd *VAR_13 = (t_FmPcd *)VAR_6->h_FmPcd;
    t_Error VAR_14;
    t_FmPcdManip *VAR_15 = VAR_6;

    VAR_14 = FUNC_2(VAR_7, &VAR_12, &VAR_10);
    if (VAR_14)
        FUNC_8(VAR_3, VAR_14, VAR_4);


    if (VAR_12 > VAR_6->tableSize)
        FUNC_8(
                VAR_3,
                VAR_0,
                ("New Hdr Manip configuration requires larger size than current one (command table)."));
    if (VAR_10 > VAR_6->dataSize)
        FUNC_8(
                VAR_3,
                VAR_0,
                ("New Hdr Manip configuration requires larger size than current one (data)."));
    if (VAR_7->h_NextManip)
        FUNC_8(
                VAR_3, VAR_0,
                ("New Hdr Manip configuration can not contain h_NextManip."));
    if (FUNC_4(VAR_6) && (VAR_12 != VAR_6->tableSize))
        FUNC_8(
                VAR_3,
                VAR_0,
                ("New Hdr Manip configuration in a chained manipulation requires different size than current one."));
    if (VAR_6->dontParseAfterManip
            != VAR_7->u.hdr.dontParseAfterManip)
        FUNC_8(
                VAR_3,
                VAR_0,
                ("New Hdr Manip configuration differs in dontParseAfterManip value."));

    VAR_6->tableSize = VAR_12;
    VAR_6->dataSize = VAR_10;


    if (!FUNC_4(VAR_6))
    {
        VAR_9 = (uint8_t*)FUNC_6(VAR_13->p_CcShadow, 16);
        if (VAR_6->p_Data)
            VAR_11 =
                    (uint8_t*)FUNC_6(VAR_9,
                            (FUNC_7(VAR_6->p_Data) - FUNC_7(VAR_6->p_Hmct)));

        FUNC_1(VAR_6, VAR_7, VAR_9, VAR_6->p_Data,
                  VAR_2);
    }
    else
    {
        VAR_8 = (uint8_t *)FUNC_3(VAR_6, VAR_5);
        FUNC_0(VAR_8);


        while (FUNC_5(VAR_15))
            VAR_15 = VAR_15->h_NextManip;

        while (VAR_15)
        {





            VAR_9 =
                    (uint8_t*)FUNC_6(VAR_13->p_CcShadow,
                            (16 + FUNC_7(VAR_15->p_Hmct) - FUNC_7(VAR_8)));
            if (VAR_15->p_Data)
                VAR_11 =
                        (uint8_t*)FUNC_6(VAR_13->p_CcShadow,
                                (16 + FUNC_7(VAR_15->p_Data) - FUNC_7(VAR_8)));

            FUNC_1(VAR_15, &VAR_15->manipParams, VAR_9,
                      VAR_11, VAR_2);
            VAR_15 = VAR_15->h_PrevManip;
        }
    }

    return VAR_1;
}
