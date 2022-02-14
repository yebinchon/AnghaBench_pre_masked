
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int svn_ra_serf__xml_context_t ;
struct TYPE_19__ {int path; } ;
struct TYPE_21__ {int repos_root_str; TYPE_2__ session_url; TYPE_1__* wc_callbacks; } ;
typedef TYPE_4__ svn_ra_serf__session_t ;
struct TYPE_20__ {int code; } ;
struct TYPE_22__ {char* method; char* body_type; TYPE_3__ sline; TYPE_7__* header_delegate_baton; int header_delegate; TYPE_7__* body_delegate_baton; int body_delegate; int path; } ;
typedef TYPE_5__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
struct TYPE_23__ {int repos_root; int revision; } ;
typedef TYPE_6__ svn_commit_info_t ;
typedef int svn_boolean_t ;
struct TYPE_24__ {char const* merge_resource_url; int disable_merge_response; TYPE_6__* commit_info; TYPE_5__* handler; int merge_url; int keep_locks; int * lock_tokens; TYPE_4__* session; int * pool; } ;
typedef TYPE_7__ merge_context_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_18__ {int * push_wc_prop; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (char*) ;
 TYPE_7__* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* FUNC_6 (int *) ;
 int * FUNC_7 (int ,int *,int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (TYPE_5__*,int *) ;
 TYPE_5__* FUNC_10 (TYPE_4__*,int *,int *,int *) ;
 int FUNC_11 (TYPE_5__*) ;
 int * FUNC_12 (int ,int *,int ,int *,TYPE_7__*,int *) ;

svn_error_t *
FUNC_13(const svn_commit_info_t **VAR_6,
                       svn_ra_serf__session_t *VAR_7,
                       const char *VAR_8,
                       apr_hash_t *VAR_9,
                       svn_boolean_t VAR_10,
                       apr_pool_t *VAR_11,
                       apr_pool_t *VAR_12)
{
  merge_context_t *VAR_13;
  svn_ra_serf__handler_t *VAR_14;
  svn_ra_serf__xml_context_t *VAR_15;

  VAR_13 = FUNC_4(VAR_12, sizeof(*VAR_13));

  VAR_13->pool = VAR_11;
  VAR_13->session = VAR_7;

  VAR_13->merge_resource_url = VAR_8;

  VAR_13->lock_tokens = VAR_9;
  VAR_13->keep_locks = VAR_10;




  VAR_13->disable_merge_response =
    FUNC_2(VAR_7) ||
    VAR_7->wc_callbacks->push_wc_prop == ((void*)0);

  VAR_13->commit_info = FUNC_6(VAR_11);

  VAR_13->merge_url = VAR_7->session_url.path;

  VAR_15 = FUNC_12(VAR_4,
                                           ((void*)0), VAR_3, ((void*)0),
                                           VAR_13,
                                           VAR_12);
  VAR_14 = FUNC_10(VAR_7, VAR_15, ((void*)0),
                                              VAR_12);

  VAR_14->method = "MERGE";
  VAR_14->path = VAR_13->merge_url;
  VAR_14->body_delegate = VAR_2;
  VAR_14->body_delegate_baton = VAR_13;
  VAR_14->body_type = "text/xml";

  VAR_14->header_delegate = VAR_5;
  VAR_14->header_delegate_baton = VAR_13;

  VAR_13->handler = VAR_14;

  FUNC_0(FUNC_9(VAR_14, VAR_12));

  if (VAR_14->sline.code != 200)
    return FUNC_8(FUNC_11(VAR_14));

  *VAR_6 = VAR_13->commit_info;


  if (! FUNC_1(VAR_13->commit_info->revision))
    {
      return FUNC_7(VAR_0, ((void*)0),
                              FUNC_3("The MERGE response did not include "
                                "a new revision"));
    }

  VAR_13->commit_info->repos_root = FUNC_5(VAR_11,
                                                   VAR_7->repos_root_str);

  return VAR_1;
}
