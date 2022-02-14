
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_fs_progress_notify_func_t ;
typedef int svn_fs_fs__stats_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int revision_info_t ;
struct TYPE_3__ {void* cancel_baton; int cancel_func; void* progress_baton; int progress_func; int * stats; int * fs; void* null_base; scalar_t__ head; int revisions; int min_unpacked_rev; int shard_size; } ;
typedef TYPE_1__ query_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int,int) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(query_t **VAR_1,
             svn_fs_t *VAR_2,
             svn_fs_fs__stats_t *VAR_3,
             svn_fs_progress_notify_func_t VAR_4,
             void *VAR_5,
             svn_cancel_func_t VAR_6,
             void *VAR_7,
             apr_pool_t *VAR_8,
             apr_pool_t *VAR_9)
{
  *VAR_1 = FUNC_2(VAR_8, sizeof(**VAR_1));


  (*VAR_1)->shard_size = FUNC_4(VAR_2);
  FUNC_0(FUNC_5(&(*VAR_1)->head, VAR_2, VAR_9));
  FUNC_0(FUNC_3(&(*VAR_1)->min_unpacked_rev, VAR_2,
                                      VAR_9));







  (*VAR_1)->revisions = FUNC_1(VAR_8, (int) (*VAR_1)->head + 1,
                                       sizeof(revision_info_t *));
  (*VAR_1)->null_base = FUNC_2(VAR_8,
                                    sizeof(*(*VAR_1)->null_base));


  (*VAR_1)->fs = VAR_2;
  (*VAR_1)->stats = VAR_3;
  (*VAR_1)->progress_func = VAR_4;
  (*VAR_1)->progress_baton = VAR_5;
  (*VAR_1)->cancel_func = VAR_6;
  (*VAR_1)->cancel_baton = VAR_7;

  return VAR_0;
}
