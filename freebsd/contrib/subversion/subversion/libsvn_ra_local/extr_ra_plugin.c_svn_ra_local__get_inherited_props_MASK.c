
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_6__ {TYPE_3__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
struct TYPE_7__ {int fs; TYPE_1__* fs_path; } ;
typedef TYPE_3__ svn_ra_local__session_baton_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;
struct TYPE_5__ {int data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ,char const*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__*,int *,char const*,int *) ;
 int FUNC_5 (int **,int ,int ,int *) ;
 char* FUNC_6 (int ,char const*,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int **,int *,char const*,int *,int *,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_ra_session_t *VAR_2,
                                  apr_array_header_t **VAR_3,
                                  const char *VAR_4,
                                  svn_revnum_t VAR_5,
                                  apr_pool_t *VAR_6,
                                  apr_pool_t *VAR_7)
{
  svn_fs_root_t *VAR_8;
  svn_ra_local__session_baton_t *VAR_9 = VAR_2->priv;
  const char *VAR_10 = FUNC_6(VAR_9->fs_path->data, VAR_4,
                                          VAR_7);
  svn_node_kind_t VAR_11;


  FUNC_0(FUNC_5(&VAR_8, VAR_9->fs, VAR_5, VAR_7));

  FUNC_0(FUNC_4(&VAR_11, VAR_8, VAR_10, VAR_7));
  if (VAR_11 == VAR_1)
    {
      return FUNC_2(VAR_0, ((void*)0),
                               FUNC_1("'%s' path not found"), VAR_10);
    }

  return FUNC_3(
                FUNC_7(VAR_3, VAR_8, VAR_10,
                                                 ((void*)0) ,
                                                 ((void*)0), ((void*)0) ,
                                                 VAR_6, VAR_7));
}
