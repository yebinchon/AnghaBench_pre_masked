
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int atf_error_t ;
struct TYPE_3__ {char* m_data; size_t m_datasize; size_t m_length; } ;
typedef TYPE_1__ atf_dynstr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (char*,void const*,size_t) ;
 size_t FUNC_5 (char*) ;

atf_error_t
FUNC_6(atf_dynstr_t *VAR_1, const void *VAR_2, size_t VAR_3)
{
    atf_error_t VAR_4;

    if (VAR_3 >= VAR_0 - 1) {
        VAR_4 = FUNC_2();
        goto out;
    }

    VAR_1->m_data = (char *)FUNC_3(VAR_3 + 1);
    if (VAR_1->m_data == ((void*)0)) {
        VAR_4 = FUNC_2();
        goto out;
    }

    VAR_1->m_datasize = VAR_3 + 1;
    FUNC_4(VAR_1->m_data, VAR_2, VAR_3);
    VAR_1->m_data[VAR_3] = '\0';
    VAR_1->m_length = FUNC_5(VAR_1->m_data);
    FUNC_0(VAR_1->m_length <= VAR_3);
    VAR_4 = FUNC_1();

out:
    return VAR_4;
}
