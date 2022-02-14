
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_list {struct ip_list* next; int used; } ;



__attribute__((used)) static int
FUNC_0(struct ip_list* VAR_0)
{
 int VAR_1 = 0;
 while(VAR_0) {
  if(!VAR_0->used) VAR_1++;
  VAR_0 = VAR_0->next;
 }
 return VAR_1;
}
