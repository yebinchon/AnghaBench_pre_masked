
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_10__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_11__ {TYPE_7__* representations; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_12__ {int (* del ) (TYPE_7__*,int ,int ,int ) ;} ;
typedef int DBT ;


 int * FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_7__*,int ,int ,int ) ;
 int * FUNC_4 (int ,int ,int ,char const*) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (TYPE_1__*,char*,char*) ;

svn_error_t *
FUNC_7(svn_fs_t *VAR_2,
                       const char *VAR_3,
                       trail_t *VAR_4,
                       apr_pool_t *VAR_5)
{
  base_fs_data_t *VAR_6 = VAR_2->fsap_data;
  int VAR_7;
  DBT VAR_8;

  FUNC_6(VAR_4, "representations", "del");
  VAR_7 = VAR_6->representations->del
    (VAR_6->representations, VAR_4->db_txn,
     FUNC_5(&VAR_8, VAR_3), 0);


  if (VAR_7 == VAR_0)
    return FUNC_4
      (VAR_1, 0,
       FUNC_2("No such representation '%s'"), VAR_3);


  return FUNC_0(VAR_2, FUNC_1("deleting representation"), VAR_7);
}
