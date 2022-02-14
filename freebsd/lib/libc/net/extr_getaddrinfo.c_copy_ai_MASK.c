
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct sockaddr {int ai_addrlen; int * ai_next; int * ai_canonname; struct sockaddr const* ai_addr; } const sockaddr ;
typedef struct addrinfo {int ai_addrlen; int * ai_next; int * ai_canonname; struct addrinfo const* ai_addr; } const addrinfo ;


 struct sockaddr const* FUNC_0 (int,size_t) ;
 int FUNC_1 (struct sockaddr const*) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (struct sockaddr const*,struct sockaddr const*,int) ;
 int FUNC_4 (int *,int *,size_t) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct addrinfo *
FUNC_6(const struct addrinfo *VAR_0)
{
 struct addrinfo *VAR_1;
 size_t VAR_2;

 VAR_2 = sizeof(*VAR_1) + VAR_0->ai_addrlen;
 if ((VAR_1 = FUNC_0(1, VAR_2)) == ((void*)0))
  return ((void*)0);
 FUNC_3(VAR_1, VAR_0, sizeof(*VAR_1));
 VAR_1->ai_addr = (struct sockaddr *)(void *)(VAR_1 + 1);
 FUNC_3(VAR_1->ai_addr, VAR_0->ai_addr, VAR_0->ai_addrlen);

 if (VAR_0->ai_canonname) {
  VAR_2 = FUNC_5(VAR_0->ai_canonname) + 1;
  if ((VAR_1->ai_canonname = FUNC_2(VAR_2)) == ((void*)0)) {
   FUNC_1(VAR_1);
   return ((void*)0);
  }
  FUNC_4(VAR_1->ai_canonname, VAR_0->ai_canonname, VAR_2);
 } else {

  VAR_1->ai_canonname = ((void*)0);
 }

 VAR_1->ai_next = ((void*)0);

 return VAR_1;
}
