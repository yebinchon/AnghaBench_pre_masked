
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_repos_t ;
typedef int svn_error_t ;
struct svnadmin_opt_state {int repository_path; } ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int * VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (int **,int ,struct svnadmin_opt_state*,int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(apr_getopt_t *VAR_2, void *VAR_3, apr_pool_t *VAR_4)
{
  struct svnadmin_opt_state *VAR_5 = VAR_3;
  svn_repos_t *VAR_6;

  (void)FUNC_6(VAR_1);
  FUNC_0(FUNC_3(&VAR_6, VAR_5->repository_path, VAR_5, VAR_4));
  FUNC_0(FUNC_4(VAR_4,
                             FUNC_2("Successfully opened repository '%s'.\n"
                               "Will now crash to simulate a crashing "
                               "server process.\n"),
                             FUNC_5(VAR_5->repository_path,
                                                    VAR_4)));
  FUNC_1();


  return VAR_0;
}
