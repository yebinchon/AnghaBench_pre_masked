
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct auth_addr {int addrlen; int addr; struct auth_addr* next; } ;
typedef int socklen_t ;


 scalar_t__ FUNC_0 (struct sockaddr_storage*,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct auth_addr* VAR_0, struct sockaddr_storage* VAR_1,
 socklen_t VAR_2)
{
 struct auth_addr* VAR_3;
 for(VAR_3=VAR_0; VAR_3; VAR_3=VAR_3->next) {
  if(FUNC_0(VAR_1, VAR_2, &VAR_3->addr, VAR_3->addrlen)==0)
   return 1;
 }
 return 0;
}
