
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct list_entry {struct list_entry* m_prev; struct list_entry* m_next; } ;
struct TYPE_4__ {scalar_t__ m_size; scalar_t__ m_end; scalar_t__ m_begin; } ;
typedef TYPE_1__ atf_list_t ;


 int FUNC_0 (struct list_entry*) ;

void
FUNC_1(atf_list_t *VAR_0, atf_list_t *VAR_1)
{
    struct list_entry *VAR_2, *VAR_3, *VAR_4, *VAR_5;

    VAR_4 = (struct list_entry *)VAR_0->m_end;
    VAR_5 = (struct list_entry *)VAR_1->m_begin;

    VAR_2 = VAR_4->m_prev;
    VAR_3 = VAR_5->m_next;

    FUNC_0(VAR_4);
    FUNC_0(VAR_5);

    VAR_2->m_next = VAR_3;
    VAR_3->m_prev = VAR_2;

    VAR_0->m_end = VAR_1->m_end;
    VAR_0->m_size += VAR_1->m_size;
}
