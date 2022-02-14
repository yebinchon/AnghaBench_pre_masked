
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_lst {char* value; scalar_t__ export; } ;
struct addrinfo {int * ai_canonname; struct addrinfo* ai_next; int ai_flags; } ;
typedef int hints ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,char*,char*) ;
 struct env_lst* FUNC_1 (unsigned char*,unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 struct env_lst* FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char*) ;
 char** VAR_1 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct addrinfo*) ;
 int FUNC_7 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct addrinfo*,int ,int) ;
 scalar_t__ FUNC_10 (char*,char) ;
 int FUNC_11 (char*,int *,int) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;

void
FUNC_13(void)
{
 char **VAR_2, *VAR_3;
 struct env_lst *VAR_4;

 for (VAR_2 = VAR_1; *VAR_2; VAR_2++) {
  if ((VAR_3 = FUNC_10(*VAR_2, '='))) {
   *VAR_3 = '\0';
   VAR_4 = FUNC_1((unsigned char *)*VAR_2,
     (unsigned char *)VAR_3+1);
   VAR_4->export = 0;
   *VAR_3 = '=';
  }
 }





 if ((VAR_4 = FUNC_3((unsigned char*)"DISPLAY"))
     && (*VAR_4->value == ':'
     || FUNC_12((char *)VAR_4->value, "unix:", 5) == 0)) {
  char VAR_5[256+1];
  char *VAR_6 = FUNC_10((char *)VAR_4->value, ':');
  int VAR_7;


  FUNC_8(VAR_5, 256);
  VAR_5[256] = '\0';


  if (FUNC_10(VAR_5, '.') == 0) {
   struct addrinfo VAR_8, *VAR_9, *VAR_10;

   FUNC_9 (&VAR_8, 0, sizeof(VAR_8));
   VAR_8.ai_flags = VAR_0;

   VAR_7 = FUNC_7 (VAR_5, ((void*)0), &VAR_8, &VAR_9);
   if (VAR_7 == 0) {
    for (VAR_10 = VAR_9; VAR_10 != ((void*)0); VAR_10 = VAR_10->ai_next)
     if (VAR_10->ai_canonname != ((void*)0)) {
      FUNC_11 (VAR_5,
        VAR_9->ai_canonname,
        256);
      break;
     }
    FUNC_6 (VAR_9);
   }
  }

  VAR_7 = FUNC_0 (&VAR_3, "%s%s", VAR_5, VAR_6);
  if (VAR_7 != -1) {
      FUNC_5 (VAR_4->value);
      VAR_4->value = (unsigned char *)VAR_3;
  }
 }





 if ((FUNC_3((unsigned char*)"USER") == ((void*)0)) &&
     (VAR_4 = FUNC_3((unsigned char*)"LOGNAME"))) {
  FUNC_1((unsigned char *)"USER", VAR_4->value);
  FUNC_4((unsigned char *)"USER");
 }
 FUNC_2((unsigned char *)"DISPLAY");
 FUNC_2((unsigned char *)"PRINTER");
 FUNC_2((unsigned char *)"XAUTHORITY");
}
