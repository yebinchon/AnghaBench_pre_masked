
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {TYPE_4__* priv; } ;
typedef TYPE_3__ svn_ra_session_t ;
typedef int svn_ra_serf__xml_context_t ;
struct TYPE_17__ {int path; } ;
struct TYPE_20__ {TYPE_1__ session_url; } ;
typedef TYPE_4__ svn_ra_serf__session_t ;
struct TYPE_18__ {int code; } ;
struct TYPE_21__ {char* method; char const* path; char* body_type; TYPE_2__ sline; TYPE_7__* response_baton; int response_handler; int no_dav_headers; TYPE_7__* header_delegate_baton; int header_delegate; TYPE_7__* body_delegate_baton; int body_delegate; } ;
typedef TYPE_5__ svn_ra_serf__handler_t ;
struct TYPE_22__ {scalar_t__ token; int path; } ;
typedef TYPE_6__ svn_lock_t ;
typedef int svn_error_t ;
struct TYPE_23__ {char const* path; TYPE_6__* lock; TYPE_5__* handler; struct TYPE_23__* inner_baton; int inner_handler; int * pool; } ;
typedef TYPE_7__ lock_info_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 TYPE_7__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int * FUNC_6 (int ) ;
 TYPE_6__* FUNC_7 (int *) ;
 char* FUNC_8 (int ,char const*,int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (TYPE_5__*,int *) ;
 TYPE_5__* FUNC_12 (TYPE_4__*,int *,int ,int *) ;
 int FUNC_13 (TYPE_5__*) ;
 int * FUNC_14 (int ,int *,int ,int *,TYPE_7__*,int *) ;

svn_error_t *
FUNC_15(svn_ra_session_t *VAR_11,
                      svn_lock_t **VAR_12,
                      const char *VAR_13,
                      apr_pool_t *VAR_14)
{
  svn_ra_serf__session_t *VAR_15 = VAR_11->priv;
  svn_ra_serf__handler_t *VAR_16;
  svn_ra_serf__xml_context_t *VAR_17;
  apr_pool_t *VAR_18 = FUNC_9(VAR_14);
  lock_info_t *VAR_19;
  const char *VAR_20;
  svn_error_t *VAR_21;

  VAR_20 = FUNC_8(VAR_15->session_url.path, VAR_13,
                                        VAR_18);

  VAR_19 = FUNC_1(VAR_18, sizeof(*VAR_19));
  VAR_19->pool = VAR_14;
  VAR_19->path = VAR_20;
  VAR_19->lock = FUNC_7(VAR_14);
  VAR_19->lock->path = FUNC_2(VAR_14, VAR_13);

  VAR_17 = FUNC_14(VAR_9,
                                           ((void*)0), VAR_7, ((void*)0),
                                           VAR_19,
                                           VAR_18);
  VAR_16 = FUNC_12(VAR_15, VAR_17,
                                              VAR_8,
                                              VAR_18);

  VAR_16->method = "PROPFIND";
  VAR_16->path = VAR_20;
  VAR_16->body_type = "text/xml";

  VAR_16->body_delegate = VAR_5;
  VAR_16->body_delegate_baton = VAR_19;

  VAR_16->header_delegate = VAR_10;
  VAR_16->header_delegate_baton = VAR_19;

  VAR_16->no_dav_headers = VAR_4;

  VAR_19->inner_handler = VAR_16->response_handler;
  VAR_19->inner_baton = VAR_16->response_baton;
  VAR_16->response_handler = VAR_6;
  VAR_16->response_baton = VAR_19;

  VAR_19->handler = VAR_16;

  VAR_21 = FUNC_11(VAR_16, VAR_18);

  if ((VAR_21 && (VAR_16->sline.code == 500 || VAR_16->sline.code == 501))
      || FUNC_5(VAR_21, VAR_2))
    return FUNC_6(
             FUNC_4(VAR_1, VAR_21,
                              FUNC_0("Server does not support locking features")));
  else if (FUNC_5(VAR_21, VAR_0))
    FUNC_3(VAR_21);
  else if (VAR_16->sline.code != 207)
    return FUNC_6(FUNC_13(VAR_16));

  if (VAR_19->lock && VAR_19->lock->token)
    *VAR_12 = VAR_19->lock;
  else
    *VAR_12 = ((void*)0);

  FUNC_10(VAR_18);

  return VAR_3;
}
