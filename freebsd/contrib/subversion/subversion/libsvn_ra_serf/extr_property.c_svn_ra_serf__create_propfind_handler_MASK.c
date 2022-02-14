
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_serf__xml_context_t ;
typedef int svn_ra_serf__session_t ;
typedef int svn_ra_serf__prop_func_t ;
struct TYPE_7__ {char* method; char const* path; char* body_type; int no_dav_headers; TYPE_2__* header_delegate_baton; int header_delegate; TYPE_2__* body_delegate_baton; int body_delegate; } ;
typedef TYPE_1__ svn_ra_serf__handler_t ;
typedef int svn_ra_serf__dav_props_t ;
typedef int svn_error_t ;
struct TYPE_8__ {char const* path; char const* depth; TYPE_1__* handler; int * label; void* prop_func_baton; int prop_func; int const* find_props; } ;
typedef TYPE_2__ propfind_context_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ) ;
 TYPE_2__* FUNC_2 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_3 (int *,int *,int ,int *) ;
 int * FUNC_4 (int ,int ,int ,int *,TYPE_2__*,int *) ;

svn_error_t *
FUNC_5(svn_ra_serf__handler_t **VAR_8,
                                     svn_ra_serf__session_t *VAR_9,
                                     const char *VAR_10,
                                     svn_revnum_t VAR_11,
                                     const char *VAR_12,
                                     const svn_ra_serf__dav_props_t *VAR_13,
                                     svn_ra_serf__prop_func_t VAR_14,
                                     void *VAR_15,
                                     apr_pool_t *VAR_16)
{
  propfind_context_t *VAR_17;
  svn_ra_serf__handler_t *VAR_18;
  svn_ra_serf__xml_context_t *VAR_19;

  VAR_17 = FUNC_2(VAR_16, sizeof(*VAR_17));

  VAR_17->path = VAR_10;
  VAR_17->find_props = VAR_13;
  VAR_17->prop_func = VAR_14;
  VAR_17->prop_func_baton = VAR_15;
  VAR_17->depth = VAR_12;

  if (FUNC_0(VAR_11))
    {
      VAR_17->label = FUNC_1(VAR_16, VAR_11);
    }
  else
    {
      VAR_17->label = ((void*)0);
    }

  VAR_19 = FUNC_4(VAR_6,
                                           VAR_5,
                                           VAR_3,
                                           ((void*)0),
                                           VAR_17,
                                           VAR_16);
  VAR_18 = FUNC_3(VAR_9, VAR_19,
                                              VAR_4,
                                              VAR_16);

  VAR_18->method = "PROPFIND";
  VAR_18->path = VAR_10;
  VAR_18->body_delegate = VAR_2;
  VAR_18->body_type = "text/xml";
  VAR_18->body_delegate_baton = VAR_17;
  VAR_18->header_delegate = VAR_7;
  VAR_18->header_delegate_baton = VAR_17;

  VAR_18->no_dav_headers = VAR_1;

  VAR_17->handler = VAR_18;

  *VAR_8 = VAR_18;

  return VAR_0;
}
