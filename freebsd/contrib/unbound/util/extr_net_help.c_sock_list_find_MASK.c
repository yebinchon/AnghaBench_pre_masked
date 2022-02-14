
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sock_list {scalar_t__ len; struct sock_list* next; int addr; } ;
typedef scalar_t__ socklen_t ;


 scalar_t__ FUNC_0 (struct sockaddr_storage*,scalar_t__,int *,scalar_t__) ;

int FUNC_1(struct sock_list* VAR_0, struct sockaddr_storage* VAR_1,
        socklen_t VAR_2)
{
 while(VAR_0) {
  if(VAR_2 == VAR_0->len) {
   if(VAR_2 == 0 || FUNC_0(VAR_1, VAR_2,
    &VAR_0->addr, VAR_0->len) == 0)
    return 1;
  }
  VAR_0 = VAR_0->next;
 }
 return 0;
}
