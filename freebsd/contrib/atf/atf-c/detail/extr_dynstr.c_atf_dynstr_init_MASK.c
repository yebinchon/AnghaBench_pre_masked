
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int atf_error_t ;
struct TYPE_3__ {char* m_data; int m_datasize; scalar_t__ m_length; } ;
typedef TYPE_1__ atf_dynstr_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;

atf_error_t
FUNC_3(atf_dynstr_t *VAR_0)
{
    atf_error_t VAR_1;

    VAR_0->m_data = (char *)FUNC_2(sizeof(char));
    if (VAR_0->m_data == ((void*)0)) {
        VAR_1 = FUNC_1();
        goto out;
    }

    VAR_0->m_data[0] = '\0';
    VAR_0->m_datasize = 1;
    VAR_0->m_length = 0;
    VAR_1 = FUNC_0();

out:
    return VAR_1;
}
