
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (char const*,int,int,int *) ;
 char* FUNC_3 (char const*,int ) ;

__attribute__((used)) static void
FUNC_4(
    FILE * VAR_1, char const * VAR_2, char const * VAR_3, char const * VAR_4)
{
    char const * VAR_5 = (VAR_2 != ((void*)0)) ? VAR_2 : ((VAR_3 != ((void*)0)) ? VAR_3 : VAR_4);
    char const * VAR_6;
    if (VAR_5 == ((void*)0))
        return;
    VAR_6 = FUNC_3(VAR_5, VAR_0);
    if (VAR_6 == ((void*)0))
        FUNC_1(VAR_5, VAR_1);
    else
        FUNC_2(VAR_5, 1, (VAR_6 - VAR_5), VAR_1);
    FUNC_0(VAR_0, VAR_1);
}
