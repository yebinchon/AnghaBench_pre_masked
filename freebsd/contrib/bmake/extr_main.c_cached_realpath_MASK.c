
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GNode ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,int *,int ) ;
 char* FUNC_1 (char const*,int *,char**) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 () ;
 char* FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char*,int ) ;

char *
FUNC_6(const char *VAR_1, char *VAR_2)
{
    GNode *VAR_3;
    char *VAR_4, *VAR_5;

    if (!VAR_1 || !VAR_1[0])
 return ((void*)0);

    VAR_3 = FUNC_3();

    if ((VAR_4 = FUNC_1(VAR_1, VAR_3, &VAR_5)) != ((void*)0)) {

 FUNC_5(VAR_2, VAR_4, VAR_0);
    } else if ((VAR_4 = FUNC_4(VAR_1, VAR_2)) != ((void*)0)) {
 FUNC_0(VAR_1, VAR_4, VAR_3, 0);
    }
    FUNC_2(VAR_5);
    return VAR_4 ? VAR_2 : ((void*)0);
}
