
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_28__ {TYPE_4__* priv; } ;
typedef TYPE_3__ svn_ra_session_t ;
typedef int svn_ra_serf__xml_context_t ;
struct TYPE_26__ {int path; } ;
struct TYPE_29__ {TYPE_1__ session_url; } ;
typedef TYPE_4__ svn_ra_serf__session_t ;
struct TYPE_27__ {int code; } ;
struct TYPE_30__ {char* method; char const* path; char* body_type; TYPE_2__ sline; TYPE_7__* body_delegate_baton; int body_delegate; } ;
typedef TYPE_5__ svn_ra_serf__handler_t ;
struct TYPE_31__ {scalar_t__ apr_err; } ;
typedef TYPE_6__ svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_32__ {int * hash; int requested_depth; int path; int * pool; } ;
typedef TYPE_7__ lock_context_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int *) ;
 TYPE_7__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,char const*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_6__*) ;
 TYPE_6__* FUNC_5 (int ,TYPE_6__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_6__*,int ) ;
 TYPE_6__* FUNC_7 (TYPE_6__*) ;
 char* FUNC_8 (int ,char const*,int *) ;
 TYPE_6__* FUNC_9 (TYPE_5__*,int *) ;
 TYPE_5__* FUNC_10 (TYPE_4__*,int *,int *,int *) ;
 int FUNC_11 (char const**,char const*,TYPE_4__*,int *) ;
 TYPE_6__* FUNC_12 (TYPE_5__*) ;
 int * FUNC_13 (int ,int *,int ,int *,TYPE_7__*,int *) ;

svn_error_t *
FUNC_14(svn_ra_session_t *VAR_8,
                       apr_hash_t **VAR_9,
                       const char *VAR_10,
                       svn_depth_t VAR_11,
                       apr_pool_t *VAR_12)
{
  lock_context_t *VAR_13;
  svn_ra_serf__session_t *VAR_14 = VAR_8->priv;
  svn_ra_serf__handler_t *VAR_15;
  svn_ra_serf__xml_context_t *VAR_16;
  const char *VAR_17, *VAR_18;
  svn_error_t *VAR_19;

  VAR_17 = FUNC_8(VAR_14->session_url.path, VAR_10, VAR_12);
  FUNC_0(FUNC_11(&VAR_18, VAR_17, VAR_14, VAR_12));

  VAR_13 = FUNC_2(VAR_12, sizeof(*VAR_13));
  VAR_13->pool = VAR_12;
  VAR_13->path = FUNC_3(VAR_12, "/", VAR_18, VAR_4);
  VAR_13->requested_depth = VAR_11;
  VAR_13->hash = FUNC_1(VAR_12);

  VAR_16 = FUNC_13(VAR_7,
                                           ((void*)0), VAR_6, ((void*)0),
                                           VAR_13,
                                           VAR_12);
  VAR_15 = FUNC_10(VAR_14, VAR_16, ((void*)0), VAR_12);

  VAR_15->method = "REPORT";
  VAR_15->path = VAR_17;
  VAR_15->body_type = "text/xml";

  VAR_15->body_delegate = VAR_5;
  VAR_15->body_delegate_baton = VAR_13;

  VAR_19 = FUNC_9(VAR_15, VAR_12);

  if (VAR_19)
    {
      if (FUNC_6(VAR_19, VAR_2))
        {



          return FUNC_5(VAR_1, VAR_19, ((void*)0));
        }
      else if (VAR_19->apr_err == VAR_0)
        {

          FUNC_4(VAR_19);
        }
      else
        return FUNC_7(VAR_19);
    }



  if (VAR_15->sline.code != 200
      && VAR_15->sline.code != 404)
    {
      return FUNC_7(FUNC_12(VAR_15));
    }

  *VAR_9 = VAR_13->hash;

  return VAR_3;
}
