
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_12__ {int * priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_ra_serf__xml_context_t ;
typedef int svn_ra_serf__session_t ;
struct TYPE_11__ {int code; } ;
struct TYPE_13__ {char* method; char const* path; char* body_type; TYPE_1__ sline; TYPE_4__* body_delegate_baton; int body_delegate; } ;
typedef TYPE_3__ svn_ra_serf__handler_t ;
typedef int svn_mergeinfo_inheritance_t ;
typedef int * svn_mergeinfo_catalog_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_14__ {int * result_catalog; int include_descendants; int inherit; int revision; int const* paths; int * pool; } ;
typedef TYPE_4__ mergeinfo_context_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 TYPE_4__* FUNC_3 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_5 (int *,int *,int *,int *) ;
 int FUNC_6 (char const**,int *,int *,int *,int ,int *,int *) ;
 int FUNC_7 (TYPE_3__*) ;
 int * FUNC_8 (int ,int *,int ,int *,TYPE_4__*,int *) ;

svn_error_t *
FUNC_9(svn_ra_session_t *VAR_4,
                           svn_mergeinfo_catalog_t *VAR_5,
                           const apr_array_header_t *VAR_6,
                           svn_revnum_t VAR_7,
                           svn_mergeinfo_inheritance_t VAR_8,
                           svn_boolean_t VAR_9,
                           apr_pool_t *VAR_10)
{
  mergeinfo_context_t *VAR_11;
  svn_ra_serf__session_t *VAR_12 = VAR_4->priv;
  svn_ra_serf__handler_t *VAR_13;
  svn_ra_serf__xml_context_t *VAR_14;
  const char *VAR_15;

  *VAR_5 = ((void*)0);

  FUNC_0(FUNC_6(&VAR_15, ((void*)0) ,
                                      VAR_12,
                                      ((void*)0) , VAR_7,
                                      VAR_10, VAR_10));

  VAR_11 = FUNC_3(VAR_10, sizeof(*VAR_11));
  VAR_11->pool = VAR_10;
  VAR_11->result_catalog = FUNC_2(VAR_10);
  VAR_11->paths = VAR_6;
  VAR_11->revision = VAR_7;
  VAR_11->inherit = VAR_8;
  VAR_11->include_descendants = VAR_9;

  VAR_14 = FUNC_8(VAR_3,
                                           ((void*)0), VAR_2, ((void*)0),
                                           VAR_11,
                                           VAR_10);
  VAR_13 = FUNC_5(VAR_12, VAR_14, ((void*)0), VAR_10);

  VAR_13->method = "REPORT";
  VAR_13->path = VAR_15;

  VAR_13->body_delegate = VAR_1;
  VAR_13->body_delegate_baton = VAR_11;
  VAR_13->body_type = "text/xml";

  FUNC_0(FUNC_4(VAR_13, VAR_10));

  if (VAR_13->sline.code != 200)
    FUNC_0(FUNC_7(VAR_13));

  if (FUNC_1(VAR_11->result_catalog))
    *VAR_5 = VAR_11->result_catalog;

  return VAR_0;
}
