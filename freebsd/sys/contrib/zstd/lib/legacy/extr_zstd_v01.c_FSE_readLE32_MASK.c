
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef scalar_t__ BYTE ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (void const*) ;

__attribute__((used)) static U32 FUNC_2(const void* VAR_0)
{
    if (FUNC_0())
        return FUNC_1(VAR_0);
    else
    {
        const BYTE* VAR_1 = (const BYTE*)VAR_0;
        return (U32)((U32)VAR_1[0] + ((U32)VAR_1[1]<<8) + ((U32)VAR_1[2]<<16) + ((U32)VAR_1[3]<<24));
    }
}
