
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dl_list {struct dl_list* prev; struct dl_list* next; } ;



__attribute__((used)) static inline void FUNC_0(struct dl_list *VAR_0)
{
 VAR_0->next = VAR_0;
 VAR_0->prev = VAR_0;
}
