
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 char** VAR_1 ;

__attribute__((used)) static inline void
FUNC_0(int VAR_2, char *VAR_3[], char **VAR_4)
{
 const char *VAR_5;

 if (VAR_1 == ((void*)0))
  VAR_1 = VAR_4;
 if (VAR_2 > 0 && VAR_3[0] != ((void*)0)) {
  VAR_0 = VAR_3[0];
  for (VAR_5 = VAR_0; *VAR_5 != '\0'; VAR_5++) {
   if (*VAR_5 == '/')
    VAR_0 = VAR_5 + 1;
  }
 }
}
