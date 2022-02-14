
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_entry {struct list_entry* m_prev; struct list_entry* m_next; } ;


 struct list_entry* FUNC_0 (void*,int) ;

__attribute__((used)) static
struct list_entry *
FUNC_1(void *VAR_0, bool VAR_1, struct list_entry *VAR_2,
                   struct list_entry *VAR_3)
{
    struct list_entry *VAR_4;

    VAR_4 = FUNC_0(VAR_0, VAR_1);
    if (VAR_4 != ((void*)0)) {
        VAR_4->m_prev = VAR_2;
        VAR_4->m_next = VAR_3;

        VAR_2->m_next = VAR_4;
        VAR_3->m_prev = VAR_4;
    }

    return VAR_4;
}
