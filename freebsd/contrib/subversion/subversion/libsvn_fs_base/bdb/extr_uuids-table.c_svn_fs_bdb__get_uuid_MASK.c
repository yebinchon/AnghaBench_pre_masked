
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_15__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int idx ;
typedef int buffer ;
struct TYPE_16__ {TYPE_5__* uuids; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_18__ {int (* get ) (TYPE_5__*,int ,TYPE_4__*,TYPE_4__*,int ) ;} ;
struct TYPE_17__ {int* data; int size; int ulen; int flags; } ;
typedef TYPE_4__ DBT ;
typedef TYPE_5__ DB ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int * VAR_2 ;
 char* FUNC_3 (int *,char*,int) ;
 int FUNC_4 (TYPE_5__*,int ,TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_1__*,char*,char*) ;

svn_error_t *FUNC_7(svn_fs_t *VAR_3,
                                  int VAR_4,
                                  const char **VAR_5,
                                  trail_t *VAR_6,
                                  apr_pool_t *VAR_7)
{
  base_fs_data_t *VAR_8 = VAR_3->fsap_data;
  char VAR_9[VAR_0 + 1];
  DB *VAR_10 = VAR_8->uuids;
  DBT VAR_11;
  DBT VAR_12;

  FUNC_5(&VAR_11);
  VAR_11.data = &VAR_4;
  VAR_11.size = sizeof(VAR_4);

  FUNC_5(&VAR_12);
  VAR_12.data = VAR_9;
  VAR_12.size = sizeof(VAR_9) - 1;
  VAR_12.ulen = VAR_12.size;
  VAR_12.flags |= VAR_1;

  FUNC_6(VAR_6, "uuids", "get");
  FUNC_2(FUNC_0(VAR_3, FUNC_1("get repository uuid"),
                   VAR_10->get(VAR_10, VAR_6->db_txn, &VAR_11, &VAR_12, 0)));

  *VAR_5 = FUNC_3(VAR_7, VAR_12.data, VAR_12.size);

  return VAR_2;
}
