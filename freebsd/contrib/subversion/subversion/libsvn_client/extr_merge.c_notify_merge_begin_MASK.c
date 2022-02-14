
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_21__ {TYPE_7__* merge_range; } ;
typedef TYPE_6__ svn_wc_notify_t ;
struct TYPE_22__ {int start; int end; int member_2; int member_1; int member_0; } ;
typedef TYPE_7__ svn_merge_range_t ;
typedef int svn_error_t ;
struct TYPE_23__ {char* abspath; TYPE_2__* remaining_ranges; scalar_t__ absent; } ;
typedef TYPE_8__ svn_client__merge_path_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_18__ {char* last_abspath; int nodes_with_mergeinfo; } ;
struct TYPE_16__ {scalar_t__ ancestral; } ;
struct TYPE_24__ {TYPE_5__* ctx; int implicit_src_gap; scalar_t__ same_repos; TYPE_4__* target; TYPE_3__ notify_begin; TYPE_1__ merge_source; } ;
typedef TYPE_9__ merge_cmd_baton_t ;
typedef int apr_pool_t ;
struct TYPE_20__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_6__*,int *) ;} ;
struct TYPE_19__ {char* abspath; } ;
struct TYPE_17__ {scalar_t__ nelts; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_8__* FUNC_2 (int ,int ,char const*) ;
 TYPE_8__* FUNC_3 (int *,int *,int ,int,char const*) ;
 int FUNC_4 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,TYPE_6__*,int *) ;
 TYPE_6__* FUNC_7 (char const*,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_8(merge_cmd_baton_t *VAR_5,
                   const char *VAR_6,
                   svn_boolean_t VAR_7,
                   apr_pool_t *VAR_8)
{
  svn_wc_notify_t *VAR_9;
  svn_merge_range_t VAR_10 =
    {VAR_0, VAR_0, VAR_2};
  const char *VAR_11;

  if (! VAR_5->ctx->notify_func2)
    return VAR_1;


  if (VAR_5->merge_source.ancestral)
    {
      const svn_client__merge_path_t *VAR_12;
      VAR_12 = FUNC_3(
        &(VAR_10.start), &(VAR_10.end),
        VAR_5->notify_begin.nodes_with_mergeinfo,
        ! VAR_7, VAR_6);

      if (!VAR_12 && VAR_7)
        {

          VAR_12 = FUNC_2(VAR_5->notify_begin.nodes_with_mergeinfo,
                                        VAR_2, VAR_6);
        }

      FUNC_1(VAR_12 != ((void*)0));

      if (! VAR_12)
        return VAR_1;

      if (VAR_5->notify_begin.last_abspath != ((void*)0)
          && FUNC_5(VAR_12->abspath, VAR_5->notify_begin.last_abspath) == 0)
        {

          return VAR_1;
        }

      VAR_5->notify_begin.last_abspath = VAR_12->abspath;

      if (VAR_12->absent || VAR_12->remaining_ranges->nelts == 0
          || !FUNC_0(VAR_10.start))
        {

          return VAR_1;
        }

      VAR_11 = VAR_12->abspath;
    }
  else
    {
      if (VAR_5->notify_begin.last_abspath)
        return VAR_1;

      VAR_11 = VAR_5->target->abspath;

      VAR_5->notify_begin.last_abspath = VAR_5->target->abspath;
    }

  VAR_9 = FUNC_7(VAR_11,
                                VAR_5->same_repos
                                      ? VAR_4
                                      : VAR_3,
                                VAR_8);

  if (FUNC_0(VAR_10.start))
    {


      FUNC_4(&VAR_10, VAR_5->implicit_src_gap);
      VAR_9->merge_range = &VAR_10;
    }
  else
    {
      VAR_9->merge_range = ((void*)0);
    }

  VAR_5->ctx->notify_func2(VAR_5->ctx->notify_baton2, VAR_9,
                             VAR_8);

  return VAR_1;
}
