
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;

__attribute__((used)) static const unsigned char *FUNC_1(const unsigned char *VAR_4, size_t VAR_5,
                                       unsigned int VAR_6)
{
    const unsigned char *VAR_7 = 0;
    size_t VAR_8;
    int VAR_9 = VAR_2;
    int VAR_10 = 0;
    for (VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8) {




        if (VAR_4[VAR_8] == '*') {
            int VAR_11 = (VAR_9 & VAR_2);
            int VAR_12 = (VAR_8 == VAR_5 - 1 || VAR_4[VAR_8 + 1] == '.');





            if (VAR_7 != ((void*)0) || (VAR_9 & VAR_1) != 0 || VAR_10)
                return ((void*)0);

            if ((VAR_6 & VAR_3)
                && (!VAR_11 || !VAR_12))
                return ((void*)0);

            if (!VAR_11 && !VAR_12)
                return ((void*)0);
            VAR_7 = &VAR_4[VAR_8];
            VAR_9 &= ~VAR_2;
        } else if (('a' <= VAR_4[VAR_8] && VAR_4[VAR_8] <= 'z')
                   || ('A' <= VAR_4[VAR_8] && VAR_4[VAR_8] <= 'Z')
                   || ('0' <= VAR_4[VAR_8] && VAR_4[VAR_8] <= '9')) {
            if ((VAR_9 & VAR_2) != 0
                && VAR_5 - VAR_8 >= 4 && FUNC_0((char *)&VAR_4[VAR_8], "xn--", 4) == 0)
                VAR_9 |= VAR_1;
            VAR_9 &= ~(VAR_0 | VAR_2);
        } else if (VAR_4[VAR_8] == '.') {
            if ((VAR_9 & (VAR_0 | VAR_2)) != 0)
                return ((void*)0);
            VAR_9 = VAR_2;
            ++VAR_10;
        } else if (VAR_4[VAR_8] == '-') {

            if ((VAR_9 & VAR_2) != 0)
                return ((void*)0);
            VAR_9 |= VAR_0;
        } else
            return ((void*)0);
    }





    if ((VAR_9 & (VAR_2 | VAR_0)) != 0 || VAR_10 < 2)
        return ((void*)0);
    return VAR_7;
}
