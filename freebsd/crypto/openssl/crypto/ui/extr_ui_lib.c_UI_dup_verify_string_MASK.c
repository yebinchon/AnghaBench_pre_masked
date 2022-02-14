
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UI ;


 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*,int,int ,int,char*,int,int,char const*) ;

int FUNC_3(UI *VAR_3, const char *VAR_4, int VAR_5,
                         char *VAR_6, int VAR_7, int VAR_8,
                         const char *VAR_9)
{
    char *VAR_10 = ((void*)0);

    if (VAR_4 != ((void*)0)) {
        VAR_10 = FUNC_0(VAR_4);
        if (VAR_10 == ((void*)0)) {
            FUNC_1(VAR_2, VAR_0);
            return -1;
        }
    }

    return FUNC_2(VAR_3, VAR_10, 1,
                                   VAR_1, VAR_5, VAR_6, VAR_7,
                                   VAR_8, VAR_9);
}
