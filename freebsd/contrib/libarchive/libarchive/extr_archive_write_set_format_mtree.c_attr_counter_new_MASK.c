
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_entry {int dummy; } ;
struct attr_counter {int count; struct mtree_entry* m_entry; int * next; struct attr_counter* prev; } ;


 struct attr_counter* FUNC_0 (int) ;

__attribute__((used)) static struct attr_counter *
FUNC_1(struct mtree_entry *VAR_0, struct attr_counter *VAR_1)
{
 struct attr_counter *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2));
 if (VAR_2 != ((void*)0)) {
  VAR_2->prev = VAR_1;
  VAR_2->next = ((void*)0);
  VAR_2->count = 1;
  VAR_2->m_entry = VAR_0;
 }
 return (VAR_2);
}
