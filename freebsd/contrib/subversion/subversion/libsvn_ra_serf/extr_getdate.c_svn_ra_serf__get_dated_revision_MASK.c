
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
struct TYPE_14__ {int * revision; int time; } ;
typedef TYPE_4__ date_context_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;
 TYPE_4__* FUNC_3 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_4 (int ,int *,int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_7 (int *,int *,int *,int *) ;
 int FUNC_8 (char const**,int *,int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int * FUNC_10 (int ,int *,int ,int *,TYPE_4__*,int *) ;

svn_error_t *
FUNC_11(svn_ra_session_t *VAR_6,
                                svn_revnum_t *VAR_7,
                                apr_time_t VAR_8,
                                apr_pool_t *VAR_9)
{
  date_context_t *VAR_10;
  svn_ra_serf__session_t *VAR_11 = VAR_6->priv;
  svn_ra_serf__handler_t *VAR_12;
  svn_ra_serf__xml_context_t *VAR_13;
  const char *VAR_14;

  VAR_10 = FUNC_3(VAR_9, sizeof(*VAR_10));
  VAR_10->time = VAR_8;
  VAR_10->revision = VAR_7;

  FUNC_0(FUNC_8(&VAR_14, VAR_11, VAR_9));

  VAR_13 = FUNC_10(VAR_5,
                                           ((void*)0), VAR_4, ((void*)0),
                                           VAR_10,
                                           VAR_9);
  VAR_12 = FUNC_7(VAR_11, VAR_13, ((void*)0), VAR_9);

  VAR_12->method = "REPORT";
  VAR_12->path = VAR_14;
  VAR_12->body_type = "text/xml";

  VAR_12->body_delegate = VAR_3;
  VAR_12->body_delegate_baton = VAR_10;

  *VAR_10->revision = VAR_1;

  FUNC_0(FUNC_6(VAR_12, VAR_9));

  if (VAR_12->sline.code != 200)
    return FUNC_5(FUNC_9(VAR_12));

  if (!FUNC_1(*VAR_7))
    return FUNC_4(VAR_0, ((void*)0),
                            FUNC_2("The REPORT response did not include "
                              "the requested properties"));

  return VAR_2;
}
