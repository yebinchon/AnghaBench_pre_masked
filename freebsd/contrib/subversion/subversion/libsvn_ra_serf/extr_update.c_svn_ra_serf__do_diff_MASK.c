
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
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_2__*,int const**,void**,int ,int ,char const*,char const*,int ,int ,int ,int ,int const*,void*,int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

svn_error_t *
FUNC_4(svn_ra_session_t *VAR_2,
                     const svn_ra_reporter3_t **VAR_3,
                     void **VAR_4,
                     svn_revnum_t VAR_5,
                     const char *VAR_6,
                     svn_depth_t VAR_7,
                     svn_boolean_t VAR_8,
                     svn_boolean_t VAR_9,
                     const char *VAR_10,
                     const svn_delta_editor_t *VAR_11,
                     void *VAR_12,
                     apr_pool_t *VAR_13)
{
  svn_ra_serf__session_t *VAR_14 = VAR_2->priv;
  apr_pool_t *VAR_15 = FUNC_2(VAR_13);

  FUNC_0(FUNC_1(VAR_2, VAR_3, VAR_4,
                               VAR_5,
                               VAR_14->session_url.path, VAR_10, VAR_6,
                               VAR_7, VAR_8, VAR_9,
                               VAR_0 ,
                               VAR_11, VAR_12,
                               VAR_13, VAR_15));
  FUNC_3(VAR_15);
  return VAR_1;
}
