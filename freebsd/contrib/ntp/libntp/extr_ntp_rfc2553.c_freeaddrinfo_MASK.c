
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {struct addrinfo* ai_addr; struct addrinfo* ai_canonname; } ;


 int FUNC_0 (struct addrinfo*) ;

void
FUNC_1(struct addrinfo *VAR_0)
{
 if (VAR_0->ai_canonname != ((void*)0))
 {
  FUNC_0(VAR_0->ai_canonname);
  VAR_0->ai_canonname = ((void*)0);
 }
 if (VAR_0->ai_addr != ((void*)0))
 {
  FUNC_0(VAR_0->ai_addr);
  VAR_0->ai_addr = ((void*)0);
 }
 FUNC_0(VAR_0);
 VAR_0 = ((void*)0);
}
