
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bit8 ;
typedef int bit32 ;


 int FUNC_0 (char*) ;

void
FUNC_1(bit8 *VAR_0)
{
    bit32 VAR_1;
    for(VAR_1=0;VAR_1<10;VAR_1++)
    {
        FUNC_0(("cdb[%d] 0x%x\n", VAR_1, VAR_0[VAR_1]));
    }
    return;
}
