
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int FUNC_0 (int ,char const*,int ) ;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;

int
FUNC_1(char *VAR_3, size_t VAR_4, const char *VAR_5, va_list VAR_6)
{
    int VAR_7;
    VAR_2 = VAR_3;
    VAR_1 = VAR_3 + VAR_4 - 1;
    VAR_7 = FUNC_0(VAR_0, VAR_5, VAR_6);
    *VAR_2++ = '\0';
    return VAR_7;
}
