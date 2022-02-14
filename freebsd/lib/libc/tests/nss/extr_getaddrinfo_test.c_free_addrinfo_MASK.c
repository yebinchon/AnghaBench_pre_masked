
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {struct addrinfo* ai_next; int ai_canonname; int ai_addr; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct addrinfo *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_0(VAR_0->ai_addr);
 FUNC_0(VAR_0->ai_canonname);
 FUNC_1(VAR_0->ai_next);
}
