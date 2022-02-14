
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* svn_revnum_t ;
struct TYPE_14__ {TYPE_4__* priv; } ;
typedef TYPE_3__ svn_ra_session_t ;
typedef int svn_ra_serf__xml_context_t ;
struct TYPE_12__ {int path; } ;
struct TYPE_15__ {TYPE_1__ session_url; } ;
typedef TYPE_4__ svn_ra_serf__session_t ;
struct TYPE_13__ {int code; } ;
struct TYPE_16__ {char* method; char* body_type; TYPE_2__ sline; struct revision_report_t* body_delegate_baton; int body_delegate; int path; } ;
typedef TYPE_5__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_boolean_t ;
struct revision_report_t {int rev_props; int send_deltas; void* low_water_mark; void* revision; int done; void* editor_baton; int const* editor; int pool; int * member_0; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*,int *) ;
 TYPE_5__* FUNC_4 (TYPE_4__*,int *,int *,int *) ;
 int FUNC_5 (char const**,TYPE_4__*,int *) ;
 int FUNC_6 (TYPE_5__*) ;
 int * FUNC_7 (int ,int ,int ,int ,struct revision_report_t*,int *) ;

svn_error_t *
FUNC_8(svn_ra_session_t *VAR_7,
                    svn_revnum_t VAR_8,
                    svn_revnum_t VAR_9,
                    svn_boolean_t VAR_10,
                    const svn_delta_editor_t *VAR_11,
                    void *VAR_12,
                    apr_pool_t *VAR_13)
{
  struct revision_report_t VAR_14 = { ((void*)0) };
  svn_ra_serf__session_t *VAR_15 = VAR_7->priv;
  svn_ra_serf__handler_t *VAR_16;
  svn_ra_serf__xml_context_t *VAR_17;
  const char *VAR_18;

  FUNC_0(FUNC_5(&VAR_18, VAR_15,
                                       VAR_13));

  VAR_14.pool = FUNC_2(VAR_13);
  VAR_14.editor = VAR_11;
  VAR_14.editor_baton = VAR_12;
  VAR_14.done = VAR_0;
  VAR_14.revision = VAR_8;
  VAR_14.low_water_mark = VAR_9;
  VAR_14.send_deltas = VAR_10;
  VAR_14.rev_props = FUNC_1(VAR_13);

  VAR_17 = FUNC_7(VAR_6,
                                           VAR_5, VAR_4,
                                           VAR_3,
                                           &VAR_14,
                                           VAR_13);

  VAR_16 = FUNC_4(VAR_15, VAR_17, ((void*)0),
                                              VAR_13);

  VAR_16->method = "REPORT";
  VAR_16->path = VAR_15->session_url.path;
  VAR_16->body_delegate = VAR_2;
  VAR_16->body_delegate_baton = &VAR_14;
  VAR_16->body_type = "text/xml";



  FUNC_0(FUNC_3(VAR_16, VAR_13));

  if (VAR_16->sline.code != 200)
    FUNC_0(FUNC_6(VAR_16));

  return VAR_1;
}
