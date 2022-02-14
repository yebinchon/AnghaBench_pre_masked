
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {scalar_t__ ai_flags; scalar_t__ ai_family; scalar_t__ ai_socktype; scalar_t__ ai_protocol; scalar_t__ ai_addrlen; struct addrinfo* ai_next; int * ai_canonname; int ai_addr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static bool
FUNC_4(struct addrinfo *VAR_1, struct addrinfo *VAR_2)
{
 struct addrinfo *VAR_3, *VAR_4;

 if (VAR_1 == ((void*)0) && VAR_2 == ((void*)0))
  return (1);
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return (0);

 VAR_3 = VAR_1;
 VAR_4 = VAR_2;
 while (1) {
  if ((VAR_3->ai_flags == VAR_4->ai_flags) &&
      (VAR_3->ai_family == VAR_4->ai_family) &&
      (VAR_3->ai_socktype == VAR_4->ai_socktype) &&
      (VAR_3->ai_protocol == VAR_4->ai_protocol) &&
      (VAR_3->ai_addrlen == VAR_4->ai_addrlen) &&
      (FUNC_2(VAR_3->ai_addr, VAR_4->ai_addr,
   VAR_3->ai_addrlen) == 0)) {
   if (VAR_3->ai_canonname != ((void*)0) &&
       VAR_4->ai_canonname != ((void*)0)) {
    if (FUNC_3(VAR_3->ai_canonname,
        VAR_4->ai_canonname) != 0) {
     return (0);
    }
   }

   if (VAR_3->ai_canonname == ((void*)0) &&
       VAR_4->ai_canonname != ((void*)0)) {
    return (0);
   }
   if (VAR_3->ai_canonname != ((void*)0) &&
       VAR_4->ai_canonname == ((void*)0)) {
    return (0);
   }

   if (VAR_3->ai_next == ((void*)0) && VAR_4->ai_next == ((void*)0))
    return (1);
   if (VAR_3->ai_next == ((void*)0) || VAR_4->ai_next == ((void*)0))
    return (0);

   VAR_3 = VAR_3->ai_next;
   VAR_4 = VAR_4->ai_next;
  } else {
   return (0);
  }
 }


 FUNC_1(VAR_0, "Dead code reached in addrinfo_compare()\n");
 FUNC_0(1);
}
