
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct map_entry {char const* m_key; } ;
struct TYPE_3__ {struct map_entry* m_entry; } ;
typedef TYPE_1__ atf_map_iter_t ;


 int FUNC_0 (int ) ;

const char *
FUNC_1(const atf_map_iter_t VAR_0)
{
    const struct map_entry *VAR_1 = VAR_0.m_entry;
    FUNC_0(VAR_1 != ((void*)0));
    return VAR_1->m_key;
}
