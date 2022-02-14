
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list_entry {struct list_entry* m_next; } ;
struct TYPE_3__ {int m_size; scalar_t__ m_begin; } ;
typedef TYPE_1__ atf_list_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct list_entry*) ;

void
FUNC_2(atf_list_t *VAR_0)
{
    struct list_entry *VAR_1;
    size_t VAR_2;

    VAR_1 = (struct list_entry *)VAR_0->m_begin;
    VAR_2 = 0;
    while (VAR_1 != ((void*)0)) {
        struct list_entry *VAR_3;

        VAR_3 = VAR_1->m_next;
        FUNC_1(VAR_1);
        VAR_1 = VAR_3;

        VAR_2++;
    }
    FUNC_0(VAR_2 == VAR_0->m_size + 2);
}
