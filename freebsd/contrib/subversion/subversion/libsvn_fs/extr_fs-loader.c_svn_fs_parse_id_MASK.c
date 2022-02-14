
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int * (* parse_id ) (char const*,int ,int *) ;} ;
typedef TYPE_1__ fs_library_vtable_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__**,int ,int *) ;
 int * FUNC_1 (char const*,int ,int *) ;
 int FUNC_2 (int *) ;

svn_fs_id_t *
FUNC_3(const char *VAR_1, apr_size_t VAR_2, apr_pool_t *VAR_3)
{
  fs_library_vtable_t *VAR_4;
  svn_error_t *VAR_5;

  VAR_5 = FUNC_0(&VAR_4, VAR_0, VAR_3);
  if (VAR_5)
    {
      FUNC_2(VAR_5);
      return ((void*)0);
    }
  return VAR_4->parse_id(VAR_1, VAR_2, VAR_3);
}
