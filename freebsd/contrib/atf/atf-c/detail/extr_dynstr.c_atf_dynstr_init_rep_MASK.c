
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int atf_error_t ;
struct TYPE_3__ {size_t m_datasize; char* m_data; size_t m_length; } ;
typedef TYPE_1__ atf_dynstr_t ;


 size_t VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (char*,char,size_t) ;

atf_error_t
FUNC_4(atf_dynstr_t *VAR_1, size_t VAR_2, char VAR_3)
{
    atf_error_t VAR_4;

    if (VAR_2 == VAR_0) {
        VAR_4 = FUNC_1();
        goto out;
    }

    VAR_1->m_datasize = (VAR_2 + 1) * sizeof(char);
    VAR_1->m_data = (char *)FUNC_2(VAR_1->m_datasize);
    if (VAR_1->m_data == ((void*)0)) {
        VAR_4 = FUNC_1();
        goto out;
    }

    FUNC_3(VAR_1->m_data, VAR_3, VAR_2);
    VAR_1->m_data[VAR_2] = '\0';
    VAR_1->m_length = VAR_2;
    VAR_4 = FUNC_0();

out:
    return VAR_4;
}
