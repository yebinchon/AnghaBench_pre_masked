
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct port_list {int count; scalar_t__* ports; struct port_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct port_list* FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline void FUNC_2(struct port_list *VAR_2, u32 VAR_3)
{
 struct port_list *VAR_4 = VAR_2;
 int VAR_5;
 int VAR_6 = VAR_1;
 int VAR_7 = VAR_2->count;

 for (; ; VAR_7 -= VAR_6, VAR_4 = VAR_4->next) {
  if (VAR_7 < VAR_1)
   VAR_6 = VAR_7;
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
   if (VAR_4->ports[VAR_5] == VAR_3)
    return;
  if (VAR_5 < VAR_1) {
   VAR_4->ports[VAR_5] = VAR_3;
   VAR_2->count++;
   return;
  }
  if (!VAR_4->next) {
   VAR_4->next = FUNC_0(sizeof(*VAR_4), VAR_0);
   if (!VAR_4->next) {
    FUNC_1("Incomplete multicast delivery, no memory\n");
    return;
   }
   VAR_4->next->next = ((void*)0);
  }
 }
}
