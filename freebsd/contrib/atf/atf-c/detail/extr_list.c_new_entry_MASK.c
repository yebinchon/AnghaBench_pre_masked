
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_entry {int m_managed; void* m_object; int * m_next; int m_prev; } ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static
struct list_entry *
FUNC_2(void *VAR_0, bool VAR_1)
{
    struct list_entry *VAR_2;

    VAR_2 = (struct list_entry *)FUNC_1(sizeof(*VAR_2));
    if (VAR_2 != ((void*)0)) {
        VAR_2->m_prev = *(VAR_2->m_next = ((void*)0));
        VAR_2->m_object = VAR_0;
        VAR_2->m_managed = VAR_1;
    } else
        FUNC_0(VAR_0);

    return VAR_2;
}
