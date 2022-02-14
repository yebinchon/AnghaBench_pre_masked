
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
struct TYPE_7__ {int * conn; } ;
typedef TYPE_1__ svn_ra_svn__session_baton_t ;
struct TYPE_8__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_ra_reporter3_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *,int const*,void*,char const*,int ,int const**,void**) ;
 int FUNC_5 (int *,int *,char const*,int ,int ,int ) ;

__attribute__((used)) static svn_error_t *FUNC_6(svn_ra_session_t *VAR_1,
                                  const svn_ra_reporter3_t **VAR_2,
                                  void **VAR_3,
                                  const char *VAR_4, svn_revnum_t VAR_5,
                                  svn_depth_t VAR_6,
                                  const svn_delta_editor_t *VAR_7,
                                  void *VAR_8, apr_pool_t *VAR_9)
{
  svn_ra_svn__session_baton_t *VAR_10 = VAR_1->priv;
  svn_ra_svn_conn_t *VAR_11 = VAR_10->conn;
  svn_boolean_t VAR_12 = FUNC_0(VAR_6);


  FUNC_1(FUNC_2(VAR_1, VAR_9));


  FUNC_1(FUNC_5(VAR_11, VAR_9, VAR_4, VAR_12, VAR_5,
                                       VAR_6));
  FUNC_1(FUNC_3(VAR_10, VAR_9));



  FUNC_1(FUNC_4(VAR_10, VAR_9, VAR_7, VAR_8,
                              VAR_4, VAR_6, VAR_2, VAR_3));
  return VAR_0;
}
