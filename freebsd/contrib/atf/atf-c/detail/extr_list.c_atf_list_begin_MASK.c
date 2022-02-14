
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct list_entry {int m_next; } ;
struct TYPE_4__ {struct list_entry* m_begin; } ;
typedef TYPE_1__ atf_list_t ;
typedef int atf_list_iter_t ;


 int FUNC_0 (TYPE_1__*,int ) ;

atf_list_iter_t
FUNC_1(atf_list_t *VAR_0)
{
    struct list_entry *VAR_1 = VAR_0->m_begin;
    return FUNC_0(VAR_0, VAR_1->m_next);
}
