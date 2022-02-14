
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_repos_t ;
struct TYPE_14__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct svnadmin_opt_state {int repository_path; int wait; } ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 TYPE_1__* FUNC_3 (int **,int ,struct svnadmin_opt_state*,int *) ;
 TYPE_1__* FUNC_4 (int *,int *,int ,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int *,int ,...) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int ,int *,int ) ;
 TYPE_1__* FUNC_10 (int *,int ,int *) ;
 int FUNC_11 (int *) ;
 TYPE_1__* FUNC_12 (int ,int ,int ,int *,int ,int *,int *) ;
 TYPE_1__* FUNC_13 (int **,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(apr_getopt_t *VAR_7, void *VAR_8, apr_pool_t *VAR_9)
{
  svn_revnum_t VAR_10;
  svn_repos_t *VAR_11;
  svn_error_t *VAR_12;
  struct svnadmin_opt_state *VAR_13 = VAR_8;
  svn_stream_t *VAR_14 = ((void*)0);


  FUNC_1(FUNC_4(((void*)0), VAR_7, 0, 0, VAR_9));

  FUNC_1(FUNC_13(&VAR_14, VAR_9));




  FUNC_5();

  VAR_12 = FUNC_12(VAR_13->repository_path, VAR_3,
                           VAR_5, VAR_14,
                           VAR_4, ((void*)0), VAR_9);
  if (VAR_12)
    {
      if (! FUNC_0(VAR_12->apr_err))
        return VAR_12;
      FUNC_8(VAR_12);
      if (! VAR_13->wait)
        return FUNC_9(VAR_1, ((void*)0),
                                FUNC_2("Failed to get exclusive repository "
                                  "access; perhaps another process\n"
                                  "such as httpd, svnserve or svn "
                                  "has it open?"));
      FUNC_1(FUNC_7(VAR_9,
                                 FUNC_2("Waiting on repository lock; perhaps"
                                   " another process has it open?\n")));
      FUNC_1(FUNC_6(VAR_6));
      FUNC_1(FUNC_12(VAR_13->repository_path, VAR_0,
                                 VAR_5, VAR_14,
                                 VAR_4, ((void*)0), VAR_9));
    }

  FUNC_1(FUNC_7(VAR_9, FUNC_2("\nRecovery completed.\n")));




  FUNC_1(FUNC_3(&VAR_11, VAR_13->repository_path, VAR_13, VAR_9));
  FUNC_1(FUNC_10(&VAR_10, FUNC_11(VAR_11), VAR_9));
  FUNC_1(FUNC_7(VAR_9, FUNC_2("The latest repos revision is %ld.\n"),
                             VAR_10));

  return VAR_2;
}
