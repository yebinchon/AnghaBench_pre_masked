
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_6__ {int conn; } ;
typedef TYPE_1__ svn_ra_svn__session_baton_t ;
struct TYPE_7__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,char*) ;
 int FUNC_7 (int ,int *,int ,int ,int ) ;
 int FUNC_8 (int ,int *,int const*,void*,int *,int ) ;

__attribute__((used)) static svn_error_t *FUNC_9(svn_ra_session_t *VAR_1,
                                  svn_revnum_t VAR_2,
                                  svn_revnum_t VAR_3,
                                  svn_boolean_t VAR_4,
                                  const svn_delta_editor_t *VAR_5,
                                  void *VAR_6,
                                  apr_pool_t *VAR_7)
{
  svn_ra_svn__session_baton_t *VAR_8 = VAR_1->priv;



  FUNC_1(FUNC_2(VAR_1, VAR_7));
  FUNC_1(FUNC_7(VAR_8->conn, VAR_7, VAR_2,
                                       VAR_3, VAR_4));

  FUNC_1(FUNC_4(FUNC_3(VAR_8, VAR_7),
                                 FUNC_0("Server doesn't support the replay "
                                    "command")));

  FUNC_1(FUNC_8(VAR_8->conn, VAR_7, VAR_5, VAR_6,
                                   ((void*)0), VAR_0));

  return FUNC_5(FUNC_6(VAR_8->conn, VAR_7, ""));
}
