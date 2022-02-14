
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,size_t*,int *) ;
 int FUNC_4 (struct sshkey*,char**) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 size_t FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_9(struct sshkey *VAR_3, const char *VAR_4, char **VAR_5)
{
 FILE *VAR_6;
 char *VAR_7 = ((void*)0), *VAR_8;
 size_t VAR_9 = 0;
 int VAR_10;

 if (VAR_5 != ((void*)0))
  *VAR_5 = ((void*)0);
 if ((VAR_6 = FUNC_1(VAR_4, "r")) == ((void*)0))
  return VAR_2;
 while (FUNC_3(&VAR_7, &VAR_9, VAR_6) != -1) {
  VAR_8 = VAR_7;
  switch (*VAR_8) {
  case '#':
  case '\n':
  case '\0':
   continue;
  }

  if (FUNC_8(VAR_8, "-----BEGIN", 10) == 0 ||
      FUNC_5(VAR_8, "SSH PRIVATE KEY FILE") == 0)
   break;

  for (; *VAR_8 && (*VAR_8 == ' ' || *VAR_8 == '\t'); VAR_8++)
   ;
  if (*VAR_8) {
   if ((VAR_10 = FUNC_4(VAR_3, &VAR_8)) == 0) {
    VAR_8[FUNC_6(VAR_8, "\r\n")] = '\0';
    if (VAR_5) {
     *VAR_5 = FUNC_7(*VAR_8 ?
         VAR_8 : VAR_4);
     if (*VAR_5 == ((void*)0))
      VAR_10 = VAR_0;
    }
    FUNC_2(VAR_7);
    FUNC_0(VAR_6);
    return VAR_10;
   }
  }
 }
 FUNC_2(VAR_7);
 FUNC_0(VAR_6);
 return VAR_1;
}
