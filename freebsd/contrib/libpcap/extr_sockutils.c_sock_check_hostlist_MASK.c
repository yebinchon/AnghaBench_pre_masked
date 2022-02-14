
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct addrinfo {struct addrinfo* ai_next; scalar_t__ ai_addr; int ai_socktype; int ai_family; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (struct addrinfo*,int ,int) ;
 int FUNC_6 (char*,int,char*,...) ;
 char* FUNC_7 (char*,char const*,char**) ;
 scalar_t__ FUNC_8 (struct sockaddr_storage*,struct sockaddr_storage*) ;
 int FUNC_9 (char*,char*,int) ;
 char* FUNC_10 (char*) ;

int FUNC_11(char *VAR_2, const char *VAR_3, struct sockaddr_storage *VAR_4, char *VAR_5, int VAR_6)
{

 if ((VAR_2) && (VAR_2[0]))
 {
  char *VAR_7;
  struct addrinfo *VAR_8, *VAR_9;
  char *VAR_10;
  char *VAR_11;





  VAR_10 = FUNC_10(VAR_2);
  if (VAR_10 == ((void*)0))
  {
   FUNC_9("sock_check_hostlist(), malloc() failed", VAR_5, VAR_6);
   return -2;
  }

  VAR_7 = FUNC_7(VAR_10, VAR_3, &VAR_11);


  VAR_8 = ((void*)0);

  while (VAR_7 != ((void*)0))
  {
   struct addrinfo VAR_12;
   int VAR_13;

   VAR_8 = ((void*)0);
   FUNC_5(&VAR_12, 0, sizeof(struct addrinfo));
   VAR_12.ai_family = VAR_0;
   VAR_12.ai_socktype = VAR_1;

   VAR_13 = FUNC_4(VAR_7, "0", &VAR_12, &VAR_8);
   if (VAR_13 != 0)
   {
    if (VAR_5)
     FUNC_6(VAR_5, VAR_6, "getaddrinfo() %s", FUNC_3(VAR_13));

    FUNC_0(VAR_5);


    VAR_7 = FUNC_7(((void*)0), VAR_3, &VAR_11);
    continue;
   }


   VAR_9 = VAR_8;
   while (VAR_9)
   {
    if (FUNC_8(VAR_4, (struct sockaddr_storage *) VAR_9->ai_addr) == 0)
    {
     FUNC_1(VAR_10);
     FUNC_2(VAR_8);
     return 0;
    }





    VAR_9 = VAR_9->ai_next;
   }

   FUNC_2(VAR_8);
   VAR_8 = ((void*)0);


   VAR_7 = FUNC_7(((void*)0), VAR_3, &VAR_11);
  }

  if (VAR_8)
  {
   FUNC_2(VAR_8);
   VAR_8 = ((void*)0);
  }

  if (VAR_5)
   FUNC_6(VAR_5, VAR_6, "The host is not in the allowed host list. Connection refused.");

  FUNC_1(VAR_10);
  return -1;
 }


 return 1;
}
