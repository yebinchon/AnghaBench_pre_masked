
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_14__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_15__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_16__ {TYPE_11__* miscellaneous; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_17__ {int size; int data; } ;
struct TYPE_13__ {int (* get ) (TYPE_11__*,int ,int ,int ,int ) ;} ;
typedef TYPE_4__ DBT ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int * VAR_1 ;
 char* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_11__*,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,char const*) ;
 int FUNC_7 (TYPE_4__*,int *) ;
 int FUNC_8 (TYPE_1__*,char*,char*) ;

svn_error_t *
FUNC_9(const char **VAR_2,
                              svn_fs_t *VAR_3,
                              const char *VAR_4,
                              trail_t *VAR_5,
                              apr_pool_t *VAR_6)
{
  base_fs_data_t *VAR_7 = VAR_3->fsap_data;
  DBT VAR_8, VAR_9;
  int VAR_10;

  *VAR_2 = ((void*)0);
  FUNC_8(VAR_5, "miscellaneous", "get");
  VAR_10 = VAR_7->miscellaneous->get(VAR_7->miscellaneous, VAR_5->db_txn,
                                   FUNC_6(&VAR_8, VAR_4),
                                   FUNC_5(&VAR_9), 0);
  FUNC_7(&VAR_9, VAR_6);

  if (VAR_10 != VAR_0)
    {
      FUNC_2(FUNC_0(VAR_3, FUNC_1("fetching miscellaneous record"), VAR_10));
      *VAR_2 = FUNC_3(VAR_6, VAR_9.data, VAR_9.size);
    }
  return VAR_1;
}
