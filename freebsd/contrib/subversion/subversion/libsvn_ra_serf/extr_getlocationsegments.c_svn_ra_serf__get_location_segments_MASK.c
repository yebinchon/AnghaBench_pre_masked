
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef void* svn_revnum_t ;
struct TYPE_20__ {int * priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_ra_serf__xml_context_t ;
typedef int svn_ra_serf__session_t ;
struct TYPE_19__ {int code; } ;
struct TYPE_21__ {char* method; char const* path; char* body_type; TYPE_1__ sline; TYPE_5__* body_delegate_baton; int body_delegate; } ;
typedef TYPE_3__ svn_ra_serf__handler_t ;
typedef int svn_location_segment_receiver_t ;
struct TYPE_22__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
struct TYPE_23__ {char const* path; void* receiver_baton; int receiver; void* end_rev; void* start_rev; void* peg_revision; } ;
typedef TYPE_5__ gls_context_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__* FUNC_1 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_2 (int ,TYPE_4__*,int *) ;
 TYPE_4__* FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_5 (int *,int *,int *,int *) ;
 int FUNC_6 (char const**,int *,int *,int *,void*,int *,int *) ;
 TYPE_4__* FUNC_7 (TYPE_3__*) ;
 int * FUNC_8 (int ,int *,int ,int *,TYPE_5__*,int *) ;

svn_error_t *
FUNC_9(svn_ra_session_t *VAR_5,
                                   const char *VAR_6,
                                   svn_revnum_t VAR_7,
                                   svn_revnum_t VAR_8,
                                   svn_revnum_t VAR_9,
                                   svn_location_segment_receiver_t VAR_10,
                                   void *VAR_11,
                                   apr_pool_t *VAR_12)
{
  gls_context_t *VAR_13;
  svn_ra_serf__session_t *VAR_14 = VAR_5->priv;
  svn_ra_serf__handler_t *VAR_15;
  svn_ra_serf__xml_context_t *VAR_16;
  const char *VAR_17;
  svn_error_t *VAR_18;

  VAR_13 = FUNC_1(VAR_12, sizeof(*VAR_13));
  VAR_13->path = VAR_6;
  VAR_13->peg_revision = VAR_7;
  VAR_13->start_rev = VAR_8;
  VAR_13->end_rev = VAR_9;
  VAR_13->receiver = VAR_10;
  VAR_13->receiver_baton = VAR_11;

  FUNC_0(FUNC_6(&VAR_17, ((void*)0) ,
                                      VAR_14, ((void*)0) , VAR_7,
                                      VAR_12, VAR_12));

  VAR_16 = FUNC_8(VAR_4,
                                           ((void*)0), VAR_3, ((void*)0),
                                           VAR_13,
                                           VAR_12);
  VAR_15 = FUNC_5(VAR_14, VAR_16, ((void*)0), VAR_12);

  VAR_15->method = "REPORT";
  VAR_15->path = VAR_17;
  VAR_15->body_delegate = VAR_2;
  VAR_15->body_delegate_baton = VAR_13;
  VAR_15->body_type = "text/xml";

  VAR_18 = FUNC_4(VAR_15, VAR_12);

  if (!VAR_18 && VAR_15->sline.code != 200)
    VAR_18 = FUNC_7(VAR_15);

  if (VAR_18 && (VAR_18->apr_err == VAR_1))
    return FUNC_2(VAR_0, VAR_18, ((void*)0));

  return FUNC_3(VAR_18);
}
