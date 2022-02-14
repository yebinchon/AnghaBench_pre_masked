
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char wchar_t ;
typedef int ssize_t ;


 unsigned char const* VAR_0 ;

__attribute__((used)) static inline wchar_t
FUNC_0 (const char *VAR_1, ssize_t VAR_2)
{

    if (VAR_2 == 1)
 return (unsigned char) VAR_1[0];

    ssize_t VAR_3;
    wchar_t VAR_4;
    const unsigned char *VAR_5 = (const unsigned char *) VAR_1;

    VAR_4 = *VAR_5 & VAR_0[VAR_2];
    for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++) {
 VAR_4 <<= 6;
 VAR_4 |= VAR_5[VAR_3] & 0x3f;
 if ((VAR_5[VAR_3] & 0xc0) != 0x80)
     return (wchar_t) -1;
    }

    return VAR_4;
}
