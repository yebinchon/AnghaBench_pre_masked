
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pool; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_7__ {char* id; int base_rev; int * fs; } ;
typedef TYPE_2__ svn_fs_txn_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct txn_root_args {TYPE_2__* txn; int ** root_p; } ;
typedef int apr_uint32_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * FUNC_1 (int *,char const*,int ,int ,int ) ;
 int FUNC_2 (int const**,int const**,int *,char const*,TYPE_1__*,int ) ;
 int FUNC_3 (int **,char const*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_5,
                  trail_t *VAR_6)
{
  struct txn_root_args *VAR_7 = VAR_5;
  svn_fs_root_t **VAR_8 = VAR_7->root_p;
  svn_fs_txn_t *VAR_9 = VAR_7->txn;
  svn_fs_t *VAR_10 = VAR_9->fs;
  const char *VAR_11 = VAR_9->id;
  const svn_fs_id_t *VAR_12, *VAR_13;
  svn_fs_root_t *VAR_14;
  apr_hash_t *VAR_15;
  apr_uint32_t VAR_16 = 0;


  FUNC_0(FUNC_2(&VAR_12, &VAR_13, VAR_10,
                                   VAR_11, VAR_6, VAR_6->pool));



  FUNC_0(FUNC_3(&VAR_15, VAR_11, VAR_6));
  if (FUNC_4(VAR_15, VAR_3))
    VAR_16 |= VAR_1;

  if (FUNC_4(VAR_15, VAR_2))
    VAR_16 |= VAR_0;

  VAR_14 = FUNC_1(VAR_10, VAR_11, VAR_9->base_rev, VAR_16, VAR_6->pool);

  *VAR_8 = VAR_14;
  return VAR_4;
}
