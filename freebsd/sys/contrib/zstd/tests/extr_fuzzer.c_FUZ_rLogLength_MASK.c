
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t U32 ;


 size_t const FUNC_0 (size_t*) ;

__attribute__((used)) static size_t FUNC_1(U32* VAR_0, U32 VAR_1)
{
    size_t const VAR_2 = ((size_t)1 << VAR_1) - 1;
    return (VAR_2+1) + (FUNC_0(VAR_0) & VAR_2);
}
