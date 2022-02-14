
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_skel_t ;
typedef scalar_t__ svn_revnum_t ;
struct TYPE_11__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int revision_t ;
typedef int recno ;
typedef scalar_t__ db_recno_t ;
struct TYPE_12__ {TYPE_7__* revisions; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_13__ {int (* put ) (TYPE_7__*,int ,int ,int ,int ) ;} ;
typedef int DBT ;


 int * FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int * VAR_1 ;
 int FUNC_4 (TYPE_7__*,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_7__*,int ,int ,int ,int ) ;
 int FUNC_6 (int *,scalar_t__*) ;
 int FUNC_7 (int *,scalar_t__*,int) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (TYPE_1__*,char*,char*) ;
 int * FUNC_10 (int **,int const*,int *) ;

svn_error_t *
FUNC_11(svn_revnum_t *VAR_2,
                    svn_fs_t *VAR_3,
                    const revision_t *VAR_4,
                    trail_t *VAR_5,
                    apr_pool_t *VAR_6)
{
  base_fs_data_t *VAR_7 = VAR_3->fsap_data;
  int VAR_8;
  db_recno_t VAR_9 = 0;
  svn_skel_t *VAR_10;
  DBT VAR_11, VAR_12;


  FUNC_2(FUNC_10(&VAR_10, VAR_4, VAR_6));

  if (FUNC_3(*VAR_2))
    {
      DBT VAR_13, VAR_14;


      VAR_9 = (db_recno_t) *VAR_2 + 1;
      FUNC_9(VAR_5, "revisions", "put");
      VAR_8 = VAR_7->revisions->put
        (VAR_7->revisions, VAR_5->db_txn,
         FUNC_7(&VAR_13, &VAR_9, sizeof(VAR_9)),
         FUNC_8(&VAR_14, VAR_10, VAR_6), 0);
      return FUNC_0(VAR_3, FUNC_1("updating filesystem revision"), VAR_8);
    }

  FUNC_9(VAR_5, "revisions", "put");
  VAR_8 = VAR_7->revisions->put(VAR_7->revisions, VAR_5->db_txn,
                               FUNC_6(&VAR_11, &VAR_9),
                               FUNC_8(&VAR_12, VAR_10, VAR_6),
                               VAR_0);
  FUNC_2(FUNC_0(VAR_3, FUNC_1("storing filesystem revision"), VAR_8));




  *VAR_2 = VAR_9 - 1;
  return VAR_1;
}
