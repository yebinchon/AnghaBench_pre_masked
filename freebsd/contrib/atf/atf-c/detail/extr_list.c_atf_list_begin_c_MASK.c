
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct list_entry {int m_next; } ;
struct TYPE_4__ {struct list_entry* m_begin; } ;
typedef TYPE_1__ atf_list_t ;
typedef int atf_list_citer_t ;


 int FUNC_0 (TYPE_1__ const*,int ) ;

atf_list_citer_t
FUNC_1(const atf_list_t *VAR_0)
{
    const struct list_entry *VAR_1 = VAR_0->m_begin;
    return FUNC_0(VAR_0, VAR_1->m_next);
}
