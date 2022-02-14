
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; } ;
typedef int sockaddr_u ;
typedef int s ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int,int ) ;
 char* FUNC_3 (int *) ;

char *
FUNC_4 (
 const struct addrinfo *VAR_0
 )
{
 sockaddr_u VAR_1;

 FUNC_0(VAR_1);
 FUNC_1(&VAR_1, VAR_0->ai_addr, FUNC_2(sizeof(VAR_1), VAR_0->ai_addrlen));

 return FUNC_3(&VAR_1);
}
