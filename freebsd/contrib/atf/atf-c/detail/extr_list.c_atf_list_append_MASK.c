
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list_entry {struct list_entry* m_prev; } ;
struct TYPE_3__ {int m_size; scalar_t__ m_end; } ;
typedef TYPE_1__ atf_list_t ;
typedef int atf_error_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct list_entry* FUNC_2 (void*,int,struct list_entry*,struct list_entry*) ;

atf_error_t
FUNC_3(atf_list_t *VAR_0, void *VAR_1, bool VAR_2)
{
    struct list_entry *VAR_3, *VAR_4, *VAR_5;
    atf_error_t VAR_6;

    VAR_4 = (struct list_entry *)VAR_0->m_end;
    VAR_5 = VAR_4->m_prev;
    VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_5, VAR_4);
    if (VAR_3 == ((void*)0))
        VAR_6 = FUNC_1();
    else {
        VAR_0->m_size++;
        VAR_6 = FUNC_0();
    }

    return VAR_6;
}
