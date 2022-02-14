
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int ssize_t ;


 char* VAR_0 ;
 char* VAR_1 ;

__attribute__((used)) static void
FUNC_0 (char *VAR_2, ssize_t VAR_3, wchar_t VAR_4)
{
    ssize_t VAR_5;

    if (VAR_3 == 1) {
 VAR_2[0] = VAR_4 & 0x7f;
 return;
    }


    for (VAR_5 = VAR_3 - 1; VAR_5 >= 0; VAR_5--) {
 VAR_2[VAR_5] = 0x80 | (VAR_4 & 0x3f);
 VAR_4 >>= 6;
    }


    VAR_2[0] &= VAR_0[VAR_3];
    VAR_2[0] |= VAR_1[VAR_3];
}
