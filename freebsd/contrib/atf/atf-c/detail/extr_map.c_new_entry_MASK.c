
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_entry {int m_managed; void* m_value; int * m_key; } ;


 int FUNC_0 (struct map_entry*) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (char const*) ;

__attribute__((used)) static
struct map_entry *
FUNC_3(const char *VAR_0, void *VAR_1, bool VAR_2)
{
    struct map_entry *VAR_3;

    VAR_3 = (struct map_entry *)FUNC_1(sizeof(*VAR_3));
    if (VAR_3 != ((void*)0)) {
        VAR_3->m_key = FUNC_2(VAR_0);
        if (VAR_3->m_key == ((void*)0)) {
            FUNC_0(VAR_3);
            VAR_3 = ((void*)0);
        } else {
            VAR_3->m_value = VAR_1;
            VAR_3->m_managed = VAR_2;
        }
    }

    return VAR_3;
}
