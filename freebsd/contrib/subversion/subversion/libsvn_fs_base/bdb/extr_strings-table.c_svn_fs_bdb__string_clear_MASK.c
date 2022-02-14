
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_17__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_18__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_19__ {TYPE_10__* strings; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_20__ {int flags; scalar_t__ size; scalar_t__ data; } ;
struct TYPE_16__ {int (* del ) (TYPE_10__*,int ,TYPE_4__*,int ) ;int (* put ) (TYPE_10__*,int ,TYPE_4__*,TYPE_4__*,int ) ;} ;
typedef TYPE_4__ DBT ;


 int * FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_10__*,int ,TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_10__*,int ,TYPE_4__*,TYPE_4__*,int ) ;
 int * FUNC_5 (int ,int ,char*,char const*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,char const*) ;
 int FUNC_8 (TYPE_1__*,char*,char*) ;

svn_error_t *
FUNC_9(svn_fs_t *VAR_3,
                         const char *VAR_4,
                         trail_t *VAR_5,
                         apr_pool_t *VAR_6)
{
  base_fs_data_t *VAR_7 = VAR_3->fsap_data;
  int VAR_8;
  DBT VAR_9, VAR_10;

  FUNC_7(&VAR_9, VAR_4);


  FUNC_8(VAR_5, "strings", "del");
  VAR_8 = VAR_7->strings->del(VAR_7->strings, VAR_5->db_txn, &VAR_9, 0);


  if (VAR_8 == VAR_1)
    return FUNC_5
      (VAR_2, 0,
       "No such string '%s'", VAR_4);


  FUNC_2(FUNC_0(VAR_3, FUNC_1("clearing string"), VAR_8));


  FUNC_6(&VAR_10);
  VAR_10.data = 0;
  VAR_10.size = 0;
  VAR_10.flags |= VAR_0;

  FUNC_8(VAR_5, "strings", "put");
  return FUNC_0(VAR_3, FUNC_1("storing empty contents"),
                  VAR_7->strings->put(VAR_7->strings, VAR_5->db_txn,
                                    &VAR_9, &VAR_10, 0));
}
