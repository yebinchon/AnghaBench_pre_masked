
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int path; int uuid; TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_7__ {scalar_t__ format; int * txn_dir_cache; scalar_t__ concurrent_transactions; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_1 (int *,char*,int ,char*,int ,char*,char const*,char*,char*,char*,...) ;
 int FUNC_2 (int **,int *,int ,int,int,int ,int ,int ,char const*,int ,scalar_t__,TYPE_1__*,scalar_t__,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int **,int *) ;
 int FUNC_4 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *) ;

svn_error_t *
FUNC_6(svn_fs_t *VAR_8,
                                 const char *VAR_9,
                                 apr_pool_t *VAR_10)
{
  fs_fs_data_t *VAR_11 = VAR_8->fsap_data;
  const char *VAR_12;



  if (VAR_11->txn_dir_cache != ((void*)0) || VAR_11->concurrent_transactions)
    {
      VAR_11->txn_dir_cache = ((void*)0);
      VAR_11->concurrent_transactions = VAR_5;

      return VAR_3;
    }
  if (VAR_11->format >= VAR_2)
    VAR_12 = FUNC_1(VAR_10,
                         "fsfs:", VAR_8->uuid,
                         "/", VAR_8->path,
                         ":", VAR_9,
                         ":", "TXNDIR",
                         VAR_4);
  else
    VAR_12 = FUNC_1(VAR_10,
                         "fsfs:", VAR_8->uuid,
                         "/", VAR_8->path,
                         ":", VAR_9,
                         ":", FUNC_5(VAR_10),
                         ":", "TXNDIR",
                         VAR_4);


  FUNC_0(FUNC_2(&VAR_11->txn_dir_cache,
                       ((void*)0),
                       FUNC_4(),
                       1024, 8,
                       VAR_7,
                       VAR_6,
                       VAR_0,
                       VAR_12,
                       VAR_1,
                       VAR_5,
                       VAR_8,
                       VAR_5,
                       VAR_10, VAR_10));


  FUNC_3(VAR_8, &(VAR_11->txn_dir_cache), VAR_10);

  return VAR_3;
}
