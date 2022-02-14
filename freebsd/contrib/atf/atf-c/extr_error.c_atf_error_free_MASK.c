
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* atf_error_t ;
struct TYPE_4__ {int m_free; struct TYPE_4__* m_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(atf_error_t VAR_1)
{
    bool VAR_2;

    FUNC_0(VAR_0);
    FUNC_0(VAR_1 != ((void*)0));

    VAR_2 = VAR_1->m_free;

    if (VAR_1->m_data != ((void*)0))
        FUNC_1(VAR_1->m_data);

    if (VAR_2)
        FUNC_1(VAR_1);

    VAR_0 = 0;
}
