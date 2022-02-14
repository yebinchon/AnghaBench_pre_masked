
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct in_addr {int s_addr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static const char *
FUNC_1 (const void *VAR_3, char *VAR_4, size_t VAR_5)
{
    const char VAR_6[] = "0123456789";
    int VAR_7;
    struct in_addr *VAR_8 = (struct in_addr *)VAR_3;
    u_long VAR_9 = FUNC_0(VAR_8->s_addr);
    const char *VAR_10 = VAR_4;

    if (VAR_5 < VAR_1) {
 VAR_2 = VAR_0;
 return ((void*)0);
    }
    for (VAR_7 = 0; VAR_7 < 4; ++VAR_7) {
 int VAR_11 = (VAR_9 >> (24 - VAR_7 * 8)) & 0xFF;
 int VAR_12 = 0;

 if (VAR_12 || VAR_11 / 100 > 0) {
     *VAR_4++ = VAR_6[VAR_11 / 100];
     VAR_11 %= 100;
     VAR_12 = 1;
 }
 if (VAR_12 || VAR_11 / 10 > 0) {
     *VAR_4++ = VAR_6[VAR_11 / 10];
     VAR_11 %= 10;
     VAR_12 = 1;
 }
 *VAR_4++ = VAR_6[VAR_11];
 if (VAR_7 != 3)
     *VAR_4++ = '.';
    }
    *VAR_4++ = '\0';
    return VAR_10;
}
