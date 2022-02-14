
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int min_unpacked_rev; int max_files_per_dir; int youngest_rev_cache; scalar_t__ compress_packed_revprops; int revprop_pack_size; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_6__ {int cancel_baton; int (* cancel_func ) (int ) ;int notify_baton; int (* notify_func ) (int ,int,int ,int *) ;int max_mem; TYPE_3__* fs; } ;
typedef TYPE_2__ pack_baton_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
struct TYPE_7__ {int path; TYPE_1__* fsap_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__*,TYPE_3__*,int *) ;
 int FUNC_2 (char const*,TYPE_3__*,int,int,int ,int ,int ,int (*) (int ,int,int ,int *),int ,int (*) (int ),int ,int *) ;
 int FUNC_3 (int ,int,int ,int *) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ,int ,int *) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(void *VAR_5,
          apr_pool_t *VAR_6)
{
  pack_baton_t *VAR_7 = VAR_5;
  svn_fs_x__data_t *VAR_8 = VAR_7->fs->fsap_data;
  apr_int64_t VAR_9;
  apr_int64_t VAR_10;
  apr_pool_t *VAR_11;
  const char *VAR_12;
  svn_boolean_t VAR_13;



  FUNC_0(FUNC_1(&VAR_13, VAR_7->fs, VAR_6));
  if (VAR_13)
    {
      if (VAR_7->notify_func)
        (*VAR_7->notify_func)(VAR_7->notify_baton,
                           VAR_8->min_unpacked_rev / VAR_8->max_files_per_dir,
                           VAR_4, VAR_6);

      return VAR_1;
    }

  VAR_9 = (VAR_8->youngest_rev_cache + 1) / VAR_8->max_files_per_dir;
  VAR_12 = FUNC_5(VAR_7->fs->path, VAR_0, VAR_6);

  VAR_11 = FUNC_7(VAR_6);
  for (VAR_10 = VAR_8->min_unpacked_rev / VAR_8->max_files_per_dir;
       VAR_10 < VAR_9;
       VAR_10++)
    {
      FUNC_6(VAR_11);

      if (VAR_7->cancel_func)
        FUNC_0(VAR_7->cancel_func(VAR_7->cancel_baton));

      FUNC_0(FUNC_2(VAR_12,
                         VAR_7->fs, VAR_10, VAR_8->max_files_per_dir,
                         VAR_8->revprop_pack_size,
                         VAR_8->compress_packed_revprops
                           ? VAR_3
                           : VAR_2,
                         VAR_7->max_mem,
                         VAR_7->notify_func, VAR_7->notify_baton,
                         VAR_7->cancel_func, VAR_7->cancel_baton, VAR_11));
    }

  FUNC_8(VAR_11);
  return VAR_1;
}
