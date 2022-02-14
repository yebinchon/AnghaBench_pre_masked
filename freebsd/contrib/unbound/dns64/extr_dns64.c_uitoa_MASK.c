
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int
FUNC_1(unsigned VAR_0, char* VAR_1)
{
    char* VAR_2 = VAR_1;
    do {
        *VAR_2++ = '0' + VAR_0 % 10;
    } while (VAR_0 /= 10);
    FUNC_0(VAR_1, VAR_2);
    return VAR_2 - VAR_1;
}
