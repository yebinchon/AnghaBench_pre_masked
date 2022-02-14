
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_path_change_iterator_t ;
typedef int svn_fs_path_change3_t ;
typedef int svn_error_t ;
struct TYPE_5__ {scalar_t__ hi; int change; } ;
typedef TYPE_2__ fs_txn_changes_iterator_data_t ;
typedef int apr_ssize_t ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,void const**,int *,void**) ;
 int FUNC_2 (int *,void const*,int ,void*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_fs_path_change3_t **VAR_1,
                            svn_fs_path_change_iterator_t *VAR_2)
{
  fs_txn_changes_iterator_data_t *VAR_3 = VAR_2->fsap_data;

  if (VAR_3->hi)
    {
      const void *VAR_4;
      apr_ssize_t VAR_5;
      void *VAR_6;
      FUNC_1(VAR_3->hi, &VAR_4, &VAR_5, &VAR_6);

      FUNC_2(&VAR_3->change, VAR_4, VAR_5, VAR_6);

      *VAR_1 = &VAR_3->change;
      VAR_3->hi = FUNC_0(VAR_3->hi);
    }
  else
    {
      *VAR_1 = ((void*)0);
    }

  return VAR_0;
}
