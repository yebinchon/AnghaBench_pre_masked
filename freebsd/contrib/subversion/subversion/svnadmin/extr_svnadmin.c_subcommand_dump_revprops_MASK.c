
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_error_t ;
struct svnadmin_opt_state {int quiet; scalar_t__ file; int repository_path; } ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int *,int *,struct svnadmin_opt_state*,int *) ;
 int FUNC_2 (int **,int ,struct svnadmin_opt_state*,int *) ;
 int FUNC_3 (int *,int *,int ,int ,int *) ;
 int * FUNC_4 (int ,int *) ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int **,scalar_t__,int,int ,int *) ;
 int FUNC_6 (int *,int *,int ,int ,int ,int ,int ,int ,int *,int *,int *,int *,int ,int *,int *) ;
 int FUNC_7 (int **,int *) ;
 int * FUNC_8 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(apr_getopt_t *VAR_11, void *VAR_12, apr_pool_t *VAR_13)
{
  struct svnadmin_opt_state *VAR_14 = VAR_12;
  svn_repos_t *VAR_15;
  svn_stream_t *VAR_16;
  svn_revnum_t VAR_17, VAR_18;
  svn_stream_t *VAR_19 = ((void*)0);


  FUNC_0(FUNC_3(((void*)0), VAR_11, 0, 0, VAR_13));

  FUNC_0(FUNC_2(&VAR_15, VAR_14->repository_path, VAR_14, VAR_13));
  FUNC_0(FUNC_1(&VAR_17, &VAR_18, VAR_15, VAR_14, VAR_13));


  if (VAR_14->file)
    {
      apr_file_t *VAR_20;


      FUNC_0(FUNC_5(&VAR_20, VAR_14->file,
                               VAR_4 | VAR_1 | VAR_3
                               | VAR_0, VAR_2, VAR_13));
      VAR_16 = FUNC_8(VAR_20, VAR_5, VAR_13);
    }
  else
    FUNC_0(FUNC_7(&VAR_16, VAR_13));


  if (! VAR_14->quiet)
    VAR_19 = FUNC_4(VAR_10, VAR_13);

  FUNC_0(FUNC_6(VAR_15, VAR_16, VAR_17, VAR_18,
                             VAR_5, VAR_5, VAR_7, VAR_5,
                             !VAR_14->quiet ? VAR_9 : ((void*)0),
                             VAR_19, ((void*)0), ((void*)0),
                             VAR_8, ((void*)0), VAR_13));

  return VAR_6;
}
