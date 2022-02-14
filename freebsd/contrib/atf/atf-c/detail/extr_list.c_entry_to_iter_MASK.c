
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list_entry {int dummy; } ;
typedef int atf_list_t ;
struct TYPE_3__ {struct list_entry* m_entry; int * m_list; } ;
typedef TYPE_1__ atf_list_iter_t ;



__attribute__((used)) static
atf_list_iter_t
FUNC_0(atf_list_t *VAR_0, struct list_entry *VAR_1)
{
    atf_list_iter_t VAR_2;
    VAR_2.m_list = VAR_0;
    VAR_2.m_entry = VAR_1;
    return VAR_2;
}
