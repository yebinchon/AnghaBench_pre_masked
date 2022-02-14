
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmap_info_t ;
typedef int const tOptionValue ;
typedef int tOptionLoadMode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_3 ;
 int const* FUNC_1 (char*,char const*,int ) ;
 int VAR_4 ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,int ,int ,int *) ;
 int FUNC_4 (int *) ;

const tOptionValue *
FUNC_5(char const * VAR_5)
{
    tmap_info_t VAR_6;
    tOptionValue * VAR_7 = ((void*)0);
    tOptionLoadMode VAR_8 = VAR_4;

    char * VAR_9 = FUNC_3(VAR_5, VAR_2, VAR_0, &VAR_6);

    if (FUNC_0(VAR_9))
        return ((void*)0);

    VAR_4 = VAR_1;
    VAR_7 = FUNC_1(VAR_9, VAR_5, FUNC_2(VAR_5));

    if (VAR_7 == ((void*)0)) {
        int VAR_10 = VAR_3;
        FUNC_4(&VAR_6);
        VAR_3 = VAR_10;
    } else
        FUNC_4(&VAR_6);

    VAR_4 = VAR_8;
    return VAR_7;
}
