
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 char** FUNC_0 (size_t) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char const*,int ) ;

void
FUNC_4(void)
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
  "LOGNAME=",
  "POSIXLY_CORRECT=",
  "PRINTER=",
  ((void*)0)
 };

 char **VAR_3, **VAR_4;
 const char **VAR_5;
 char ** VAR_6;
 size_t VAR_7;


 for (VAR_7 = 1, VAR_3 = VAR_0; *VAR_3; VAR_7++, VAR_3++)
  continue;
 if ((VAR_6 = FUNC_0(VAR_7 * sizeof(char *))) == ((void*)0)) {
  VAR_0 = ((void*)0);
  return;
 }

  for (VAR_4 = VAR_6, VAR_3 = VAR_0; *VAR_3; VAR_3++) {
  int VAR_8 = 0;

  for(VAR_5 = VAR_1; *VAR_5; VAR_5++)
   if(FUNC_3(*VAR_3, *VAR_5, FUNC_2(*VAR_5)) == 0) {
    VAR_8 = 1;
    break;
   }
  if (VAR_8)
   continue;

  for(VAR_5 = VAR_2; *VAR_5; VAR_5++)
   if(FUNC_3(*VAR_3, *VAR_5, FUNC_2(*VAR_5)) == 0)
    break;
  if(*VAR_5 != ((void*)0)) {
   if ((*VAR_4++ = FUNC_1(*VAR_3)) == ((void*)0)) {
    VAR_0 = VAR_6;
    return;
   }
  }
  }
 *VAR_4 = ((void*)0);
 VAR_0 = VAR_6;
}
