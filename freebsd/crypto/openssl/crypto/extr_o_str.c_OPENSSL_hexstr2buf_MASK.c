
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char) ;
 unsigned char* FUNC_3 (size_t) ;
 size_t FUNC_4 (char const*) ;

unsigned char *FUNC_5(const char *VAR_4, long *VAR_5)
{
    unsigned char *VAR_6, *VAR_7;
    unsigned char VAR_8, VAR_9;
    int VAR_10, VAR_11;
    const unsigned char *VAR_12;
    size_t VAR_13;

    VAR_13 = FUNC_4(VAR_4);
    if ((VAR_6 = FUNC_3(VAR_13 >> 1)) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_3);
        return ((void*)0);
    }
    for (VAR_12 = (const unsigned char *)VAR_4, VAR_7 = VAR_6; *VAR_12; ) {
        VAR_8 = *VAR_12++;
        if (VAR_8 == ':')
            continue;
        VAR_9 = *VAR_12++;
        if (!VAR_9) {
            FUNC_0(VAR_0,
                      VAR_2);
            FUNC_1(VAR_6);
            return ((void*)0);
        }
        VAR_11 = FUNC_2(VAR_9);
        VAR_10 = FUNC_2(VAR_8);
        if (VAR_11 < 0 || VAR_10 < 0) {
            FUNC_1(VAR_6);
            FUNC_0(VAR_0, VAR_1);
            return ((void*)0);
        }
        *VAR_7++ = (unsigned char)((VAR_10 << 4) | VAR_11);
    }

    if (VAR_5)
        *VAR_5 = VAR_7 - VAR_6;
    return VAR_6;
}
