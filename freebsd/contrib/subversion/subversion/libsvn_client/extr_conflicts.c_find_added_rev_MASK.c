
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int revision; } ;
typedef TYPE_2__ svn_wc_notify_t ;
struct TYPE_9__ {int path; int range_start; } ;
typedef TYPE_3__ svn_location_segment_t ;
typedef int svn_error_t ;
struct find_added_rev_baton {int pool; int repos_relpath; int added_rev; int * parent_repos_relpath; TYPE_1__* ctx; int victim_abspath; } ;
typedef int apr_pool_t ;
struct TYPE_7__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_2__*,int *) ;} ;


 int * VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_2__*,int *) ;
 int * FUNC_2 (int *,int ) ;
 TYPE_2__* FUNC_3 (int ,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_location_segment_t *VAR_2,
               void *VAR_3,
               apr_pool_t *VAR_4)
{
  struct find_added_rev_baton *VAR_5 = VAR_3;

  if (VAR_5->ctx->notify_func2)
    {
      svn_wc_notify_t *VAR_6;

      VAR_6 = FUNC_3(
                 VAR_5->victim_abspath,
                 VAR_1,
                 VAR_4),
      VAR_6->revision = VAR_2->range_start;
      VAR_5->ctx->notify_func2(VAR_5->ctx->notify_baton2, VAR_6, VAR_4);
    }

  if (VAR_2->path)
    {
      if (VAR_5->parent_repos_relpath == ((void*)0) ||
          FUNC_2(VAR_5->parent_repos_relpath,
                                    VAR_2->path) != ((void*)0))
        {
          VAR_5->added_rev = VAR_2->range_start;
          VAR_5->repos_relpath = FUNC_0(VAR_5->pool, VAR_2->path);
        }
    }

  return VAR_0;
}
