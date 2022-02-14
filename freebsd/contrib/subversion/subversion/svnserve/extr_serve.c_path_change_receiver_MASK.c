
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t change_kind; int prop_mod; int text_mod; int node_kind; int copyfrom_rev; int copyfrom_path; int path; } ;
typedef TYPE_1__ svn_repos_path_change_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_error_t ;
struct TYPE_5__ {scalar_t__ started; int * conn; } ;
typedef TYPE_2__ log_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *,char,int ,int ,int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_4,
                     svn_repos_path_change_t *VAR_5,
                     apr_pool_t *VAR_6)
{
  const char VAR_7[] = "MADR";

  log_baton_t *VAR_8 = VAR_4;
  svn_ra_svn_conn_t *VAR_9 = VAR_8->conn;





  char VAR_10 = ( VAR_5->change_kind < VAR_2
                 || VAR_5->change_kind > VAR_3)
              ? 0
              : VAR_7[VAR_5->change_kind];


  if (!VAR_8->started)
    {
      FUNC_0(FUNC_1(VAR_9, VAR_6));
      FUNC_0(FUNC_1(VAR_9, VAR_6));
      VAR_8->started = VAR_1;
    }


  FUNC_0(FUNC_2(
              VAR_9, VAR_6,
              &VAR_5->path,
              VAR_10,
              VAR_5->copyfrom_path,
              VAR_5->copyfrom_rev,
              VAR_5->node_kind,
              VAR_5->text_mod,
              VAR_5->prop_mod));

  return VAR_0;
}
