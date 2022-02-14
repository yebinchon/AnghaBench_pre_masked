
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_12__ {int * priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_ra_serf__xml_context_t ;
typedef int svn_ra_serf__session_t ;
struct TYPE_11__ {int code; } ;
struct TYPE_13__ {char* method; char const* path; char* body_type; TYPE_1__ sline; TYPE_4__* header_delegate_baton; int header_delegate; int custom_accept_encoding; TYPE_4__* body_delegate_baton; int body_delegate; } ;
typedef TYPE_3__ svn_ra_serf__handler_t ;
typedef int svn_file_rev_handler_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_14__ {char const* path; int * session; int include_merged_revisions; scalar_t__ end; scalar_t__ start; void* file_rev_baton; int file_rev; int * pool; } ;
typedef TYPE_4__ blame_context_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (char const**,int *,int *,int *,scalar_t__,int *,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int * FUNC_7 (int ,int ,int ,int ,TYPE_4__*,int *) ;

svn_error_t *
FUNC_8(svn_ra_session_t *VAR_8,
                           const char *VAR_9,
                           svn_revnum_t VAR_10,
                           svn_revnum_t VAR_11,
                           svn_boolean_t VAR_12,
                           svn_file_rev_handler_t VAR_13,
                           void *VAR_14,
                           apr_pool_t *VAR_15)
{
  blame_context_t *VAR_16;
  svn_ra_serf__session_t *VAR_17 = VAR_8->priv;
  svn_ra_serf__handler_t *VAR_18;
  svn_ra_serf__xml_context_t *VAR_19;
  const char *VAR_20;
  svn_revnum_t VAR_21;

  VAR_16 = FUNC_1(VAR_15, sizeof(*VAR_16));
  VAR_16->pool = VAR_15;
  VAR_16->path = VAR_9;
  VAR_16->file_rev = VAR_13;
  VAR_16->file_rev_baton = VAR_14;
  VAR_16->start = VAR_10;
  VAR_16->end = VAR_11;
  VAR_16->include_merged_revisions = VAR_12;
  VAR_16->session = VAR_17;



  if (VAR_11 > VAR_10)
    VAR_21 = VAR_11;
  else
    VAR_21 = VAR_10;

  FUNC_0(FUNC_5(&VAR_20, ((void*)0) ,
                                      VAR_17,
                                      ((void*)0) , VAR_21,
                                      VAR_15, VAR_15));

  VAR_19 = FUNC_7(VAR_5,
                                           VAR_4,
                                           VAR_3,
                                           VAR_2,
                                           VAR_16,
                                           VAR_15);
  VAR_18 = FUNC_4(VAR_17, VAR_19, ((void*)0), VAR_15);

  VAR_18->method = "REPORT";
  VAR_18->path = VAR_20;
  VAR_18->body_type = "text/xml";
  VAR_18->body_delegate = VAR_6;
  VAR_18->body_delegate_baton = VAR_16;
  VAR_18->custom_accept_encoding = VAR_1;
  VAR_18->header_delegate = VAR_7;
  VAR_18->header_delegate_baton = VAR_16;

  FUNC_0(FUNC_3(VAR_18, VAR_15));

  if (VAR_18->sline.code != 200)
    return FUNC_2(FUNC_6(VAR_18));

  return VAR_0;
}
