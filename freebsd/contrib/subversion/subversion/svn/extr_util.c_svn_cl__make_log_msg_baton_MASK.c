
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_config_t ;
struct TYPE_5__ {int non_interactive; int no_unlock; int * encoding; int editor_cmd; int message; TYPE_1__* filedata; } ;
typedef TYPE_2__ svn_cl__opt_state_t ;
struct log_msg_baton {char const* base_dir; int * pool; int non_interactive; int keep_locks; int * config; int * tmpfile_left; int * message_encoding; int editor_cmd; int message; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_4__ {scalar_t__ len; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (char*) ;
 struct log_msg_baton* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int **,int ,int ,int *) ;
 int * FUNC_4 (int ,int *,int ) ;
 int * FUNC_5 (int *,int ) ;

svn_error_t *
FUNC_6(void **VAR_5,
                           svn_cl__opt_state_t *VAR_6,
                           const char *VAR_7 ,
                           apr_hash_t *VAR_8,
                           apr_pool_t *VAR_9)
{
  struct log_msg_baton *VAR_10 = FUNC_1(VAR_9, sizeof(*VAR_10));

  if (VAR_6->filedata)
    {
      if (FUNC_2(VAR_6->filedata->data) < VAR_6->filedata->len)
        {




          return FUNC_4(VAR_3, ((void*)0),
                                  FUNC_0("Log message contains a zero byte"));
        }
      VAR_10->message = VAR_6->filedata->data;
    }
  else
    {
      VAR_10->message = VAR_6->message;
    }

  VAR_10->editor_cmd = VAR_6->editor_cmd;
  if (VAR_6->encoding)
    {
      VAR_10->message_encoding = VAR_6->encoding;
    }
  else if (VAR_8)
    {
      svn_config_t *VAR_11 = FUNC_5(VAR_8, VAR_0);
      FUNC_3(VAR_11, &(VAR_10->message_encoding),
                     VAR_2,
                     VAR_1,
                     ((void*)0));
    }
  else
    VAR_10->message_encoding = ((void*)0);

  VAR_10->base_dir = VAR_7;
  VAR_10->tmpfile_left = ((void*)0);
  VAR_10->config = VAR_8;
  VAR_10->keep_locks = VAR_6->no_unlock;
  VAR_10->non_interactive = VAR_6->non_interactive;
  VAR_10->pool = VAR_9;
  *VAR_5 = VAR_10;
  return VAR_4;
}
