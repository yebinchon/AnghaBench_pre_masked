
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
typedef int svn_ra_dirent_receiver_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_14__ {char const* path; int author_buf; int props; int dirent_fields; int depth; int const* patterns; int revision; void* receiver_baton; int receiver; int * pool; } ;
typedef TYPE_4__ list_context_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_4__* FUNC_1 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (char const**,int *,int *,int *,int ,int *,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int * FUNC_7 (int ,int *,int ,int *,TYPE_4__*,int *) ;
 int FUNC_8 (int *) ;

svn_error_t *
FUNC_9(svn_ra_session_t *VAR_4,
                  const char *VAR_5,
                  svn_revnum_t VAR_6,
                  const apr_array_header_t *VAR_7,
                  svn_depth_t VAR_8,
                  apr_uint32_t VAR_9,
                  svn_ra_dirent_receiver_t VAR_10,
                  void *VAR_11,
                  apr_pool_t *VAR_12)
{
  list_context_t *VAR_13;
  svn_ra_serf__session_t *VAR_14 = VAR_4->priv;
  svn_ra_serf__handler_t *VAR_15;
  svn_ra_serf__xml_context_t *VAR_16;
  const char *VAR_17;

  VAR_13 = FUNC_1(VAR_12, sizeof(*VAR_13));
  VAR_13->pool = VAR_12;
  VAR_13->receiver = VAR_10;
  VAR_13->receiver_baton = VAR_11;
  VAR_13->path = VAR_5;
  VAR_13->revision = VAR_6;
  VAR_13->patterns = VAR_7;
  VAR_13->depth = VAR_8;
  VAR_13->dirent_fields = VAR_9;
  VAR_13->props = FUNC_4(VAR_9, VAR_14,
                                                  VAR_12);
  VAR_13->author_buf = FUNC_8(VAR_12);




  FUNC_0(FUNC_5(&VAR_17, ((void*)0) ,
                                      VAR_14,
                                      ((void*)0) , VAR_6,
                                      VAR_12, VAR_12));

  VAR_16 = FUNC_7(VAR_3,
                                           ((void*)0), VAR_2, ((void*)0),
                                           VAR_13,
                                           VAR_12);
  VAR_15 = FUNC_3(VAR_14, VAR_16, ((void*)0),
                                              VAR_12);

  VAR_15->method = "REPORT";
  VAR_15->path = VAR_17;
  VAR_15->body_delegate = VAR_1;
  VAR_15->body_delegate_baton = VAR_13;
  VAR_15->body_type = "text/xml";

  FUNC_0(FUNC_2(VAR_15, VAR_12));

  if (VAR_15->sline.code != 200)
    FUNC_0(FUNC_6(VAR_15));

  return VAR_0;
}
