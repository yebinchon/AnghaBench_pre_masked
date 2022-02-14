
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct addrinfo {int ai_addrlen; scalar_t__ ai_protocol; scalar_t__ ai_socktype; struct sockaddr* ai_addr; int ai_family; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct addrinfo* FUNC_0 (int,int) ;

__attribute__((used)) static struct
addrinfo *FUNC_1(int VAR_2, u_long VAR_3, const struct addrinfo *VAR_4)
{
 struct addrinfo *VAR_5;

 VAR_5 = FUNC_0(1, sizeof(*VAR_5) + sizeof(struct sockaddr_in));
 if (VAR_5 == ((void*)0))
  return (((void*)0));

 VAR_5->ai_addr = (struct sockaddr *)(VAR_5 + 1);

 VAR_5->ai_addrlen = sizeof(struct sockaddr_in);
 VAR_5->ai_addr->sa_family = VAR_5->ai_family = VAR_0;

 ((struct sockaddr_in *)(VAR_5)->ai_addr)->sin_port = VAR_2;
 ((struct sockaddr_in *)(VAR_5)->ai_addr)->sin_addr.s_addr = VAR_3;


 if (VAR_4->ai_socktype)
  VAR_5->ai_socktype = VAR_4->ai_socktype;
 else
  VAR_5->ai_socktype = VAR_1;

 if (VAR_4->ai_protocol)
  VAR_5->ai_protocol = VAR_4->ai_protocol;

 return (VAR_5);
}
