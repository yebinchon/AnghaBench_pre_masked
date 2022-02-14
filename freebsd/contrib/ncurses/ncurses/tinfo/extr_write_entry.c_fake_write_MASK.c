
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,size_t) ;

__attribute__((used)) static size_t
FUNC_1(char *VAR_0,
    unsigned *VAR_1,
    size_t VAR_2,
    char *VAR_3,
    size_t VAR_4,
    size_t VAR_5)
{
    size_t VAR_6 = (VAR_2 - *VAR_1);

    VAR_4 *= VAR_5;
    if (VAR_6 > 0) {
 if (VAR_4 > VAR_6)
     VAR_4 = VAR_6;
 FUNC_0(VAR_0 + *VAR_1, VAR_3, VAR_4);
 *VAR_1 += (unsigned) VAR_4;
    } else {
 VAR_4 = 0;
    }
    return (VAR_4 / VAR_5);
}
