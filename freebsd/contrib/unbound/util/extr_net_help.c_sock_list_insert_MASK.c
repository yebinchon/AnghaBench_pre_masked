
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sock_list {int addr; scalar_t__ len; struct sock_list* next; } ;
struct regional {int dummy; } ;
typedef scalar_t__ socklen_t ;


 int FUNC_0 (struct sock_list**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,struct sockaddr_storage*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct regional*,int) ;

void FUNC_4(struct sock_list** VAR_0, struct sockaddr_storage* VAR_1,
 socklen_t VAR_2, struct regional* VAR_3)
{
 struct sock_list* VAR_4 = (struct sock_list*)FUNC_3(VAR_3,
  sizeof(*VAR_4) - sizeof(VAR_4->addr) + (size_t)VAR_2);
 if(!VAR_4) {
  FUNC_1("out of memory in socketlist insert");
  return;
 }
 FUNC_0(VAR_0);
 VAR_4->next = *VAR_0;
 VAR_4->len = VAR_2;
 *VAR_0 = VAR_4;
 if(VAR_2) FUNC_2(&VAR_4->addr, VAR_1, VAR_2);
}
