
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
struct TYPE_7__ {int number; } ;
typedef TYPE_2__ svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int **,int ,int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int const**,int ,int *) ;
 int FUNC_6 (int *,TYPE_2__ const*,int *) ;

svn_error_t *
FUNC_7(const svn_fs_id_t **VAR_2,
                           svn_fs_t *VAR_3,
                           const svn_fs_fs__id_part_t *VAR_4,
                           apr_pool_t *VAR_5)
{
  apr_hash_t *VAR_6;

  *VAR_2 = ((void*)0);
  FUNC_0(FUNC_3(VAR_3, &VAR_6,
                                     FUNC_6(VAR_3, VAR_4,
                                                                 VAR_5),
                                     VAR_5));
  if (VAR_6)
    {
      char VAR_7[VAR_0];
      apr_size_t VAR_8 = FUNC_4(VAR_7, VAR_4->number);
      svn_string_t *VAR_9
        = FUNC_1(VAR_6, VAR_7, VAR_8);

      if (VAR_9)
        FUNC_0(FUNC_5(VAR_2,
                                    FUNC_2(VAR_5, VAR_9->data),
                                    VAR_5));
    }
  return VAR_1;
}
