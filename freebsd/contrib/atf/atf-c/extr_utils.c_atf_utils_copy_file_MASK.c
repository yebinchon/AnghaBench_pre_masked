
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int ssize_t ;
typedef int buffer ;


 int FUNC_0 (int,char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const,int ) ;
 int FUNC_3 (int const,struct stat*) ;
 int FUNC_4 (char const*,int,...) ;
 int FUNC_5 (int const,char*,int) ;
 int FUNC_6 (int const,char*,int) ;

void
FUNC_7(const char *VAR_4, const char *VAR_5)
{
    const int VAR_6 = FUNC_4(VAR_4, VAR_1);
    FUNC_0(VAR_6 != -1, "Failed to open source file during "
                    "copy (%s)", VAR_4);

    const int VAR_7 = FUNC_4(VAR_5, VAR_3 | VAR_0 | VAR_2, 0777);
    FUNC_0(VAR_7 != -1, "Failed to open destination file during "
                    "copy (%s)", VAR_5);

    char VAR_8[1024];
    ssize_t VAR_9;
    while ((VAR_9 = FUNC_5(VAR_6, VAR_8, sizeof(VAR_8))) > 0)
        FUNC_0(FUNC_6(VAR_7, VAR_8, VAR_9) == VAR_9,
                        "Failed to write to %s during copy", VAR_5);
    FUNC_0(VAR_9 != -1, "Failed to read from %s during copy", VAR_4);

    struct stat VAR_10;
    FUNC_0(FUNC_3(VAR_6, &VAR_10) != -1,
                    "Failed to stat source file %s during copy", VAR_4);
    FUNC_0(FUNC_2(VAR_7, VAR_10.st_mode) != -1,
                    "Failed to chmod destination file %s during copy",
                    VAR_5);

    FUNC_1(VAR_7);
    FUNC_1(VAR_6);
}
