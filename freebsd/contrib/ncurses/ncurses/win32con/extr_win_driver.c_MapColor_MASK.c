
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;



__attribute__((used)) static WORD
FUNC_0(bool VAR_0, int VAR_1)
{
    static const int VAR_2[] =
    {0, 4, 2, 6, 1, 5, 3, 7};
    int VAR_3;
    if (VAR_1 < 0 || VAR_1 > 7)
 VAR_3 = VAR_0 ? 7 : 0;
    else
 VAR_3 = VAR_2[VAR_1];
    if (!VAR_0)
 VAR_3 = VAR_3 << 4;
    return (WORD) VAR_3;
}
