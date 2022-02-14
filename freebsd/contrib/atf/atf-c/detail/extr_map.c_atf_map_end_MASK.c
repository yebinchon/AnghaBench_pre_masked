
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int m_list; } ;
typedef TYPE_1__ atf_map_t ;
struct TYPE_6__ {int m_listiter; int * m_entry; TYPE_1__* m_map; } ;
typedef TYPE_2__ atf_map_iter_t ;


 int FUNC_0 (int *) ;

atf_map_iter_t
FUNC_1(atf_map_t *VAR_0)
{
    atf_map_iter_t VAR_1;
    VAR_1.m_map = VAR_0;
    VAR_1.m_entry = ((void*)0);
    VAR_1.m_listiter = FUNC_0(&VAR_0->m_list);
    return VAR_1;
}
