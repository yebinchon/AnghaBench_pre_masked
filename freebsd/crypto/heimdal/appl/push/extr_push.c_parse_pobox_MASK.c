
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_name; } ;


 int FUNC_0 (int,char*) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 () ;
 char* FUNC_3 (char const**) ;
 char* FUNC_4 (char*) ;
 struct passwd* FUNC_5 (int ) ;
 int FUNC_6 () ;
 char* FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_9 (char *VAR_0, const char **VAR_1, const char **VAR_2)
{
    const char *VAR_3, *VAR_4;
    char *VAR_5;
    int VAR_6 = 0;

    if (VAR_0 == ((void*)0)) {

 *VAR_2 = FUNC_4 ("USERNAME");
 if (*VAR_2 == ((void*)0)) {
     struct passwd *VAR_7 = FUNC_5 (FUNC_6 ());

     if (VAR_7 == ((void*)0))
  FUNC_0 (1, "Who are you?");
     *VAR_2 = FUNC_1 (VAR_7->pw_name);
 }
 *VAR_1 = FUNC_3 (VAR_2);
 return;
    }


    if(FUNC_8(VAR_0, "po:", 3) == 0) {
 VAR_0 += 3;
 VAR_6++;
    }


    VAR_5 = FUNC_7(VAR_0, '@');
    if(VAR_5 != ((void*)0)) {
 *VAR_5++ = '\0';
 VAR_3 = VAR_5;
    } else {
 VAR_3 = VAR_0;
    }


    VAR_5 = FUNC_7(VAR_0, ':');
    if(VAR_5 != ((void*)0)) {
 *VAR_5++ = '\0';
 VAR_4 = VAR_5;
    } else {
 VAR_4 = VAR_0;
    }
    if(VAR_3 == VAR_4) {

 if(VAR_6) {
     VAR_3 = FUNC_3 (&VAR_4);
 } else {
     VAR_4 = FUNC_2 ();
     if (VAR_4 == ((void*)0))
  FUNC_0 (1, "Who are you?");
 }
    }
    *VAR_1 = VAR_3;
    *VAR_2 = VAR_4;
}
