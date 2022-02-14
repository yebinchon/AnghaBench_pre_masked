
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_list {struct port_list* next; } ;


 int FUNC_0 (struct port_list*) ;

__attribute__((used)) static inline void FUNC_1(struct port_list *VAR_0)
{
 struct port_list *VAR_1;
 struct port_list *VAR_2;

 for (VAR_1 = VAR_0->next; VAR_1; VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
 }
}
