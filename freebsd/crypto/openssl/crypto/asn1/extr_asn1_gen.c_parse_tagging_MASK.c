
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_7, int VAR_8, int *VAR_9, int *VAR_10)
{
    char VAR_11[2];
    long VAR_12;
    char *VAR_13;
    if (!VAR_7)
        return 0;
    VAR_12 = FUNC_2(VAR_7, &VAR_13, 10);

    if (VAR_13 && *VAR_13 && (VAR_13 > VAR_7 + VAR_8))
        return 0;
    if (VAR_12 < 0) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    *VAR_9 = VAR_12;

    if (VAR_13)
        VAR_8 -= VAR_13 - VAR_7;
    else
        VAR_8 = 0;
    if (VAR_8) {
        switch (*VAR_13) {

        case 'U':
            *VAR_10 = VAR_6;
            break;

        case 'A':
            *VAR_10 = VAR_3;
            break;

        case 'P':
            *VAR_10 = VAR_5;
            break;

        case 'C':
            *VAR_10 = VAR_4;
            break;

        default:
            VAR_11[0] = *VAR_13;
            VAR_11[1] = 0;
            FUNC_0(VAR_0, VAR_1);
            FUNC_1(2, "Char=", VAR_11);
            return 0;

        }
    } else
        *VAR_10 = VAR_4;

    return 1;

}
