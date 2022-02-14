
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * fsap_data; } ;
typedef TYPE_1__ svn_fs_path_change_iterator_t ;
typedef int svn_fs_path_change3_t ;
typedef int svn_error_t ;
typedef int apr_hash_index_t ;


 int * VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_fs_path_change3_t **VAR_1,
                           svn_fs_path_change_iterator_t *VAR_2)
{
  apr_hash_index_t *VAR_3 = VAR_2->fsap_data;

  if (VAR_3)
    {
      *VAR_1 = FUNC_1(VAR_3);
      VAR_2->fsap_data = FUNC_0(VAR_3);
    }
  else
    {
      *VAR_1 = ((void*)0);
    }

  return VAR_0;
}
