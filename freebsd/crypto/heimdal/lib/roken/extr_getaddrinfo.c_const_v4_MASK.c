
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct sockaddr_in {int sin_port; struct in_addr sin_addr; int sin_family; } ;
struct addrinfo {int ai_addrlen; int * ai_addr; int ai_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (struct sockaddr_in*,int ,int) ;

__attribute__((used)) static int
FUNC_2 (struct addrinfo *VAR_3, void *VAR_4, int VAR_5)
{
    struct sockaddr_in *VAR_6;
    struct in_addr *VAR_7 = (struct in_addr *)VAR_4;

    VAR_3->ai_family = VAR_2;
    VAR_3->ai_addrlen = sizeof(*VAR_6);
    VAR_3->ai_addr = FUNC_0 (sizeof(*VAR_6));
    if (VAR_3->ai_addr == ((void*)0))
 return VAR_1;
    VAR_6 = (struct sockaddr_in *)VAR_3->ai_addr;
    FUNC_1 (VAR_6, 0, sizeof(*VAR_6));
    VAR_6->sin_family = VAR_0;
    VAR_6->sin_port = VAR_5;
    VAR_6->sin_addr = *VAR_7;
    return 0;
}
