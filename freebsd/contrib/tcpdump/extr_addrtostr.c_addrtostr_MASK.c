
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

const char *
FUNC_0 (const void *VAR_3, char *VAR_4, size_t VAR_5)
{
    const u_char *VAR_6 = (const u_char *)VAR_3;
    const char VAR_7[] = "0123456789";
    int VAR_8;
    const char *VAR_9 = VAR_4;

    if (VAR_5 < VAR_1) {
 VAR_2 = VAR_0;
 return ((void*)0);
    }
    for (VAR_8 = 0; VAR_8 < 4; ++VAR_8) {
     int VAR_10 = *VAR_6++;
 int VAR_11 = 0;

 if (VAR_11 || VAR_10 / 100 > 0) {
     *VAR_4++ = VAR_7[VAR_10 / 100];
     VAR_10 %= 100;
     VAR_11 = 1;
 }
 if (VAR_11 || VAR_10 / 10 > 0) {
     *VAR_4++ = VAR_7[VAR_10 / 10];
     VAR_10 %= 10;
     VAR_11 = 1;
 }
 *VAR_4++ = VAR_7[VAR_10];
 if (VAR_8 != 3)
     *VAR_4++ = '.';
    }
    *VAR_4++ = '\0';
    return VAR_9;
}
