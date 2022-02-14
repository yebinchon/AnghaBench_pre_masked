
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_list {int len; int addr; struct sock_list* next; } ;
struct regional {int dummy; } ;


 int FUNC_0 (struct sock_list*,int *,int ) ;
 int FUNC_1 (struct sock_list**,int *,int ,struct regional*) ;

void FUNC_2(struct sock_list** VAR_0, struct regional* VAR_1,
 struct sock_list* VAR_2)
{
 struct sock_list* VAR_3;
 for(VAR_3=VAR_2; VAR_3; VAR_3=VAR_3->next) {
  if(!FUNC_0(*VAR_0, &VAR_3->addr, VAR_3->len))
   FUNC_1(VAR_0, &VAR_3->addr, VAR_3->len, VAR_1);
 }
}
