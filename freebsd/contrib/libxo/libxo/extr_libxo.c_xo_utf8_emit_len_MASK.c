
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int ssize_t ;



__attribute__((used)) static ssize_t
FUNC_0 (wchar_t VAR_0)
{
    ssize_t VAR_1;

    if ((VAR_0 & ((1 << 7) - 1)) == VAR_0)
 VAR_1 = 1;
    else if ((VAR_0 & ((1 << 11) - 1)) == VAR_0)
 VAR_1 = 2;
    else if ((VAR_0 & ((1 << 16) - 1)) == VAR_0)
 VAR_1 = 3;
    else if ((VAR_0 & ((1 << 21) - 1)) == VAR_0)
 VAR_1 = 4;
    else
 VAR_1 = -1;

    return VAR_1;
}
