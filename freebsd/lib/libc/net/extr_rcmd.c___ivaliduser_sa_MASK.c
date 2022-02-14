
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int hname ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sockaddr const*,int ,char*) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct sockaddr const*,int ,char*,int,int *,int ,int ) ;
 int FUNC_4 (char*,char*,char const*,char*) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int * FUNC_6 (char*,char) ;
 int FUNC_7 (char const*,char*) ;
 char FUNC_8 (unsigned char) ;
 scalar_t__ FUNC_9 (char**) ;

int
FUNC_10(FILE *VAR_3, const struct sockaddr *VAR_4, socklen_t VAR_5,
    const char *VAR_6, const char *VAR_7)
{
 char *VAR_8, *VAR_9;
 int VAR_10;
 char VAR_11[VAR_1 + 128];
 char VAR_12[VAR_1];

 int VAR_13 = 0, VAR_14 = 0;
 if (FUNC_3(VAR_4, VAR_5, VAR_12, sizeof(VAR_12), ((void*)0), 0,
   VAR_2) != 0)
  VAR_12[0] = '\0';

 while (FUNC_1(VAR_11, sizeof(VAR_11), VAR_3)) {
  VAR_9 = VAR_11;

  if (FUNC_6(VAR_9, '\n') == ((void*)0)) {
   while ((VAR_10 = FUNC_2(VAR_3)) != '\n' && VAR_10 != VAR_0);
   continue;
  }
  if (*VAR_9 == '\n' || *VAR_9 == '#') {

   continue;
  }
  while (*VAR_9 != '\n' && *VAR_9 != ' ' && *VAR_9 != '\t' && *VAR_9 != '\0') {
   *VAR_9 = FUNC_5((unsigned char)*VAR_9) ? FUNC_8((unsigned char)*VAR_9) : *VAR_9;
   VAR_9++;
  }
  if (*VAR_9 == ' ' || *VAR_9 == '\t') {
   *VAR_9++ = '\0';
   while (*VAR_9 == ' ' || *VAR_9 == '\t')
    VAR_9++;
   VAR_8 = VAR_9;
   while (*VAR_9 != '\n' && *VAR_9 != ' ' &&
       *VAR_9 != '\t' && *VAR_9 != '\0')
    VAR_9++;
  } else
   VAR_8 = VAR_9;
  *VAR_9 = '\0';




  switch(VAR_11[0]) {
  case '+':
   if (!VAR_11[1]) {
    VAR_14 = 1;
    break;
   }
   if (VAR_11[1] == '@')
    VAR_14 = VAR_12[0] != '\0' &&
        FUNC_4(&VAR_11[2], VAR_12, ((void*)0), ((void*)0));
   else
    VAR_14 = FUNC_0(VAR_4, VAR_5,
            (char *)&VAR_11[1]);
   break;
  case '-':
   if (VAR_11[1] == '@') {
    if (VAR_12[0] == '\0' ||
        FUNC_4(&VAR_11[2], VAR_12, ((void*)0), ((void*)0)))
     return(-1);
   } else {
    if (FUNC_0(VAR_4, VAR_5,
       (char *)&VAR_11[1]))
     return(-1);
   }
   break;
  default:
   VAR_14 = FUNC_0(VAR_4, VAR_5, VAR_11);
   break;
  }
  switch(*VAR_8) {
  case '+':
   if (!*(VAR_8+1)) {
    VAR_13 = 1;
    break;
   }
   if (*(VAR_8+1) == '@')
    VAR_13 = FUNC_4(VAR_8+2, ((void*)0), VAR_7, ((void*)0));
   else
    VAR_13 = !(FUNC_7(VAR_7, VAR_8+1));
   break;
  case '-':
   if (VAR_14) {
    if (!*(VAR_8+1))
     return(-1);
    if (*(VAR_8+1) == '@') {
     if (FUNC_4(VAR_8+2, ((void*)0),
       VAR_7, ((void*)0)))
      return(-1);
    } else {
     if (!FUNC_7(VAR_7, VAR_8+1))
      return(-1);
    }
   }
   break;
  default:
   if (VAR_14)
    VAR_13 = !(FUNC_7(VAR_7,*VAR_8 ? VAR_8 : VAR_6));
   break;
  }
  if (VAR_14 && VAR_13)
   return(0);
 }
 return (-1);
}
