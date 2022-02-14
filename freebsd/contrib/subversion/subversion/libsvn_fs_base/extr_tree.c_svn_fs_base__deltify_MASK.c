
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_8__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct rev_get_txn_id_args {char const** txn_id; scalar_t__ revision; } ;
struct TYPE_9__ {scalar_t__ format; } ;
typedef TYPE_2__ base_fs_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (TYPE_1__*,int *,char*,int *,int ,char const*,int *) ;
 int * FUNC_3 (int ,int *,int ,scalar_t__) ;
 int FUNC_4 (char const**,TYPE_1__*,int ,int *) ;
 int FUNC_5 (TYPE_1__*,int ,struct rev_get_txn_id_args*,int ,int *) ;
 int FUNC_6 (int **,TYPE_1__*,scalar_t__,int *) ;
 int VAR_4 ;
 int FUNC_7 (scalar_t__*,char const*,int *) ;
 int VAR_5 ;

svn_error_t *
FUNC_8(svn_fs_t *VAR_6,
                     svn_revnum_t VAR_7,
                     apr_pool_t *VAR_8)
{
  svn_fs_root_t *VAR_9;
  const char *VAR_10;
  struct rev_get_txn_id_args VAR_11;
  base_fs_data_t *VAR_12 = VAR_6->fsap_data;

  if (VAR_12->format >= VAR_2)
    {
      const char *VAR_13;
      svn_revnum_t VAR_14 = 0;

      FUNC_0(FUNC_4
              (&VAR_13, VAR_6, VAR_3, VAR_8));
      if (VAR_13)
        FUNC_0(FUNC_7(&VAR_14, VAR_13, ((void*)0)));


      if (VAR_7 <= VAR_14)
        return FUNC_3
          (VAR_1, ((void*)0),
           FUNC_1("Cannot deltify revisions prior to r%ld"), VAR_14+1);
    }

  FUNC_0(FUNC_6(&VAR_9, VAR_6, VAR_7, VAR_8));

  VAR_11.txn_id = &VAR_10;
  VAR_11.revision = VAR_7;
  FUNC_0(FUNC_5(VAR_6, VAR_5, &VAR_11,
                                 VAR_0, VAR_8));

  return FUNC_2(VAR_6, VAR_9, "/", ((void*)0), VAR_4, VAR_10, VAR_8);
}
