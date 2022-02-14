
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static off_t
FUNC_0(const char *VAR_2, unsigned VAR_3)
{
        int64_t VAR_4, VAR_5, VAR_6;
        int VAR_7, VAR_8, VAR_9;

        VAR_9 = 8;
        VAR_5 = VAR_0 / VAR_9;
        VAR_6 = VAR_0 % VAR_9;

        while (*VAR_2 == ' ' || *VAR_2 == '\t')
                VAR_2++;
        if (*VAR_2 == '-') {
                VAR_8 = -1;
                VAR_2++;
        } else
                VAR_8 = 1;

        VAR_4 = 0;
        VAR_7 = *VAR_2 - '0';
        while (VAR_7 >= 0 && VAR_7 < VAR_9 && VAR_3-- > 0) {
                if (VAR_4>VAR_5 || (VAR_4 == VAR_5 && VAR_7 > VAR_6)) {
                        VAR_4 = VAR_1;
                        break;
                }
                VAR_4 = (VAR_4 * VAR_9) + VAR_7;
                VAR_7 = *++VAR_2 - '0';
        }
        return (VAR_8 < 0) ? -VAR_4 : VAR_4;
}
