
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ U32 ;


 scalar_t__ const FUNC_0 (scalar_t__*) ;

__attribute__((used)) static U32 FUNC_1(U32* VAR_0, U32 VAR_1, U32 VAR_2)
{
    U32 const VAR_3 = VAR_2 < VAR_1 ? 1 : (VAR_2 + 1) - VAR_1;
    return (U32)((FUNC_0(VAR_0) % VAR_3) + VAR_1);
}
