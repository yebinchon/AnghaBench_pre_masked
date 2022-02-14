
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WORD ;
typedef int LONG ;


 int FUNC_0 (int const) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
    WORD VAR_2 = (FUNC_0((*((const LONG *) VAR_0)))) & 0x7fff;
    WORD VAR_3 = (FUNC_0((*((const LONG *) VAR_1)))) & 0x7fff;

    return ((VAR_2 < VAR_3) ? -1 : ((VAR_2 == VAR_3) ? 0 : 1));
}
