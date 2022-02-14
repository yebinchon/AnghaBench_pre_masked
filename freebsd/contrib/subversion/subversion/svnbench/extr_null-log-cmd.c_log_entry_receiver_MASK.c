
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ revision; scalar_t__ has_children; scalar_t__ changed_paths2; int revprops; } ;
typedef TYPE_2__ svn_log_entry_t ;
typedef int svn_error_t ;
struct log_receiver_baton {int message_lines; int merged_message_lines; unsigned int changes; unsigned int merged_changes; int merges; scalar_t__ merge_depth; int merged_revs; int revisions; scalar_t__ quiet; TYPE_1__* ctx; } ;
typedef int apr_pool_t ;
struct TYPE_4__ {int cancel_baton; int (* cancel_func ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_0 ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const**,char const**,char const**,int ) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_1,
                   svn_log_entry_t *VAR_2,
                   apr_pool_t *VAR_3)
{
  struct log_receiver_baton *VAR_4 = VAR_1;
  const char *VAR_5;
  const char *VAR_6;
  const char *VAR_7;

  if (VAR_4->ctx->cancel_func)
    FUNC_0(VAR_4->ctx->cancel_func(VAR_4->ctx->cancel_baton));

  if (! FUNC_1(VAR_2->revision))
    {
      VAR_4->merge_depth--;
      return VAR_0;
    }


  if (VAR_4->quiet)
    return VAR_0;


  FUNC_4(&VAR_5, &VAR_6, &VAR_7, VAR_2->revprops);
  if (VAR_2->revision == 0 && VAR_7 == ((void*)0))
    return VAR_0;

  VAR_4->revisions++;
  if (VAR_4->merge_depth)
    VAR_4->merged_revs++;

  if (VAR_7 != ((void*)0))
    {
      int VAR_8 = FUNC_5(VAR_7) + 1;
      VAR_4->message_lines += VAR_8;
      if (VAR_4->merge_depth)
        VAR_4->merged_message_lines += VAR_8;
    }

  if (VAR_2->changed_paths2)
    {
      unsigned VAR_9 = FUNC_2(VAR_2->changed_paths2);
      VAR_4->changes += VAR_9;
      if (VAR_4->merge_depth)
        VAR_4->merged_changes += VAR_9;
    }

  if (VAR_2->has_children)
    {
      VAR_4->merge_depth++;
      VAR_4->merges++;
    }

  return VAR_0;
}
