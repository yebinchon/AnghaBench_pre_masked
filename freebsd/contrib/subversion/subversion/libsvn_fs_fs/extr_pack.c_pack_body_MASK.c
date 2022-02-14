
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct pack_baton {int shard; int cancel_baton; int (* cancel_func ) (int ) ;TYPE_2__* fs; void* revsprops_dir; void* revs_dir; int notify_baton; int (* notify_func ) (int ,int,int ,int *) ;} ;
struct TYPE_3__ {int min_unpacked_rev; int max_files_per_dir; int youngest_rev_cache; scalar_t__ format; } ;
typedef TYPE_1__ fs_fs_data_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
struct TYPE_4__ {int path; TYPE_1__* fsap_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (scalar_t__*,TYPE_2__*,int *) ;
 int FUNC_2 (struct pack_baton*,int *) ;
 int FUNC_3 (int ,int,int ,int *) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ,int ,int *) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(void *VAR_5,
          apr_pool_t *VAR_6)
{
  struct pack_baton *VAR_7 = VAR_5;
  fs_fs_data_t *VAR_8 = VAR_7->fs->fsap_data;
  apr_int64_t VAR_9;
  apr_pool_t *VAR_10;
  svn_boolean_t VAR_11;



  FUNC_0(FUNC_1(&VAR_11, VAR_7->fs, VAR_6));
  if (VAR_11)
    {
      if (VAR_7->notify_func)
        (*VAR_7->notify_func)(VAR_7->notify_baton,
                           VAR_8->min_unpacked_rev / VAR_8->max_files_per_dir,
                           VAR_4, VAR_6);

      return VAR_3;
    }

  VAR_9 = (VAR_8->youngest_rev_cache + 1) / VAR_8->max_files_per_dir;
  VAR_7->revs_dir = FUNC_5(VAR_7->fs->path, VAR_1, VAR_6);
  if (VAR_8->format >= VAR_2)
    VAR_7->revsprops_dir = FUNC_5(VAR_7->fs->path, VAR_0,
                                        VAR_6);

  VAR_10 = FUNC_7(VAR_6);
  for (VAR_7->shard = VAR_8->min_unpacked_rev / VAR_8->max_files_per_dir;
       VAR_7->shard < VAR_9;
       VAR_7->shard++)
    {
      FUNC_6(VAR_10);

      if (VAR_7->cancel_func)
        FUNC_0(VAR_7->cancel_func(VAR_7->cancel_baton));

      FUNC_0(FUNC_2(VAR_7, VAR_10));
    }

  FUNC_8(VAR_10);
  return VAR_3;
}
