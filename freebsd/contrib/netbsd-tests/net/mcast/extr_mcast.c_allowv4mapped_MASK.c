
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zero ;
struct sockaddr_in6 {int sin6_addr; } ;
struct addrinfo {scalar_t__ ai_family; scalar_t__ ai_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ,int*,int) ;

__attribute__((used)) static int
FUNC_2(int VAR_3, struct addrinfo *VAR_4)
{
 struct sockaddr_in6 *VAR_5;
 int VAR_6 = 0;

 if (VAR_4->ai_family != VAR_0)
  return 0;

 VAR_5 = (void *)VAR_4->ai_addr;

 if (!FUNC_0(&VAR_5->sin6_addr))
  return 0;
 return FUNC_1(VAR_3, VAR_1, VAR_2, &VAR_6, sizeof(VAR_6));
}
