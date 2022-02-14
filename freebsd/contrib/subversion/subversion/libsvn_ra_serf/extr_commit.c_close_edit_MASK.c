
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int code; } ;
struct TYPE_8__ {char* method; char* path; TYPE_1__ sline; struct TYPE_8__* response_baton; int response_handler; } ;
typedef TYPE_2__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
typedef int svn_commit_info_t ;
struct TYPE_9__ {char* activity_url; char* txn_url; scalar_t__ open_batons; int session; int callback_baton; int * (* callback ) (int const*,int ,int *) ;int keep_locks; int lock_tokens; } ;
typedef TYPE_3__ commit_context_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int const*,int ,int *) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int ,int *,int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_7 (int ,int *) ;
 int VAR_2 ;
 int * FUNC_8 (int const**,int ,char const*,int ,int ,int *,int *) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static svn_error_t *
FUNC_10(void *VAR_3,
           apr_pool_t *VAR_4)
{
  commit_context_t *VAR_5 = VAR_3;
  const char *VAR_6 =
    VAR_5->activity_url ? VAR_5->activity_url : VAR_5->txn_url;
  const svn_commit_info_t *VAR_7;
  svn_error_t *VAR_8 = ((void*)0);

  if (VAR_5->open_batons > 0)
    return FUNC_4(
              VAR_0, ((void*)0),
              FUNC_1("Closing editor with directories or files open"));


  FUNC_0(FUNC_8(&VAR_7,
                                 VAR_5->session,
                                 VAR_6,
                                 VAR_5->lock_tokens,
                                 VAR_5->keep_locks,
                                 VAR_4, VAR_4));

  VAR_5->txn_url = ((void*)0);


  if (VAR_5->callback)
    VAR_8 = VAR_5->callback(VAR_7, VAR_5->callback_baton, VAR_4);


  if (VAR_5->activity_url)
    {
      svn_ra_serf__handler_t *VAR_9;

      VAR_9 = FUNC_7(VAR_5->session, VAR_4);

      VAR_9->method = "DELETE";
      VAR_9->path = VAR_5->activity_url;

      VAR_9->response_handler = VAR_2;
      VAR_9->response_baton = VAR_9;

      VAR_5->activity_url = ((void*)0);

      FUNC_0(FUNC_3(
                  VAR_8,
                  FUNC_6(VAR_9, VAR_4)));

      if (VAR_9->sline.code != 204)
        return FUNC_5(FUNC_9(VAR_9));
    }

  FUNC_0(VAR_8);

  return VAR_1;
}
