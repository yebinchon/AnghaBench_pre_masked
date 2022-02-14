
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ptr ;
typedef scalar_t__ U16 ;
struct TYPE_4__ {int fastMode; scalar_t__ tableLog; } ;
struct TYPE_3__ {void* nbBits; void* symbol; scalar_t__ newState; } ;
typedef TYPE_1__ FSE_decode_t ;
typedef TYPE_2__ FSE_DTableHeader ;
typedef int FSE_DTable ;
typedef void* BYTE ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_1 (FSE_DTable* VAR_1, unsigned VAR_2)
{
    void* VAR_3 = VAR_1;
    FSE_DTableHeader* const VAR_4 = (FSE_DTableHeader*)VAR_3;
    FSE_decode_t* const VAR_5 = (FSE_decode_t*)(VAR_3) + 1;
    const unsigned VAR_6 = 1 << VAR_2;
    const unsigned VAR_7 = VAR_6 - 1;
    const unsigned VAR_8 = VAR_7;
    unsigned VAR_9;


    if (VAR_2 < 1) return FUNC_0(VAR_0);


    VAR_4->tableLog = (U16)VAR_2;
    VAR_4->fastMode = 1;
    for (VAR_9=0; VAR_9<=VAR_8; VAR_9++)
    {
        VAR_5[VAR_9].newState = 0;
        VAR_5[VAR_9].symbol = (BYTE)VAR_9;
        VAR_5[VAR_9].nbBits = (BYTE)VAR_2;
    }

    return 0;
}
