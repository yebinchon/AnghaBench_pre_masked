
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char*,char const*,int ) ;

__attribute__((used)) static void
FUNC_2(void)
{
    static const char *VAR_1[] = {
 "TERMCAP=/",
 ((void*)0)
    };

    static const char *VAR_2[] = {
 "XAUTH=", "XAUTHORITY=", "DISPLAY=",
 "TERM=",
 "EDITOR=",
 "PAGER=",
 "PRINTER=",
 "LOGNAME=",
 "POSIXLY_CORRECT=",
 "TERMCAP=",
 ((void*)0)
    };

    char **VAR_3, **VAR_4;
    const char **VAR_5;

    for (VAR_4 = VAR_3 = VAR_0; *VAR_3; VAR_3++) {
 int VAR_6 = 0;

 for(VAR_5 = VAR_1; *VAR_5; VAR_5++)
     if(FUNC_1(*VAR_3, *VAR_5, FUNC_0(*VAR_5)) == 0) {
  VAR_6 = 1;
  break;
     }
 if (VAR_6)
     continue;

 for(VAR_5 = VAR_2; *VAR_5; VAR_5++)
     if(FUNC_1(*VAR_3, *VAR_5, FUNC_0(*VAR_5)) == 0)
  break;
 if(*VAR_5 != ((void*)0))
     *VAR_4++ = *VAR_3;
    }
    *VAR_4 = ((void*)0);
}
