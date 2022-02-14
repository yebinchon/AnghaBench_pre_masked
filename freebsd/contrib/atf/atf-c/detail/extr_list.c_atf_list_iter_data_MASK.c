
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list_entry {void* m_object; } ;
struct TYPE_3__ {struct list_entry* m_entry; } ;
typedef TYPE_1__ atf_list_iter_t ;


 int FUNC_0 (int ) ;

void *
FUNC_1(const atf_list_iter_t VAR_0)
{
    const struct list_entry *VAR_1 = VAR_0.m_entry;
    FUNC_0(VAR_1 != ((void*)0));
    return VAR_1->m_object;
}
