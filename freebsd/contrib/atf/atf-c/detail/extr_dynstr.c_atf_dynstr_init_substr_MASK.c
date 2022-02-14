
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int atf_error_t ;
struct TYPE_5__ {size_t m_length; scalar_t__ m_data; } ;
typedef TYPE_1__ atf_dynstr_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__,size_t) ;
 size_t VAR_0 ;

atf_error_t
FUNC_1(atf_dynstr_t *VAR_1, const atf_dynstr_t *VAR_2,
                       size_t VAR_3, size_t VAR_4)
{
    if (VAR_3 > VAR_2->m_length)
        VAR_3 = VAR_2->m_length;

    if (VAR_4 == VAR_0 || VAR_4 > VAR_2->m_length)
        VAR_4 = VAR_2->m_length;

    return FUNC_0(VAR_1, VAR_2->m_data + VAR_3, VAR_4 - VAR_3);
}
