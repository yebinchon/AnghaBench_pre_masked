
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int) ;
 char* FUNC_1 (unsigned char const*,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,unsigned char const*,int) ;

char *FUNC_4(const unsigned char *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    char *VAR_7;


    if (VAR_3 & 1)
        return ((void*)0);

    for (VAR_4 = 0, VAR_5 = 0; VAR_5 < VAR_3; ) {
        VAR_6 = FUNC_3(((void*)0), VAR_2+VAR_5, VAR_3-VAR_5);





        if (VAR_6 < 0) return FUNC_1(VAR_2, VAR_3);
        if (VAR_6 == 4) VAR_5 += 4;
        else VAR_5 += 2;
        VAR_4 += VAR_6;
    }


    if (!VAR_3 || (VAR_2[VAR_3-2]||VAR_2[VAR_3 - 1]))
        VAR_4++;

    if ((VAR_7 = FUNC_0(VAR_4)) == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return ((void*)0);
    }


    for (VAR_4 = 0, VAR_5 = 0; VAR_5 < VAR_3; ) {
        VAR_6 = FUNC_3(VAR_7+VAR_4, VAR_2+VAR_5, VAR_3-VAR_5);
        if (VAR_6 == 4) VAR_5 += 4;
        else VAR_5 += 2;
        VAR_4 += VAR_6;
    }


    if (!VAR_3 || (VAR_2[VAR_3-2]||VAR_2[VAR_3 - 1]))
        VAR_7[VAR_4] = '\0';

    return VAR_7;
}
