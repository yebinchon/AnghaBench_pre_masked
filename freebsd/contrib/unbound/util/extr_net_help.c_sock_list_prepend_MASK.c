
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_list {struct sock_list* next; } ;



void FUNC_0(struct sock_list** VAR_0, struct sock_list* VAR_1)
{
 struct sock_list* VAR_2 = VAR_1;
 if(!VAR_2)
  return;
 while(VAR_2->next)
  VAR_2 = VAR_2->next;
 VAR_2->next = *VAR_0;
 *VAR_0 = VAR_1;
}
