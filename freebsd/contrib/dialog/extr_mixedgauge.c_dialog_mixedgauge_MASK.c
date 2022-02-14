
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DIALOG_MIXEDGAUGE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int *,int*,char const*,char const*,int,int,int,char**) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;

int
FUNC_6(const char *VAR_1,
    const char *VAR_2,
    int VAR_3,
    int VAR_4,
    int VAR_5,
    int VAR_6,
    char **VAR_7)
{
    DIALOG_MIXEDGAUGE VAR_8;
    int VAR_9 = 0;

    FUNC_0(("# mixedgauge args:\n"));
    FUNC_2("title", VAR_1);
    FUNC_2("message", VAR_2);
    FUNC_1("height", VAR_3);
    FUNC_1("width", VAR_4);
    FUNC_1("percent", VAR_5);
    FUNC_1("llength", VAR_6);


    FUNC_3(&VAR_8, &VAR_9, VAR_1, VAR_2, VAR_3,
    VAR_4, VAR_6, VAR_7);

    FUNC_5(&VAR_8, VAR_5);

    return FUNC_4(&VAR_8, VAR_0);
}
