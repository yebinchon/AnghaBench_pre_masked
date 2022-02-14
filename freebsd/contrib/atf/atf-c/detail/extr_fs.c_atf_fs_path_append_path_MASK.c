
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int m_data; } ;
typedef TYPE_1__ atf_fs_path_t ;
typedef int atf_error_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;

atf_error_t
FUNC_2(atf_fs_path_t *VAR_0, const atf_fs_path_t *VAR_1)
{
    return FUNC_1(VAR_0, "%s", FUNC_0(&VAR_1->m_data));
}
