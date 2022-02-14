
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int sin_len; int sin6_len; int sin6_addr; void* sin6_port; scalar_t__ sin6_family; int sin_addr; void* sin_port; scalar_t__ sin_family; } ;
struct sockaddr_in6 {int sin_len; int sin6_len; int sin6_addr; void* sin6_port; scalar_t__ sin6_family; int sin_addr; void* sin_port; scalar_t__ sin_family; } ;
struct sockaddr_in {int sin_len; int sin6_len; int sin6_addr; void* sin6_port; scalar_t__ sin6_family; int sin_addr; void* sin_port; scalar_t__ sin_family; } ;
struct sockaddr {int dummy; } ;
struct sa_port_ent {scalar_t__ safamily; scalar_t__ parse; int addr; int port; } ;
typedef int ss ;
typedef int sin6 ;
typedef int sin ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 (scalar_t__,struct sockaddr*,int*) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sockaddr_storage*,struct sockaddr_storage*,int) ;
 int FUNC_5 (struct sockaddr_storage*,int ,int) ;
 struct sa_port_ent* VAR_2 ;

__attribute__((used)) static void
FUNC_6(void *VAR_3)
{
 struct sockaddr_storage VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_2[VAR_5].parse; ++VAR_5) {
  struct sa_port_ent *VAR_7 = &VAR_2[VAR_5];
  int VAR_8 = sizeof(VAR_4);
  FUNC_5(&VAR_4, 0, sizeof(VAR_4));
  VAR_6 = FUNC_2(VAR_7->parse, (struct sockaddr*)&VAR_4, &VAR_8);
  if (VAR_6 < 0) {
   if (VAR_7->safamily)
    FUNC_0(("Couldn't parse %s!", VAR_7->parse));
   continue;
  } else if (! VAR_7->safamily) {
   FUNC_0(("Shouldn't have been able to parse %s!", VAR_7->parse));
   continue;
  }
  if (VAR_7->safamily == VAR_0) {
   struct sockaddr_in VAR_9;
   FUNC_5(&VAR_9, 0, sizeof(VAR_9));



   VAR_9.sin_family = VAR_0;
   VAR_9.sin_port = FUNC_3(VAR_7->port);
   VAR_6 = FUNC_1(VAR_0, VAR_7->addr, &VAR_9.sin_addr);
   if (1 != VAR_6) {
    FUNC_0(("Couldn't parse ipv4 target %s.", VAR_7->addr));
   } else if (FUNC_4(&VAR_9, &VAR_4, sizeof(VAR_9))) {
    FUNC_0(("Parse for %s was not as expected.", VAR_7->parse));
   } else if (VAR_8 != sizeof(VAR_9)) {
    FUNC_0(("Length for %s not as expected.",VAR_7->parse));
   }
  } else {
   struct sockaddr_in6 VAR_10;
   FUNC_5(&VAR_10, 0, sizeof(VAR_10));



   VAR_10 = VAR_1;
   VAR_10 = FUNC_3(VAR_7->port);
   VAR_6 = FUNC_1(VAR_1, VAR_7->addr, &VAR_10);
   if (1 != VAR_6) {
    FUNC_0(("Couldn't parse ipv6 target %s.", VAR_7->addr));
   } else if (FUNC_4(&VAR_10, &VAR_4, sizeof(VAR_10))) {
    FUNC_0(("Parse for %s was not as expected.", VAR_7->parse));
   } else if (VAR_8 != sizeof(VAR_10)) {
    FUNC_0(("Length for %s not as expected.",VAR_7->parse));
   }
  }
 }
}
