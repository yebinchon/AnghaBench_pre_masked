
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_9__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_fs_fs__revision_file_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_10__ {int rev_root_id_cache; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int *,TYPE_1__*,int ,int ,int *) ;
 int FUNC_2 (int *,int *,int *,TYPE_1__*,int ,int *) ;
 int FUNC_3 (void**,scalar_t__*,int ,int *,int *) ;
 int FUNC_4 (int ,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,TYPE_1__*,int *) ;
 int * FUNC_7 (int ,int *) ;
 int FUNC_8 (int **,TYPE_1__*,int ,int *,int *) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;

svn_error_t *
FUNC_10(svn_fs_id_t **VAR_1,
                        svn_fs_t *VAR_2,
                        svn_revnum_t VAR_3,
                        apr_pool_t *VAR_4,
                        apr_pool_t *VAR_5)
{
  fs_fs_data_t *VAR_6 = VAR_2->fsap_data;
  FUNC_0(FUNC_6(VAR_3, VAR_2, VAR_5));

  if (FUNC_9(VAR_2))
    {
      *VAR_1 = FUNC_7(VAR_3, VAR_4);
    }
  else
    {
      svn_fs_fs__revision_file_t *VAR_7;
      apr_off_t VAR_8;
      svn_fs_id_t *VAR_9 = ((void*)0);
      svn_boolean_t VAR_10;

      FUNC_0(FUNC_3((void **) VAR_1, &VAR_10,
                            VAR_6->rev_root_id_cache, &VAR_3, VAR_4));
      if (VAR_10)
        return VAR_0;

      FUNC_0(FUNC_8(&VAR_7, VAR_2, VAR_3,
                                               VAR_5, VAR_5));
      FUNC_0(FUNC_2(&VAR_8, ((void*)0),
                                      VAR_7, VAR_2, VAR_3,
                                      VAR_5));

      FUNC_0(FUNC_1(&VAR_9, VAR_7, VAR_2, VAR_3,
                                  VAR_8, VAR_4));

      FUNC_0(FUNC_5(VAR_7));

      FUNC_0(FUNC_4(VAR_6->rev_root_id_cache, &VAR_3, VAR_9,
                             VAR_5));

      *VAR_1 = VAR_9;
    }

  return VAR_0;
}
