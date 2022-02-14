
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
struct TYPE_3__ {int (* recover ) (int *,int ,void*,int *) ;int (* open_fs_for_recovery ) (int *,char const*,int ,int *,int ) ;} ;
typedef TYPE_1__ fs_library_vtable_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__**,char const*,int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char const*,int ,int *,int ) ;
 int FUNC_4 (int *,int ,void*,int *) ;
 int * FUNC_5 (int ) ;

svn_error_t *
FUNC_6(const char *VAR_2,
               svn_cancel_func_t VAR_3, void *VAR_4,
               apr_pool_t *VAR_5)
{
  fs_library_vtable_t *VAR_6;
  svn_fs_t *VAR_7;

  FUNC_0(FUNC_1(&VAR_6, VAR_2, VAR_5));
  VAR_7 = FUNC_2(((void*)0), VAR_5);

  FUNC_0(VAR_6->open_fs_for_recovery(VAR_7, VAR_2, VAR_1,
                                       VAR_5, VAR_0));
  return FUNC_5(VAR_6->recover(VAR_7, VAR_3, VAR_4,
                                         VAR_5));
}
