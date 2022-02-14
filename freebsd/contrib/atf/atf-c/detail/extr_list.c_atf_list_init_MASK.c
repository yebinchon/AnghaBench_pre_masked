
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list_entry {struct list_entry* m_prev; struct list_entry* m_next; } ;
struct TYPE_3__ {struct list_entry* m_end; struct list_entry* m_begin; scalar_t__ m_size; } ;
typedef TYPE_1__ atf_list_t ;
typedef int atf_error_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct list_entry*) ;
 struct list_entry* FUNC_3 (int *,int) ;

atf_error_t
FUNC_4(atf_list_t *VAR_0)
{
    struct list_entry *VAR_1, *VAR_2;

    VAR_1 = FUNC_3(((void*)0), 0);
    if (VAR_1 == ((void*)0)) {
        return FUNC_1();
    }

    VAR_2 = FUNC_3(((void*)0), 0);
    if (VAR_2 == ((void*)0)) {
        FUNC_2(VAR_1);
        return FUNC_1();
    }

    VAR_1->m_next = VAR_2;
    VAR_1->m_prev = ((void*)0);

    VAR_2->m_next = ((void*)0);
    VAR_2->m_prev = VAR_1;

    VAR_0->m_size = 0;
    VAR_0->m_begin = VAR_1;
    VAR_0->m_end = VAR_2;

    return FUNC_0();
}
