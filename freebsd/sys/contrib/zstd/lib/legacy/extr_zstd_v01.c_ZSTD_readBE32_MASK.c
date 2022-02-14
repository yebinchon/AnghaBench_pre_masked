
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef scalar_t__ BYTE ;



__attribute__((used)) static U32 FUNC_0(const void* VAR_0)
{
    const BYTE* VAR_1 = (const BYTE*)VAR_0;
    return (U32)(((U32)VAR_1[0]<<24) + ((U32)VAR_1[1]<<16) + ((U32)VAR_1[2]<<8) + ((U32)VAR_1[3]<<0));
}
