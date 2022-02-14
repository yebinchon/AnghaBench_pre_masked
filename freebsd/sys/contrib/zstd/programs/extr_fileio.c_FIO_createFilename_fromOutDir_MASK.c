
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_0 ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static char*
FUNC_6(const char* VAR_1, const char* VAR_2, const size_t VAR_3)
{
    const char* VAR_4;
    char VAR_5;
    char* VAR_6;




    VAR_5 = '/';


    VAR_4 = FUNC_2(VAR_1, VAR_5);




    VAR_6 = (char*) FUNC_1(1, FUNC_5(VAR_2) + 1 + FUNC_5(VAR_4) + VAR_3 + 1);
    if (!VAR_6) {
        FUNC_0(30, "zstd: FIO_createFilename_fromOutDir: %s", FUNC_4(VAR_0));
    }

    FUNC_3(VAR_6, VAR_2, FUNC_5(VAR_2));
    if (VAR_2[FUNC_5(VAR_2)-1] == VAR_5) {
        FUNC_3(VAR_6 + FUNC_5(VAR_2), VAR_4, FUNC_5(VAR_4));
    } else {
        FUNC_3(VAR_6 + FUNC_5(VAR_2), &VAR_5, 1);
        FUNC_3(VAR_6 + FUNC_5(VAR_2) + 1, VAR_4, FUNC_5(VAR_4));
    }

    return VAR_6;
}
