
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct map_entry {int dummy; } ;
struct TYPE_4__ {int m_listiter; struct map_entry* m_entry; } ;
typedef TYPE_1__ atf_map_iter_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

atf_map_iter_t
FUNC_2(const atf_map_iter_t VAR_0)
{
    atf_map_iter_t VAR_1;

    VAR_1 = VAR_0;
    VAR_1.m_listiter = FUNC_1(VAR_0.m_listiter);
    VAR_1.m_entry = ((struct map_entry *)
                       FUNC_0(VAR_1.m_listiter));

    return VAR_1;
}
