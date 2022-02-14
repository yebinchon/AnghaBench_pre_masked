
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 char* FUNC_1 (size_t) ;
 size_t FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,size_t,int) ;
 long FUNC_4 (int ) ;

__attribute__((used)) static char *
FUNC_5(char **VAR_5)
{
 long VAR_6;
 static size_t VAR_7;
 size_t VAR_8;
 char **VAR_9, *VAR_10, *VAR_11;
 static char *VAR_12 = ((void*)0);

 if (VAR_12 == ((void*)0)) {
  if ((VAR_6 = FUNC_4(VAR_4)) == -1)
   FUNC_0(1, "sysconf _SC_ARG_MAX failed");
  if (VAR_6 >= VAR_0 / 4 || VAR_6 >= (long)(VAR_1 / 4))
   FUNC_0(1, "sysconf _SC_ARG_MAX preposterously large");
  VAR_7 = 4 * VAR_6 + 1;
  if ((VAR_12 = FUNC_1(VAR_7)) == ((void*)0))
   FUNC_0(1, "malloc failed");
 }

 if (*VAR_5 == ((void*)0)) {
  VAR_12[0] = '\0';
  return (VAR_12);
 }
 VAR_10 = VAR_12;
 for (VAR_9 = VAR_5; (VAR_11 = *VAR_9++) != ((void*)0); ) {
  if (*VAR_11 == '\0')
   continue;
  VAR_8 = (VAR_7 - 1 - (VAR_10 - VAR_12)) / 4;
  FUNC_3(VAR_10, VAR_11, FUNC_2(VAR_11) < VAR_8 ? FUNC_2(VAR_11) : VAR_8,
      VAR_3 | VAR_2);
  while (*VAR_10 != '\0')
   VAR_10++;
  if ((VAR_7 - 1 - (VAR_10 - VAR_12)) / 4 > 0)
   *VAR_10++ = ' ';
 }

 if (VAR_10 != VAR_12 && VAR_10[-1] == ' ')
  VAR_10--;
 *VAR_10 = '\0';
 return (VAR_12);
}
