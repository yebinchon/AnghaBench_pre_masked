
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Buffer ;
typedef scalar_t__ Boolean ;


 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,int,char const*) ;
 char* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 char* FUNC_5 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,char*,char*) ;
 scalar_t__ FUNC_7 (unsigned char) ;
 scalar_t__ FUNC_8 (unsigned char) ;
 size_t FUNC_9 (char const*) ;

__attribute__((used)) static char *
FUNC_10(char *VAR_3, Boolean VAR_4)
{

    Buffer VAR_5;
    const char *VAR_6;
    size_t VAR_7;

    if ((VAR_6 = FUNC_5()) == ((void*)0))
     VAR_6 = "\\\n";
    VAR_7 = FUNC_9(VAR_6);

    FUNC_3(&VAR_5, 0);

    for (; *VAR_3 != '\0'; VAR_3++) {
 if (*VAR_3 == '\n') {
     FUNC_1(&VAR_5, VAR_7, VAR_6);
     continue;
 }
 if (FUNC_8((unsigned char)*VAR_3) || FUNC_7((unsigned char)*VAR_3))
     FUNC_0(&VAR_5, '\\');
 FUNC_0(&VAR_5, *VAR_3);
 if (VAR_4 && *VAR_3 == '$')
     FUNC_1(&VAR_5, 2, "\\$");
    }

    VAR_3 = FUNC_2(&VAR_5, VAR_0);
    if (FUNC_4(VAR_1))
 FUNC_6(VAR_2, "QuoteMeta: [%s]\n", VAR_3);
    return VAR_3;
}
