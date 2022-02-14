
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int atf_error_t ;
struct TYPE_3__ {size_t m_datasize; char* m_data; } ;
typedef TYPE_1__ atf_dynstr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static
atf_error_t
FUNC_6(atf_dynstr_t *VAR_0, size_t VAR_1)
{
    char *VAR_2;
    atf_error_t VAR_3;

    FUNC_0(VAR_1 > VAR_0->m_datasize);

    VAR_2 = (char *)FUNC_4(VAR_1);
    if (VAR_2 == ((void*)0)) {
        VAR_3 = FUNC_2();
    } else {
        FUNC_5(VAR_2, VAR_0->m_data);
        FUNC_3(VAR_0->m_data);
        VAR_0->m_data = VAR_2;
        VAR_0->m_datasize = VAR_1;
        VAR_3 = FUNC_1();
    }

    return VAR_3;
}
