
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_1__ frame_t ;
typedef int dictInfo ;
typedef int U32 ;
typedef int BYTE ;


 int FUNC_0 (int,char*,...) ;
 size_t FUNC_1 (int *,TYPE_1__*,size_t) ;
 size_t FUNC_2 (int *,TYPE_1__*,size_t,size_t,int ) ;

__attribute__((used)) static size_t FUNC_3(U32* VAR_0, frame_t* VAR_1, size_t VAR_2, dictInfo VAR_3)
{
    BYTE* const VAR_4 = (BYTE*)VAR_1->data;
    size_t VAR_5;
    size_t VAR_6;

    FUNC_0(4, "  compressed block:\n");

    VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);

    FUNC_0(4, "   literals size: %u\n", (unsigned)VAR_5);

    VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_5, VAR_3);

    FUNC_0(4, "   number of sequences: %u\n", (unsigned)VAR_6);

    return (BYTE*)VAR_1->data - VAR_4;
}
