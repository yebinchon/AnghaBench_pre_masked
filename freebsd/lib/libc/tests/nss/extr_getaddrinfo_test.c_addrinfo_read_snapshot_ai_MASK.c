
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_flags; int ai_addrlen; int * ai_addr; int * ai_canonname; } ;
typedef int socklen_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned char*,int ) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (struct addrinfo*,int ,int) ;
 int FUNC_5 (char*,char*) ;
 int * FUNC_6 (char*) ;
 char* FUNC_7 (char**,char*) ;
 scalar_t__ FUNC_8 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_9(struct addrinfo *VAR_0, char *VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4;
 int VAR_5, VAR_6, *VAR_7;

 VAR_6 = 0;
 VAR_5 = 0;
 VAR_3 = VAR_1;
 FUNC_4(VAR_0, 0, sizeof(struct addrinfo));
 while ((VAR_2 = FUNC_7(&VAR_3, " ")) != ((void*)0)) {
  switch (VAR_5) {
  case 0:
  case 1:
  case 2:
  case 3:
   VAR_7 = &VAR_0->ai_flags + VAR_5;
   *VAR_7 = (int)FUNC_8(VAR_2, &VAR_4, 10);
   if (*VAR_4 != '\0')
    goto fin;
   break;
  case 4:
   VAR_0->ai_addrlen = (socklen_t)FUNC_8(VAR_2, &VAR_4, 10);
   if (*VAR_4 != '\0')
    goto fin;
   break;
  case 5:
   if (FUNC_5(VAR_2, "(null)") != 0) {
    VAR_0->ai_canonname = FUNC_6(VAR_2);
    FUNC_0(VAR_0->ai_canonname != ((void*)0));
   }
   break;
  case 6:
   if (FUNC_5(VAR_2, "(null)") != 0) {
    VAR_0->ai_addr = FUNC_2(1, VAR_0->ai_addrlen);
    FUNC_0(VAR_0->ai_addr != ((void*)0));
    VAR_6 = FUNC_1(VAR_2,
        (unsigned char *)VAR_0->ai_addr,
        VAR_0->ai_addrlen);

    if (VAR_6 != 0)
     goto fin;
   }
   break;
  default:

   VAR_6 = -1;
   goto fin;
  }

  ++VAR_5;
 }

fin:
 if (VAR_5 != 7 || VAR_6 != 0) {
  FUNC_3(VAR_0);
  VAR_0 = ((void*)0);
  return (-1);
 }

 return (0);
}
