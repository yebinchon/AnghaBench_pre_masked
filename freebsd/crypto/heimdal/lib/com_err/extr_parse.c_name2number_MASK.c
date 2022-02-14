
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static long
FUNC_3(const char *VAR_0)
{
    const char *VAR_1;
    long VAR_2 = 0;
    const char *VAR_3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
 "abcdefghijklmnopqrstuvwxyz0123456789_";
    if(FUNC_1(VAR_0) > 4) {
 FUNC_2("table name too long");
 return 0;
    }
    for(VAR_1 = VAR_0; *VAR_1; VAR_1++){
 char *VAR_4 = FUNC_0(VAR_3, *VAR_1);
 if(VAR_4 == ((void*)0)) {
     FUNC_2("invalid character in table name");
     return 0;
 }
 VAR_2 = (VAR_2 << 6) + (VAR_4 - VAR_3) + 1;
    }
    VAR_2 <<= 8;
    if(VAR_2 > 0x7fffffff)
 VAR_2 = -(0xffffffff - VAR_2 + 1);
    return VAR_2;
}
