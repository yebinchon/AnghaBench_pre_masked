
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atf_libc_error_data {int m_errno; } ;
typedef int atf_error_t ;


 int FUNC_0 (int ) ;
 struct atf_libc_error_data* FUNC_1 (int const) ;
 int FUNC_2 (int const,char*) ;

int
FUNC_3(const atf_error_t VAR_0)
{
    const struct atf_libc_error_data *VAR_1;

    FUNC_0(FUNC_2(VAR_0, "libc"));

    VAR_1 = FUNC_1(VAR_0);

    return VAR_1->m_errno;
}
