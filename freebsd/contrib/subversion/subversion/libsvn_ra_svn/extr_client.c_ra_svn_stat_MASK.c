
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
struct TYPE_9__ {int * conn; } ;
typedef TYPE_1__ svn_ra_svn__session_baton_t ;
typedef int svn_ra_svn__list_t ;
struct TYPE_10__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_error_t ;
struct TYPE_11__ {char const* last_author; int time; int created_rev; int has_props; int size; int kind; } ;
typedef TYPE_3__ svn_dirent_t ;
typedef int svn_boolean_t ;
typedef int apr_uint64_t ;
typedef int apr_pool_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int ,int ) ;
 char* FUNC_4 (TYPE_2__*,char const*,int *) ;
 TYPE_3__* FUNC_5 (int *) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int *,char*,char const**,int *,int *,int *,char const**,char const**) ;
 int FUNC_8 (int *,int *,char*,int **) ;
 int FUNC_9 (int *,int *,char const*,int ) ;
 int FUNC_10 (int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *FUNC_11(svn_ra_session_t *VAR_1,
                                const char *VAR_2, svn_revnum_t VAR_3,
                                svn_dirent_t **VAR_4, apr_pool_t *VAR_5)
{
  svn_ra_svn__session_baton_t *VAR_6 = VAR_1->priv;
  svn_ra_svn_conn_t *VAR_7 = VAR_6->conn;
  svn_ra_svn__list_t *VAR_8 = ((void*)0);
  svn_dirent_t *VAR_9;

  VAR_2 = FUNC_4(VAR_1, VAR_2, VAR_5);
  FUNC_1(FUNC_9(VAR_7, VAR_5, VAR_2, VAR_3));
  FUNC_1(FUNC_3(FUNC_2(VAR_6, VAR_5),
                                 FUNC_0("'stat' not implemented")));
  FUNC_1(FUNC_8(VAR_7, VAR_5, "(?l)", &VAR_8));

  if (! VAR_8)
    {
      *VAR_4 = ((void*)0);
    }
  else
    {
      const char *VAR_10, *VAR_11, *VAR_12;
      svn_boolean_t VAR_13;
      svn_revnum_t VAR_14;
      apr_uint64_t VAR_15;

      FUNC_1(FUNC_7(VAR_8, "wnbr(?c)(?c)",
                                      &VAR_10, &VAR_15, &VAR_13,
                                      &VAR_14, &VAR_11, &VAR_12));

      VAR_9 = FUNC_5(VAR_5);
      VAR_9->kind = FUNC_6(VAR_10);
      VAR_9->size = VAR_15;
      VAR_9->has_props = VAR_13;
      VAR_9->created_rev = VAR_14;
      FUNC_1(FUNC_10(&VAR_9->time, VAR_11, VAR_5));
      VAR_9->last_author = VAR_12;

      *VAR_4 = VAR_9;
    }

  return VAR_0;
}
