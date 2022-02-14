
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
typedef int svn_error_t ;
struct TYPE_14__ {char const* path; int * paths; int * pool; int const* location_revisions; int peg_revision; } ;
typedef TYPE_4__ loc_context_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (char const**,int *,int *,int *,int ,int *,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int * FUNC_7 (int ,int *,int ,int *,TYPE_4__*,int *) ;

svn_error_t *
FUNC_8(svn_ra_session_t *VAR_4,
                           apr_hash_t **VAR_5,
                           const char *VAR_6,
                           svn_revnum_t VAR_7,
                           const apr_array_header_t *VAR_8,
                           apr_pool_t *VAR_9)
{
  loc_context_t *VAR_10;
  svn_ra_serf__session_t *VAR_11 = VAR_4->priv;
  svn_ra_serf__handler_t *VAR_12;
  svn_ra_serf__xml_context_t *VAR_13;
  const char *VAR_14;

  VAR_10 = FUNC_2(VAR_9, sizeof(*VAR_10));
  VAR_10->pool = VAR_9;
  VAR_10->path = VAR_6;
  VAR_10->peg_revision = VAR_7;
  VAR_10->location_revisions = VAR_8;
  VAR_10->paths = FUNC_1(VAR_10->pool);

  *VAR_5 = VAR_10->paths;

  FUNC_0(FUNC_5(&VAR_14, ((void*)0) ,
                                      VAR_11, ((void*)0) , VAR_7,
                                      VAR_9, VAR_9));

  VAR_13 = FUNC_7(VAR_3,
                                           ((void*)0), VAR_2, ((void*)0),
                                           VAR_10,
                                           VAR_9);
  VAR_12 = FUNC_4(VAR_11, VAR_13, ((void*)0), VAR_9);

  VAR_12->method = "REPORT";
  VAR_12->path = VAR_14;
  VAR_12->body_delegate = VAR_1;
  VAR_12->body_delegate_baton = VAR_10;
  VAR_12->body_type = "text/xml";

  FUNC_0(FUNC_3(VAR_12, VAR_9));

  if (VAR_12->sline.code != 200)
    FUNC_0(FUNC_6(VAR_12));

  return VAR_0;
}
