
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_list {struct ip_list* next; scalar_t__ used; } ;



__attribute__((used)) static void
FUNC_0(struct ip_list* VAR_0)
{
 while(VAR_0) {
  VAR_0->used = 0;
  VAR_0 = VAR_0->next;
 }
}
