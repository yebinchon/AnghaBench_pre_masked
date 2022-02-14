
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;


 int FUNC_0 (int*) ;

__attribute__((used)) static U32 FUNC_1(U32* VAR_0)
{
    if (FUNC_0(VAR_0) & 7) return (FUNC_0(VAR_0) & 0xF);
    return (FUNC_0(VAR_0) & 0x1FF) + 0xF;
}
