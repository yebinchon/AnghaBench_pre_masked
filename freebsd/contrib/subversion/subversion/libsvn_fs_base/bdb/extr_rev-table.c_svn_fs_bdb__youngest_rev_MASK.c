
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
typedef scalar_t__ svn_revnum_t ;
struct TYPE_11__ {int path; TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ db_recno_t ;
struct TYPE_12__ {TYPE_8__* revisions; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_13__ {int (* cursor ) (TYPE_8__*,int ,int **,int ) ;} ;
typedef int DBT ;
typedef int DBC ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_8__*,int ,int **,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int * FUNC_6 (int ,int ,char*,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__*) ;
 int FUNC_10 (TYPE_1__*,char*,char*) ;

svn_error_t *
FUNC_11(svn_revnum_t *VAR_5,
                         svn_fs_t *VAR_6,
                         trail_t *VAR_7,
                         apr_pool_t *VAR_8)
{
  base_fs_data_t *VAR_9 = VAR_6->fsap_data;
  int VAR_10;
  DBC *VAR_11 = 0;
  DBT VAR_12, VAR_13;
  db_recno_t VAR_14;

  FUNC_2(FUNC_7(VAR_6, VAR_4));


  FUNC_10(VAR_7, "revisions", "cursor");
  FUNC_2(FUNC_0(VAR_6, FUNC_1("getting youngest revision (creating cursor)"),
                   VAR_9->revisions->cursor(VAR_9->revisions, VAR_7->db_txn,
                                          &VAR_11, 0)));


  VAR_10 = FUNC_5(VAR_11,
                           FUNC_9(&VAR_12, &VAR_14),
                           FUNC_8(&VAR_13),
                           VAR_0);

  if (VAR_10)
    {


      FUNC_4(VAR_11);

      if (VAR_10 == VAR_1)

        return
          FUNC_6
          (VAR_2, 0,
           "Corrupt DB: revision 0 missing from 'revisions' table, in "
           "filesystem '%s'", VAR_6->path);

      FUNC_2(FUNC_0(VAR_6, FUNC_1("getting youngest revision (finding last entry)"),
                       VAR_10));
    }







  FUNC_2(FUNC_0(VAR_6, FUNC_1("getting youngest revision (closing cursor)"),
                   FUNC_4(VAR_11)));




  *VAR_5 = VAR_14 - 1;
  return VAR_3;
}
