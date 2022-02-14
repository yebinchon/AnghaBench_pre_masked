
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_25__ {int nextAdIdx; int cfg; int opCode; int hmcdBasePtr; } ;
typedef TYPE_3__ t_Hmtd ;
struct TYPE_23__ {scalar_t__ dontParseAfterManip; } ;
struct TYPE_24__ {TYPE_1__ hdr; } ;
struct TYPE_26__ {TYPE_5__* h_NextManip; TYPE_2__ u; } ;
typedef TYPE_4__ t_FmPcdManipParams ;
struct TYPE_27__ {scalar_t__ nextManipType; int tableSize; int dataSize; scalar_t__ unifiedPosition; int * h_Ad; scalar_t__ h_FmPcd; scalar_t__ muramAllocate; int * p_Hmct; void* cascaded; scalar_t__ dontParseAfterManip; int * p_Data; struct TYPE_27__* h_PrevManip; TYPE_4__ manipParams; struct TYPE_27__* h_NextManip; } ;
typedef TYPE_5__ t_FmPcdManip ;
struct TYPE_28__ {scalar_t__ h_FmMuram; scalar_t__ physicalMuramBase; } ;
typedef TYPE_6__ t_FmPcd ;
typedef scalar_t__ t_Error ;


 scalar_t__ FUNC_0 (TYPE_5__*,TYPE_4__*,int *,int *,void*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int*,int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (scalar_t__,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__,int,int) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (TYPE_5__*) ;
 int * FUNC_9 (TYPE_5__*) ;
 scalar_t__ FUNC_10 (TYPE_5__*) ;
 scalar_t__ FUNC_11 (TYPE_5__*) ;
 scalar_t__ FUNC_12 (TYPE_5__*) ;
 scalar_t__ FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*,int *) ;
 int FUNC_15 (TYPE_5__*,int *) ;
 int VAR_9 ;
 char* VAR_10 ;
 scalar_t__ FUNC_16 (int *,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,scalar_t__,char*) ;
 void* VAR_11 ;
 int FUNC_19 (int,int) ;
 int FUNC_20 (int ,int) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int *) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static t_Error FUNC_24(t_FmPcdManip *VAR_15,
                                    t_FmPcdManipParams *VAR_16)
{
    t_FmPcdManip *VAR_17;
    t_Error VAR_18;
    uint32_t VAR_19 = 0, VAR_20;
    uint16_t VAR_21;
    uint8_t *VAR_22, *VAR_23, *VAR_24;



    VAR_15->dontParseAfterManip =
            VAR_16->u.hdr.dontParseAfterManip;

    if (VAR_16->h_NextManip)
    {
        VAR_15->nextManipType = FUNC_11(VAR_16->h_NextManip);

        if ((VAR_15->nextManipType == VAR_12) && VAR_15->dontParseAfterManip)
            VAR_19 = (uint32_t)(FUNC_6(VAR_16->h_NextManip)
                    + FUNC_5(VAR_16->h_NextManip));
        else
            VAR_15->cascaded = VAR_11;


        if (FUNC_12(VAR_16->h_NextManip))
            VAR_15->cascaded = VAR_11;
    }



    VAR_18 = FUNC_1(VAR_16, &VAR_15->tableSize,
                             &VAR_15->dataSize);
    if (VAR_18)
        FUNC_18(VAR_9, VAR_18, VAR_10);

    VAR_20 = (uint16_t)(VAR_15->tableSize + VAR_15->dataSize + VAR_19);

    VAR_15->p_Hmct = (uint8_t*)FUNC_2(
            ((t_FmPcd *)VAR_15->h_FmPcd)->h_FmMuram, VAR_20, 4);
    if (!VAR_15->p_Hmct)
        FUNC_18(VAR_8, VAR_0, ("MURAM alloc failed"));

    if (VAR_15->dataSize)
        VAR_15->p_Data =
                (uint8_t*)FUNC_16(VAR_15->p_Hmct, (VAR_15->tableSize + VAR_19));
    VAR_18 = FUNC_4(VAR_15->h_FmPcd, (uint32_t)(VAR_20 + 16),
                              (uint16_t)VAR_3);
    if (VAR_18 != VAR_1)
    {
        FUNC_3(VAR_15->h_FmPcd, VAR_15->p_Hmct);
        FUNC_18(VAR_8, VAR_0,
                     ("MURAM allocation for HdrManip node shadow"));
    }

    if (VAR_16->h_NextManip
            && (VAR_15->nextManipType == VAR_12)
            && (FUNC_8(VAR_15)))
    {
        VAR_22 = (uint8_t *)FUNC_7(VAR_16->h_NextManip,
                                            VAR_13);
        VAR_17 = VAR_16->h_NextManip;

        while (FUNC_13(VAR_17))
            VAR_17 = VAR_17->h_NextManip;

        while (VAR_17)
        {



            VAR_23 = (uint8_t*)FUNC_16(VAR_15->p_Hmct,
                    (VAR_15->tableSize +
                            (FUNC_17(VAR_17->p_Hmct) -
                                    FUNC_17(VAR_22))));
            if (VAR_17->p_Data)
                VAR_24 = (uint8_t*)FUNC_16(VAR_15->p_Hmct,
                        (VAR_15->tableSize +
                                (FUNC_17(VAR_17->p_Data) -
                                        FUNC_17(VAR_22))));
            else
                VAR_24 = ((void*)0);

            FUNC_0(VAR_17, &VAR_17->manipParams, VAR_23,
                      VAR_24, VAR_2);

            FUNC_15(VAR_17, VAR_23);
            FUNC_14(VAR_17, VAR_24);

            VAR_17 = VAR_17->h_PrevManip;
        }

        FUNC_3(FUNC_10(VAR_16->h_NextManip),
                         VAR_22);
    }


    VAR_18 = FUNC_0(VAR_15, VAR_16, VAR_15->p_Hmct,
                    VAR_15->p_Data, VAR_11);
    if (VAR_18)
    {
        FUNC_3(VAR_15->h_FmPcd, VAR_15->p_Hmct);
        FUNC_18(VAR_9, VAR_18, VAR_10);
    }


     VAR_21 = VAR_7;


      if (!VAR_15->dontParseAfterManip)
          VAR_21 |= VAR_6;




    if (VAR_15->cascaded)
    {
        uint16_t VAR_25;

        VAR_21 |= VAR_5;




        if (VAR_15->unifiedPosition != VAR_14)
            VAR_25 = (uint16_t)((uint32_t)(FUNC_23(FUNC_9(VAR_16->h_NextManip)) - (((t_FmPcd*)VAR_15->h_FmPcd)->physicalMuramBase)) >> 4);
        else
            VAR_25 = ((t_Hmtd *)((t_FmPcdManip *)VAR_16->h_NextManip)->h_Ad)->nextAdIdx;

        FUNC_19(((t_Hmtd *)VAR_15->h_Ad)->nextAdIdx, VAR_25);
    }

    FUNC_19(((t_Hmtd *)VAR_15->h_Ad)->cfg, VAR_21);
    FUNC_20(
            ((t_Hmtd *)VAR_15->h_Ad)->hmcdBasePtr,
            (uint32_t)(FUNC_23(VAR_15->p_Hmct) - (((t_FmPcd*)VAR_15->h_FmPcd)->physicalMuramBase)));

    FUNC_21(((t_Hmtd *)VAR_15->h_Ad)->opCode, VAR_4);

    if (VAR_15->unifiedPosition == VAR_14)
    {

        if (((t_FmPcdManip *)VAR_16->h_NextManip)->muramAllocate)
            FUNC_3(
                    ((t_FmPcd *)((t_FmPcdManip *)VAR_16->h_NextManip)->h_FmPcd)->h_FmMuram,
                    ((t_FmPcdManip *)VAR_16->h_NextManip)->h_Ad);
        else
            FUNC_22(((t_FmPcdManip *)VAR_16->h_NextManip)->h_Ad);
        ((t_FmPcdManip *)VAR_16->h_NextManip)->h_Ad = ((void*)0);
    }

    return VAR_1;
}
