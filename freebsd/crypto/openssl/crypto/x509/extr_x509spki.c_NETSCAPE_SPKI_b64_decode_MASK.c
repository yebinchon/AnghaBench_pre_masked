
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NETSCAPE_SPKI ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (int *,unsigned char const**,int) ;
 int FUNC_5 (char const*) ;

NETSCAPE_SPKI *FUNC_6(const char *VAR_3, int VAR_4)
{
    unsigned char *VAR_5;
    const unsigned char *VAR_6;
    int VAR_7;
    NETSCAPE_SPKI *VAR_8;
    if (VAR_4 <= 0)
        VAR_4 = FUNC_5(VAR_3);
    if ((VAR_5 = FUNC_2(VAR_4 + 1)) == ((void*)0)) {
        FUNC_3(VAR_1, VAR_0);
        return ((void*)0);
    }
    VAR_7 = FUNC_0(VAR_5, (const unsigned char *)VAR_3, VAR_4);
    if (VAR_7 < 0) {
        FUNC_3(VAR_1, VAR_2);
        FUNC_1(VAR_5);
        return ((void*)0);
    }
    VAR_6 = VAR_5;
    VAR_8 = FUNC_4(((void*)0), &VAR_6, VAR_7);
    FUNC_1(VAR_5);
    return VAR_8;
}
