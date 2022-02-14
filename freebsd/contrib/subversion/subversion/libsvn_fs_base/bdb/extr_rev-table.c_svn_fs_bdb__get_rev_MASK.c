
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_16__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_skel_t ;
typedef scalar_t__ svn_revnum_t ;
struct TYPE_17__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int revision_t ;
typedef int recno ;
typedef scalar_t__ db_recno_t ;
struct TYPE_18__ {TYPE_13__* revisions; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_19__ {int size; int data; } ;
struct TYPE_15__ {int (* get ) (TYPE_13__*,int ,int ,int ,int ) ;} ;
typedef TYPE_4__ DBT ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int * VAR_1 ;
 int FUNC_4 (TYPE_13__*,int ,int ,int ,int ) ;
 int * FUNC_5 (TYPE_2__*,scalar_t__) ;
 int * FUNC_6 (TYPE_2__*,scalar_t__) ;
 int FUNC_7 (int **,int *,int *) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,scalar_t__*,int) ;
 int FUNC_10 (TYPE_4__*,int *) ;
 int FUNC_11 (TYPE_1__*,char*,char*) ;
 int * FUNC_12 (int ,int ,int *) ;

svn_error_t *
FUNC_13(revision_t **VAR_2,
                    svn_fs_t *VAR_3,
                    svn_revnum_t VAR_4,
                    trail_t *VAR_5,
                    apr_pool_t *VAR_6)
{
  base_fs_data_t *VAR_7 = VAR_3->fsap_data;
  int VAR_8;
  DBT VAR_9, VAR_10;
  svn_skel_t *VAR_11;
  revision_t *VAR_12;




  db_recno_t VAR_13 = (db_recno_t) VAR_4 + 1;

  if (!FUNC_3(VAR_4))
    return FUNC_6(VAR_3, VAR_4);

  FUNC_11(VAR_5, "revisions", "get");
  VAR_8 = VAR_7->revisions->get(VAR_7->revisions, VAR_5->db_txn,
                               FUNC_9(&VAR_9, &VAR_13,
                                                    sizeof(VAR_13)),
                               FUNC_8(&VAR_10),
                               0);
  FUNC_10(&VAR_10, VAR_6);


  if (VAR_8 == VAR_0)
    return FUNC_6(VAR_3, VAR_4);


  FUNC_2(FUNC_0(VAR_3, FUNC_1("reading filesystem revision"), VAR_8));


  VAR_11 = FUNC_12(VAR_10.data, VAR_10.size, VAR_6);
  if (! VAR_11)
    return FUNC_5(VAR_3, VAR_4);


  FUNC_2(FUNC_7(&VAR_12, VAR_11, VAR_6));

  *VAR_2 = VAR_12;
  return VAR_1;
}
