
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {scalar_t__ ai_family; scalar_t__ ai_socktype; int ai_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_3 (char*,int,char*,...) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6(const char *VAR_3, const char *VAR_4,
    struct addrinfo *VAR_5, struct addrinfo **VAR_6, char *VAR_7, int VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_9 != 0)
 {




  if (VAR_7)
  {



   FUNC_3(VAR_7, VAR_8, "getaddrinfo() %s", FUNC_1(VAR_9));

  }
  return -1;
 }
 if (((*VAR_6)->ai_family != VAR_0) &&
     ((*VAR_6)->ai_family != VAR_1))
 {
  if (VAR_7)
   FUNC_3(VAR_7, VAR_8, "getaddrinfo(): socket type not supported");
  FUNC_0(*VAR_6);
  *VAR_6 = ((void*)0);
  return -1;
 }




 if (((*VAR_6)->ai_socktype == VAR_2) &&
     (FUNC_5((*VAR_6)->ai_addr) == 0))
 {
  if (VAR_7)
   FUNC_3(VAR_7, VAR_8, "getaddrinfo(): multicast addresses are not valid when using TCP streams");
  FUNC_0(*VAR_6);
  *VAR_6 = ((void*)0);
  return -1;
 }

 return 0;
}
