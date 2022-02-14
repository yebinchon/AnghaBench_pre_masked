
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ip_list {struct ip_list* next; scalar_t__ used; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ip_list*) ;

__attribute__((used)) static struct ip_list*
FUNC_2(struct ip_list* VAR_0)
{
 struct ip_list* VAR_1 = VAR_0;
 int VAR_2 = FUNC_1(VAR_0);
 int VAR_3;
 if(VAR_2 == 0) return ((void*)0);

 VAR_3 = (int)FUNC_0((uint32_t)VAR_2);

 while(VAR_3 > 0 && VAR_1) {
  if(!VAR_1->used) VAR_3--;
  VAR_1 = VAR_1->next;
 }

 while(VAR_1 && VAR_1->used)
  VAR_1 = VAR_1->next;
 if(!VAR_1) return ((void*)0);
 return VAR_1;
}
