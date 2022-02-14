
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_flags; int ai_family; int ai_socktype; int ai_protocol; int * ai_next; void* ai_addr; int * ai_canonname; scalar_t__ ai_addrlen; } ;
typedef scalar_t__ socklen_t ;
typedef int nvlist_t ;


 int FUNC_0 (void const*,void*,size_t) ;
 char* FUNC_1 (int const*,char*,int *) ;
 int FUNC_2 (struct addrinfo*) ;
 struct addrinfo* FUNC_3 (int) ;
 void* FUNC_4 (int const*,char*,size_t*) ;
 scalar_t__ FUNC_5 (int const*,char*) ;
 int * FUNC_6 (char const*) ;

__attribute__((used)) static struct addrinfo *
FUNC_7(const nvlist_t *VAR_0)
{
 struct addrinfo *VAR_1;
 const void *VAR_2;
 size_t VAR_3;
 const char *VAR_4;

 VAR_2 = FUNC_4(VAR_0, "ai_addr", &VAR_3);
 VAR_1 = FUNC_3(sizeof(*VAR_1) + VAR_3);
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 VAR_1->ai_flags = (int)FUNC_5(VAR_0, "ai_flags");
 VAR_1->ai_family = (int)FUNC_5(VAR_0, "ai_family");
 VAR_1->ai_socktype = (int)FUNC_5(VAR_0, "ai_socktype");
 VAR_1->ai_protocol = (int)FUNC_5(VAR_0, "ai_protocol");
 VAR_1->ai_addrlen = (socklen_t)VAR_3;
 VAR_4 = FUNC_1(VAR_0, "ai_canonname", ((void*)0));
 if (VAR_4 != ((void*)0)) {
  VAR_1->ai_canonname = FUNC_6(VAR_4);
  if (VAR_1->ai_canonname == ((void*)0)) {
   FUNC_2(VAR_1);
   return (((void*)0));
  }
 } else {
  VAR_1->ai_canonname = ((void*)0);
 }
 VAR_1->ai_addr = (void *)(VAR_1 + 1);
 FUNC_0(VAR_2, VAR_1->ai_addr, VAR_3);
 VAR_1->ai_next = ((void*)0);

 return (VAR_1);
}
