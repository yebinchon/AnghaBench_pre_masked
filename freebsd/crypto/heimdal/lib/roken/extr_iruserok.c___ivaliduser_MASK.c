
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct hostent {int h_name; } ;
typedef int hname ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,char*) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int FUNC_2 (int *) ;
 struct hostent* FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int * FUNC_6 (char*,char) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (char*,int ,int) ;
 char FUNC_9 (unsigned char) ;
 scalar_t__ FUNC_10 (char**) ;

__attribute__((used)) static
int
FUNC_11(FILE *VAR_3, unsigned VAR_4, const char *VAR_5,
      const char *VAR_6)
{
 char *VAR_7, *VAR_8;
 int VAR_9;
 char VAR_10[VAR_2 + 128];
 char VAR_11[VAR_2];
 struct hostent *VAR_12;

 int VAR_13 = 0, VAR_14 = 0;
 if ((VAR_12 = FUNC_3((char *)&VAR_4,
    sizeof(u_long),
    VAR_0)) == ((void*)0))
  return (-1);
 FUNC_8(VAR_11, VAR_12->h_name, sizeof(VAR_11));

 while (FUNC_1(VAR_10, sizeof(VAR_10), VAR_3)) {
  VAR_8 = VAR_10;

  if (FUNC_6(VAR_8, '\n') == ((void*)0)) {
   while ((VAR_9 = FUNC_2(VAR_3)) != '\n' && VAR_9 != VAR_1);
   continue;
  }
  if (*VAR_8 == '\n' || *VAR_8 == '#') {

   continue;
  }
  while (*VAR_8 != '\n' && *VAR_8 != ' ' && *VAR_8 != '\t' && *VAR_8 != '\0') {
          if (FUNC_5((unsigned char)*VAR_8))
       *VAR_8 = FUNC_9((unsigned char)*VAR_8);
   VAR_8++;
  }
  if (*VAR_8 == ' ' || *VAR_8 == '\t') {
   *VAR_8++ = '\0';
   while (*VAR_8 == ' ' || *VAR_8 == '\t')
    VAR_8++;
   VAR_7 = VAR_8;
   while (*VAR_8 != '\n' && *VAR_8 != ' ' &&
       *VAR_8 != '\t' && *VAR_8 != '\0')
    VAR_8++;
  } else
   VAR_7 = VAR_8;
  *VAR_8 = '\0';




  switch(VAR_10[0]) {
  case '+':
   if (!VAR_10[1]) {
    VAR_14 = 1;
    break;
   }
   if (VAR_10[1] == '@')
    VAR_14 = FUNC_4((char *)&VAR_10[2],
     (char *)&VAR_11, ((void*)0), ((void*)0));
   else
    VAR_14 = FUNC_0(VAR_4,(char *)&VAR_10[1]);
   break;
  case '-':
   if (VAR_10[1] == '@') {
    if (FUNC_4((char *)&VAR_10[2],
           (char *)&VAR_11, ((void*)0), ((void*)0)))
     return(-1);
   } else {
    if (FUNC_0(VAR_4,(char *)&VAR_10[1]))
     return(-1);
   }
   break;
  default:
   VAR_14 = FUNC_0(VAR_4, VAR_10);
   break;
  }
  switch(*VAR_7) {
  case '+':
   if (!*(VAR_7+1)) {
    VAR_13 = 1;
    break;
   }
   if (*(VAR_7+1) == '@')
    VAR_13 = FUNC_4(VAR_7+2, ((void*)0), (char *)VAR_6,
       ((void*)0));
   else
    VAR_13 = !(FUNC_7(VAR_6, VAR_7+1));
   break;
  case '-':
   if (VAR_14) {
    if (!*(VAR_7+1))
     return(-1);
    if (*(VAR_7+1) == '@') {
     if (FUNC_4(VAR_7+2, ((void*)0),
          (char *)VAR_6, ((void*)0)))
      return(-1);
    } else {
     if (!FUNC_7(VAR_6, VAR_7+1))
      return(-1);
    }
   }
   break;
  default:
   if (VAR_14)
    VAR_13 = !(FUNC_7(VAR_6,*VAR_7 ? VAR_7 : VAR_5));
   break;
  }
  if (VAR_14 && VAR_13)
   return(0);
 }
 return (-1);
}
