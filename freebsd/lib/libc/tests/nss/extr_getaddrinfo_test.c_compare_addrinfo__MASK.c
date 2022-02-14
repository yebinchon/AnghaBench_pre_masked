
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {scalar_t__ ai_flags; scalar_t__ ai_family; scalar_t__ ai_socktype; scalar_t__ ai_protocol; scalar_t__ ai_addrlen; struct addrinfo* ai_next; int * ai_addr; int * ai_canonname; } ;


 scalar_t__ FUNC_0 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct addrinfo *VAR_0, struct addrinfo *VAR_1)
{

 if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)))
  return (-1);

 if (VAR_0->ai_flags != VAR_1->ai_flags ||
     VAR_0->ai_family != VAR_1->ai_family ||
     VAR_0->ai_socktype != VAR_1->ai_socktype ||
     VAR_0->ai_protocol != VAR_1->ai_protocol ||
     VAR_0->ai_addrlen != VAR_1->ai_addrlen ||
     ((VAR_0->ai_addr == ((void*)0) || VAR_1->ai_addr == ((void*)0)) &&
      VAR_0->ai_addr != VAR_1->ai_addr) ||
     ((VAR_0->ai_canonname == ((void*)0) || VAR_1->ai_canonname == ((void*)0)) &&
      VAR_0->ai_canonname != VAR_1->ai_canonname))
  return (-1);

 if (VAR_0->ai_canonname != ((void*)0) &&
     FUNC_1(VAR_0->ai_canonname, VAR_1->ai_canonname) != 0)
  return (-1);

 if (VAR_0->ai_addr != ((void*)0) &&
     FUNC_0(VAR_0->ai_addr, VAR_1->ai_addr, VAR_0->ai_addrlen) != 0)
  return (-1);

 if (VAR_0->ai_next == ((void*)0) && VAR_1->ai_next == ((void*)0))
  return (0);
 else
  return (FUNC_2(VAR_0->ai_next, VAR_1->ai_next));
}
