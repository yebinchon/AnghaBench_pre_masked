
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_11__ {int extBufOffset; int privDataSize; int prsResultOffset; int timeStampOffset; int hashResultOffset; int pcdInfoOffset; int size; int intContextOffset; int startMargins; int manipExtraSpace; int manipOffset; int dataAlign; int dataOffset; scalar_t__ passPrsResult; scalar_t__ passHashResult; scalar_t__ passTimeStamp; scalar_t__ passAllOtherPCDInfo; } ;
typedef TYPE_1__ t_FmSpIntContextDataCopy ;
typedef TYPE_1__ t_FmSpBufferOffsets ;
typedef TYPE_1__ t_FmSpBufMargins ;
typedef int t_FmPrsResult ;
typedef TYPE_1__ t_FmBufferPrefixContent ;
typedef int t_Error ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

t_Error FUNC_3(t_FmSpIntContextDataCopy *VAR_6,
                                 t_FmBufferPrefixContent *VAR_7,
                                 t_FmSpBufMargins *VAR_8,
                                 t_FmSpBufferOffsets *VAR_9,
                                 uint8_t *VAR_10)
{
    uint32_t VAR_11;

    FUNC_2(VAR_6, VAR_1);
    FUNC_0(VAR_6);
    FUNC_0(VAR_7);
    FUNC_0(VAR_8);
    FUNC_0(VAR_9);


    VAR_6->extBufOffset =
        (uint16_t)((VAR_7->privDataSize & (VAR_5-1)) ?
            ((VAR_7->privDataSize + VAR_5) & ~(uint16_t)(VAR_5-1)) :
             VAR_7->privDataSize);



    VAR_9->prsResultOffset = (uint32_t)VAR_3;
    VAR_9->timeStampOffset = (uint32_t)VAR_3;
    VAR_9->hashResultOffset= (uint32_t)VAR_3;
    VAR_9->pcdInfoOffset = (uint32_t)VAR_3;







    if (VAR_7->passAllOtherPCDInfo)
    {
        VAR_6->size = 128;

        VAR_6->intContextOffset = 16;

        if (VAR_7->passAllOtherPCDInfo)
            VAR_9->pcdInfoOffset = VAR_6->extBufOffset;
        if (VAR_7->passPrsResult)
            VAR_9->prsResultOffset =
                (uint32_t)(VAR_6->extBufOffset + 16);
        if (VAR_7->passTimeStamp)
            VAR_9->timeStampOffset =
                (uint32_t)(VAR_6->extBufOffset + 48);
        if (VAR_7->passHashResult)
            VAR_9->hashResultOffset =
                (uint32_t)(VAR_6->extBufOffset + 56);
    }
    else
    {


        VAR_6->size =
            (uint16_t)((VAR_7->passPrsResult ? 32 : 0) +
                      ((VAR_7->passTimeStamp ||
                      VAR_7->passHashResult) ? 16 : 0));


        VAR_6->intContextOffset =
            (uint8_t)(VAR_7->passPrsResult ? 32 :
                      ((VAR_7->passTimeStamp ||
                       VAR_7->passHashResult) ? 64 : 0));

        if (VAR_7->passPrsResult)
            VAR_9->prsResultOffset = VAR_6->extBufOffset;
        if (VAR_7->passTimeStamp)
            VAR_9->timeStampOffset = VAR_7->passPrsResult ?
                                        (VAR_6->extBufOffset + sizeof(t_FmPrsResult)) :
                                        VAR_6->extBufOffset;
        if (VAR_7->passHashResult)

            VAR_9->hashResultOffset = VAR_7->passPrsResult ?
                                          (VAR_6->extBufOffset + sizeof(t_FmPrsResult) + 8) :
                                          VAR_6->extBufOffset + 8;
    }

    if (VAR_6->size)
        VAR_8->startMargins =
            (uint16_t)(VAR_6->extBufOffset +
                       VAR_6->size);
    else

        VAR_8->startMargins = VAR_7->privDataSize;


    if (VAR_7->manipExtraSpace)
    {
        uint8_t VAR_12;







        VAR_12 = VAR_7->manipExtraSpace;

        VAR_9->manipOffset = VAR_8->startMargins;
        VAR_8->startMargins += VAR_12;
        *VAR_10 = VAR_12;
    }


    VAR_11 = (uint32_t)(VAR_8->startMargins % VAR_7->dataAlign);
    if (VAR_11)
        VAR_8->startMargins += (VAR_7->dataAlign-VAR_11);
    VAR_9->dataOffset = VAR_8->startMargins;

    return VAR_2;
}
