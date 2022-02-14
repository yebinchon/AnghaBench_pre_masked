
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {char* path; } ;
struct TYPE_12__ {int pool; int activity_collection_url; TYPE_4__ session_url; } ;
typedef TYPE_2__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
struct TYPE_13__ {scalar_t__ activity_collection; TYPE_5__* handler; } ;
typedef TYPE_3__ options_context_t ;
typedef TYPE_4__ apr_uri_t ;
typedef int apr_pool_t ;
struct TYPE_11__ {int code; } ;
struct TYPE_15__ {TYPE_1__ sline; int * location; int no_fail_on_http_redirect_status; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int * FUNC_3 (int *,TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_3__**,TYPE_2__*,int *) ;
 int * FUNC_5 (int ,int *,int ) ;
 int * FUNC_6 (int ,int *,int ,int *) ;
 int * FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (TYPE_5__*,int *) ;
 int FUNC_10 (TYPE_5__*) ;
 char* FUNC_11 (int *,int *) ;

svn_error_t *
FUNC_12(svn_ra_serf__session_t *VAR_4,
                                   const char **VAR_5,
                                   apr_pool_t *VAR_6,
                                   apr_pool_t *VAR_7)
{
  options_context_t *VAR_8;

  if (VAR_5)
    *VAR_5 = ((void*)0);


  FUNC_0(FUNC_4(&VAR_8, VAR_4, VAR_7));

  VAR_8->handler->no_fail_on_http_redirect_status = VAR_3;

  FUNC_0(FUNC_9(VAR_8->handler, VAR_7));





  if (VAR_5 && (VAR_8->handler->sline.code == 301))
    {
      if (!VAR_8->handler->location || !*VAR_8->handler->location)
        {
          return FUNC_5(
                    VAR_0, ((void*)0),
                    FUNC_1("Location header not set on redirect response"));
        }
      else if (FUNC_8(VAR_8->handler->location))
        {
          *VAR_5 = FUNC_11(VAR_8->handler->location,
                                                VAR_6);
        }
      else
        {






          apr_uri_t VAR_9 = VAR_4->session_url;

          VAR_9.path = (char *)VAR_5;
          *VAR_5 = FUNC_11(
                              FUNC_3(VAR_7, &VAR_9, 0),
                              VAR_6);
        }

      return VAR_2;
    }
  else if (VAR_8->handler->sline.code >= 300
           && VAR_8->handler->sline.code < 399)
    {
      return FUNC_6(VAR_1, ((void*)0),
                               (VAR_8->handler->sline.code == 301
                                ? FUNC_1("Repository moved permanently to '%s'")
                                : FUNC_1("Repository moved temporarily to '%s'")),
                              VAR_8->handler->location);
    }

  if (VAR_8->handler->sline.code != 200)
    return FUNC_7(FUNC_10(VAR_8->handler));




  if (VAR_8->activity_collection)
    {
      VAR_4->activity_collection_url =
        FUNC_2(VAR_4->pool, VAR_8->activity_collection);
    }

  return VAR_2;
}
