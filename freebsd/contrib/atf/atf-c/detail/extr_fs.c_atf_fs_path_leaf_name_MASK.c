
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m_data; } ;
typedef TYPE_1__ atf_fs_path_t ;
typedef int atf_error_t ;
typedef int atf_dynstr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,size_t,size_t) ;
 size_t VAR_0 ;
 size_t FUNC_3 (int *,char) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;

atf_error_t
FUNC_6(const atf_fs_path_t *VAR_1, atf_dynstr_t *VAR_2)
{
    size_t VAR_3 = FUNC_3(&VAR_1->m_data, '/');
    atf_error_t VAR_4;

    if (VAR_3 == VAR_0)
        VAR_3 = 0;
    else
        VAR_3++;

    VAR_4 = FUNC_2(VAR_2, &VAR_1->m_data, VAR_3, VAR_0);






    return VAR_4;
}
