
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_entry {struct list_entry* m_object; scalar_t__ m_managed; } ;


 int FUNC_0 (struct list_entry*) ;

__attribute__((used)) static
void
FUNC_1(struct list_entry *VAR_0)
{
    if (VAR_0->m_managed)
        FUNC_0(VAR_0->m_object);

    FUNC_0(VAR_0);
}
