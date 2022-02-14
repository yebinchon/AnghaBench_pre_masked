
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; scalar_t__ srcStart; scalar_t__ src; } ;
typedef TYPE_1__ frame_t ;
typedef scalar_t__ U64 ;
typedef int U32 ;
typedef int BYTE ;


 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int,int ) ;

__attribute__((used)) static void FUNC_3(frame_t* VAR_0)
{

    U64 VAR_1 = FUNC_2(VAR_0->srcStart, (BYTE*)VAR_0->src-(BYTE*)VAR_0->srcStart, 0);
    FUNC_0(3, "  checksum: %08x\n", (unsigned)VAR_1);
    FUNC_1(VAR_0->data, (U32)VAR_1);
    VAR_0->data = (BYTE*)VAR_0->data + 4;
}
