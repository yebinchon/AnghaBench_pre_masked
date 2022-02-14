
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t m_length; char* m_data; } ;
typedef TYPE_1__ atf_dynstr_t ;


 size_t VAR_0 ;

size_t
FUNC_0(const atf_dynstr_t *VAR_1, char VAR_2)
{
    size_t VAR_3;

    for (VAR_3 = VAR_1->m_length; VAR_3 > 0 && VAR_1->m_data[VAR_3 - 1] != VAR_2; VAR_3--)
        ;

    return VAR_3 == 0 ? VAR_0 : VAR_3 - 1;
}
