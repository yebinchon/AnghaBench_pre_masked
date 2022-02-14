
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct addrinfo {int ai_addrlen; struct addrinfo const* ai_next; struct addrinfo const* ai_addr; int * ai_canonname; } const addrinfo ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct addrinfo const*,struct addrinfo const*,int) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct addrinfo *VAR_0, struct addrinfo const *VAR_1)
{

 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 != ((void*)0));

 FUNC_2(VAR_0, VAR_1, sizeof(struct addrinfo));
 if (VAR_1->ai_canonname != ((void*)0))
  VAR_0->ai_canonname = FUNC_3(VAR_1->ai_canonname);

 if (VAR_1->ai_addr != ((void*)0)) {
  VAR_0->ai_addr = FUNC_1(VAR_1->ai_addrlen);
  FUNC_0(VAR_0->ai_addr != ((void*)0));
  FUNC_2(VAR_0->ai_addr, VAR_1->ai_addr, VAR_1->ai_addrlen);
 }

 if (VAR_1->ai_next != ((void*)0)) {
  VAR_0->ai_next = FUNC_1(sizeof(struct addrinfo));
  FUNC_0(VAR_0->ai_next != ((void*)0));
  FUNC_4(VAR_0->ai_next, VAR_1->ai_next);
 }
}
