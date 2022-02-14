
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_7__ {TYPE_3__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
struct TYPE_6__ {int path; } ;
struct TYPE_8__ {TYPE_1__ session_url; } ;
typedef TYPE_3__ svn_ra_serf__session_t ;
typedef int svn_ra_reporter3_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_2__*,int const**,void**,int ,int ,char const*,char const*,int ,int ,int ,int ,int const*,void*,int *,int *) ;

svn_error_t *
FUNC_1(svn_ra_session_t *VAR_1,
                       const svn_ra_reporter3_t **VAR_2,
                       void **VAR_3,
                       svn_revnum_t VAR_4,
                       const char *VAR_5,
                       svn_depth_t VAR_6,
                       const char *VAR_7,
                       svn_boolean_t VAR_8,
                       svn_boolean_t VAR_9,
                       const svn_delta_editor_t *VAR_10,
                       void *VAR_11,
                       apr_pool_t *VAR_12,
                       apr_pool_t *VAR_13)
{
  svn_ra_serf__session_t *VAR_14 = VAR_1->priv;

  return FUNC_0(VAR_1, VAR_2, VAR_3,
                              VAR_4,
                              VAR_14->session_url.path,
                              VAR_7, VAR_5,
                              VAR_6,
                              VAR_9,
                              VAR_0 ,
                              VAR_8,
                              VAR_10, VAR_11,
                              VAR_12, VAR_13);
}
