
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (unsigned char const*,size_t,unsigned char const*,size_t,unsigned int) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int FUNC_2(const unsigned char *VAR_1, size_t VAR_2,
                          const unsigned char *VAR_3, size_t VAR_4,
                          const unsigned char *VAR_5, size_t VAR_6,
                          unsigned int VAR_7)
{
    const unsigned char *VAR_8;
    const unsigned char *VAR_9;
    const unsigned char *VAR_10;
    int VAR_11 = 0;
    int VAR_12 = 0;

    if (VAR_6 < VAR_2 + VAR_4)
        return 0;
    if (!FUNC_0(VAR_1, VAR_2, VAR_5, VAR_2, VAR_7))
        return 0;
    VAR_8 = VAR_5 + VAR_2;
    VAR_9 = VAR_5 + (VAR_6 - VAR_4);
    if (!FUNC_0(VAR_9, VAR_4, VAR_3, VAR_4, VAR_7))
        return 0;




    if (VAR_2 == 0 && *VAR_3 == '.') {
        if (VAR_8 == VAR_9)
            return 0;
        VAR_12 = 1;
        if (VAR_7 & VAR_0)
            VAR_11 = 1;
    }

    if (!VAR_12 &&
        VAR_6 >= 4 && FUNC_1((char *)VAR_5, "xn--", 4) == 0)
        return 0;

    if (VAR_9 == VAR_8 + 1 && *VAR_8 == '*')
        return 1;





    for (VAR_10 = VAR_8; VAR_10 != VAR_9; ++VAR_10)
        if (!(('0' <= *VAR_10 && *VAR_10 <= '9') ||
              ('A' <= *VAR_10 && *VAR_10 <= 'Z') ||
              ('a' <= *VAR_10 && *VAR_10 <= 'z') ||
              *VAR_10 == '-' || (VAR_11 && *VAR_10 == '.')))
            return 0;
    return 1;
}
