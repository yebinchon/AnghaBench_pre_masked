
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct ifaddrs {int ifa_flags; int ifa_name; TYPE_2__* ifa_addr; struct ifaddrs* ifa_next; } ;
struct addrinfo {int ai_family; } ;
struct TYPE_4__ {int sa_family; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct ifaddrs*) ;
 scalar_t__ FUNC_3 (struct ifaddrs**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct addrinfo *VAR_3)
{
 struct ifaddrs *VAR_4, *VAR_5;
 struct sockaddr_in *VAR_6;



 int VAR_7 = 0, VAR_8 = 0;

 if (FUNC_3(&VAR_4) != 0)
  return (0);

 for (VAR_5 = VAR_4; VAR_5 != ((void*)0); VAR_5 = VAR_5->ifa_next) {
  if (VAR_5->ifa_addr == ((void*)0) || (VAR_5->ifa_flags & VAR_0) == 0)
   continue;
  switch (VAR_5->ifa_addr->sa_family) {
  case 130:
   if (VAR_7)
    continue;
   VAR_6 = (struct sockaddr_in *)(VAR_5->ifa_addr);
   if (FUNC_4(VAR_6->sin_addr.s_addr) == VAR_2)
    continue;
   VAR_7 = 1;
   break;
  }
 }
 FUNC_2(VAR_4);

 switch(VAR_3->ai_family) {
 case 129:
  return (VAR_8);
 case 130:
  return (VAR_7);
 case 128:
  if (VAR_7 == VAR_8)
   return (VAR_7);
  VAR_3->ai_family = VAR_7 ? 130 : 129;
  return (1);
 }
 return (1);
}
