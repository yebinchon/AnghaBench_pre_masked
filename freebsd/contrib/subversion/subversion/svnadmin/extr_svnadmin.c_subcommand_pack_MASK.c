
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_repos_t ;
typedef int svn_error_t ;
struct svnadmin_opt_state {int quiet; int repository_path; } ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int **,int ,struct svnadmin_opt_state*,int *) ;
 int FUNC_2 (int *,int *,int ,int ,int *) ;
 int * FUNC_3 (int ,int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(apr_getopt_t *VAR_3, void *VAR_4, apr_pool_t *VAR_5)
{
  struct svnadmin_opt_state *VAR_6 = VAR_4;
  svn_repos_t *VAR_7;
  svn_stream_t *VAR_8 = ((void*)0);


  FUNC_0(FUNC_2(((void*)0), VAR_3, 0, 0, VAR_5));

  FUNC_0(FUNC_1(&VAR_7, VAR_6->repository_path, VAR_6, VAR_5));


  if (! VAR_6->quiet)
    VAR_8 = FUNC_3(VAR_2, VAR_5);

  return FUNC_4(
    FUNC_5(VAR_7, !VAR_6->quiet ? VAR_1 : ((void*)0),
                       VAR_8, VAR_0, ((void*)0), VAR_5));
}
