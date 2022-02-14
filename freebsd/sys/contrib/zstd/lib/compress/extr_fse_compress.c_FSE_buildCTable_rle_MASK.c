
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int U32 ;
typedef scalar_t__ U16 ;
struct TYPE_2__ {scalar_t__ deltaFindState; scalar_t__ deltaNbBits; } ;
typedef TYPE_1__ FSE_symbolCompressionTransform ;
typedef int FSE_CTable ;
typedef size_t BYTE ;



size_t FUNC_0 (FSE_CTable* VAR_0, BYTE VAR_1)
{
    void* VAR_2 = VAR_0;
    U16* VAR_3 = ( (U16*) VAR_2) + 2;
    void* VAR_4 = (U32*)VAR_2 + 2;
    FSE_symbolCompressionTransform* VAR_5 = (FSE_symbolCompressionTransform*) VAR_4;


    VAR_3[-2] = (U16) 0;
    VAR_3[-1] = (U16) VAR_1;


    VAR_3[0] = 0;
    VAR_3[1] = 0;


    VAR_5[VAR_1].deltaNbBits = 0;
    VAR_5[VAR_1].deltaFindState = 0;

    return 0;
}
