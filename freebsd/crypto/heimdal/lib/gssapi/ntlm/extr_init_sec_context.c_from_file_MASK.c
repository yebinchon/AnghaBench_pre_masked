
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntlm_buf {int dummy; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,struct ntlm_buf*) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 size_t FUNC_7 (char*,char*) ;
 char* FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*,char**) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_1, const char *VAR_2,
   char **VAR_3, struct ntlm_buf *VAR_4)
{
    char *VAR_5, VAR_6[1024];
    FILE *VAR_7;

    VAR_7 = FUNC_2(VAR_1, "r");
    if (VAR_7 == ((void*)0))
 return VAR_0;
    FUNC_5(VAR_7);

    while (FUNC_1(VAR_6, sizeof(VAR_6), VAR_7) != ((void*)0)) {
 char *VAR_8, *VAR_9, *VAR_10;
 VAR_6[FUNC_7(VAR_6, "\r\n")] = '\0';
 if (VAR_6[0] == '#')
     continue;
 VAR_5 = ((void*)0);
 VAR_8 = FUNC_9(VAR_6, ":", &VAR_5);
 if (VAR_8 && FUNC_6(VAR_2, VAR_8) != 0)
     continue;
 VAR_9 = FUNC_9(((void*)0), ":", &VAR_5);
 VAR_10 = FUNC_9(((void*)0), ":", &VAR_5);
 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
     continue;

 *VAR_3 = FUNC_8(VAR_9);

 FUNC_3(VAR_10, VAR_4);

 FUNC_4(VAR_6, 0, sizeof(VAR_6));
 FUNC_0(VAR_7);
 return 0;
    }
    FUNC_4(VAR_6, 0, sizeof(VAR_6));
    FUNC_0(VAR_7);
    return VAR_0;
}
