
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 int FUNC_0 (char**,char*,char const*) ;
 int VAR_1 ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char const*,char*,int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 char* FUNC_7 (char const*,char) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char const*,char const*) ;

__attribute__((used)) static void
FUNC_10(const char *VAR_2, int VAR_3)
{
    char *VAR_4;
    const char *VAR_5;

    FUNC_4(((void*)0));
    if(FUNC_5() < 0)
 FUNC_8("login process");
    FUNC_6();

    VAR_5 = FUNC_7(VAR_2, '/');
    if(VAR_5)
 VAR_5++;
    else
 VAR_5 = VAR_2;
    if (FUNC_0(&VAR_4, "-%s", VAR_5) == -1)
 FUNC_2(1, "Out of memory");
    FUNC_3(VAR_2, VAR_4, ((void*)0), VAR_1);
    if(VAR_3){
 FUNC_9("Can't exec %s, trying %s",
       VAR_2, VAR_0);
 FUNC_3(VAR_0, "-sh", ((void*)0), VAR_1);
 FUNC_1(1, "%s", VAR_0);
    }
    FUNC_1(1, "%s", VAR_2);
}
