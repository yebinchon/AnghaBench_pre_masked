
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int atf_error_t ;
struct TYPE_4__ {char* m_data; int m_length; int m_datasize; } ;
typedef TYPE_1__ atf_dynstr_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int ) ;

atf_error_t
FUNC_4(atf_dynstr_t *VAR_0, const atf_dynstr_t *VAR_1)
{
    atf_error_t VAR_2;

    VAR_0->m_data = (char *)FUNC_2(VAR_1->m_datasize);
    if (VAR_0->m_data == ((void*)0))
        VAR_2 = FUNC_1();
    else {
        FUNC_3(VAR_0->m_data, VAR_1->m_data, VAR_1->m_datasize);
        VAR_0->m_datasize = VAR_1->m_datasize;
        VAR_0->m_length = VAR_1->m_length;
        VAR_2 = FUNC_0();
    }

    return VAR_2;
}
