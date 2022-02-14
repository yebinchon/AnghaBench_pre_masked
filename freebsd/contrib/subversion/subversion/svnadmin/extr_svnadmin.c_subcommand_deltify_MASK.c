
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct svnadmin_opt_state {int quiet; int end_revision; int start_revision; int repository_path; } ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__*,int *,scalar_t__,int *,int *) ;
 int FUNC_4 (int **,int ,struct svnadmin_opt_state*,int *) ;
 int FUNC_5 (int *,int *,int ,int ,int *) ;
 int FUNC_6 (int *,int ,...) ;
 int * FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int *,scalar_t__,int *) ;
 int FUNC_9 (scalar_t__*,int *,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(apr_getopt_t *VAR_3, void *VAR_4, apr_pool_t *VAR_5)
{
  struct svnadmin_opt_state *VAR_6 = VAR_4;
  svn_repos_t *VAR_7;
  svn_fs_t *VAR_8;
  svn_revnum_t VAR_9 = VAR_1, VAR_10 = VAR_1;
  svn_revnum_t VAR_11, VAR_12;
  apr_pool_t *VAR_13 = FUNC_11(VAR_5);


  FUNC_0(FUNC_5(((void*)0), VAR_3, 0, 0, VAR_5));

  FUNC_0(FUNC_4(&VAR_7, VAR_6->repository_path, VAR_6, VAR_5));
  VAR_8 = FUNC_13(VAR_7);
  FUNC_0(FUNC_9(&VAR_11, VAR_8, VAR_5));


  FUNC_0(FUNC_3(&VAR_9, &VAR_6->start_revision,
                     VAR_11, VAR_7, VAR_5));
  FUNC_0(FUNC_3(&VAR_10, &VAR_6->end_revision,
                     VAR_11, VAR_7, VAR_5));


  if (VAR_9 == VAR_1)
    VAR_9 = VAR_11;
  if (VAR_10 == VAR_1)
    VAR_10 = VAR_9;

  if (VAR_9 > VAR_10)
    return FUNC_7(VAR_0, ((void*)0),
       FUNC_1("First revision cannot be higher than second"));



  for (VAR_12 = VAR_9; VAR_12 <= VAR_10; VAR_12++)
    {
      FUNC_10(VAR_13);
      FUNC_0(FUNC_2(((void*)0)));
      if (! VAR_6->quiet)
        FUNC_0(FUNC_6(VAR_13, FUNC_1("Deltifying revision %ld..."),
                                   VAR_12));
      FUNC_0(FUNC_8(VAR_8, VAR_12, VAR_13));
      if (! VAR_6->quiet)
        FUNC_0(FUNC_6(VAR_13, FUNC_1("done.\n")));
    }
  FUNC_12(VAR_13);

  return VAR_2;
}
