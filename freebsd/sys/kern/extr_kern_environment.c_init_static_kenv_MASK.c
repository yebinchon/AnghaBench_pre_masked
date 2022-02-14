
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 char* VAR_1 ;
 char* FUNC_1 (char*) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 scalar_t__ FUNC_2 (char*,char*) ;

void
FUNC_3(char *VAR_7, size_t VAR_8)
{
 char *VAR_9;

 FUNC_0(!VAR_0, ("kenv: dynamic_kenv already initialized"));






 FUNC_0(VAR_8 == 0 || VAR_8 >= 2,
     ("kenv: static env must be initialized or suitably sized"));
 FUNC_0(VAR_8 == 0 || (*VAR_7 == '\0' && *(VAR_7 + 1) == '\0'),
     ("kenv: sized buffer must be initially empty"));
 VAR_4 = ((void*)0);
 VAR_2 = 0;
 VAR_3 = 0;
 VAR_1 = VAR_5;
 VAR_9 = FUNC_1("loader_env.disabled");
 if (VAR_9 == ((void*)0) || FUNC_2(VAR_9, "1") != 0) {
  VAR_4 = VAR_7;
  VAR_2 = VAR_8;
  VAR_3 = 0;

  VAR_9 = FUNC_1("static_env.disabled");
  if (VAR_9 != ((void*)0) && FUNC_2(VAR_9, "1") == 0) {
   VAR_1[0] = '\0';
   VAR_1[1] = '\0';
  }
 }
 VAR_9 = FUNC_1("static_hints.disabled");
 if (VAR_9 != ((void*)0) && FUNC_2(VAR_9, "1") == 0) {
  VAR_6[0] = '\0';
  VAR_6[1] = '\0';
 }
}
