
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_error_t ;
struct svnadmin_opt_state {int quiet; int use_deltas; int incremental; scalar_t__ exclude; scalar_t__ include; int glob; scalar_t__ file; int repository_path; } ;
struct dump_filter_baton_t {scalar_t__ prefixes; int do_exclude; int glob; int member_0; } ;
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
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_2 (int *,int *,int *,struct svnadmin_opt_state*,int *) ;
 int FUNC_3 (int **,int ,struct svnadmin_opt_state*,int *) ;
 int FUNC_4 (int *,int *,int ,int ,int *) ;
 int * FUNC_5 (int ,int *) ;
 int * VAR_11 ;
 int VAR_12 ;
 int * FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int **,scalar_t__,int,int ,int *) ;
 int FUNC_8 (int *,int *,int ,int ,int ,int ,int ,int ,int *,int *,int *,struct dump_filter_baton_t*,int ,int *,int *) ;
 int FUNC_9 (int **,int *) ;
 int * FUNC_10 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(apr_getopt_t *VAR_13, void *VAR_14, apr_pool_t *VAR_15)
{
  struct svnadmin_opt_state *VAR_16 = VAR_14;
  svn_repos_t *VAR_17;
  svn_stream_t *VAR_18;
  svn_revnum_t VAR_19, VAR_20;
  svn_stream_t *VAR_21 = ((void*)0);
  struct dump_filter_baton_t VAR_22 = {0};


  FUNC_0(FUNC_4(((void*)0), VAR_13, 0, 0, VAR_15));

  FUNC_0(FUNC_3(&VAR_17, VAR_16->repository_path, VAR_16, VAR_15));
  FUNC_0(FUNC_2(&VAR_19, &VAR_20, VAR_17, VAR_16, VAR_15));


  if (VAR_16->file)
    {
      apr_file_t *VAR_23;


      FUNC_0(FUNC_7(&VAR_23, VAR_16->file,
                               VAR_4 | VAR_1 | VAR_3
                               | VAR_0, VAR_2, VAR_15));
      VAR_18 = FUNC_10(VAR_23, VAR_5, VAR_15);
    }
  else
    FUNC_0(FUNC_9(&VAR_18, VAR_15));


  if (! VAR_16->quiet)
    VAR_21 = FUNC_5(VAR_12, VAR_15);


  VAR_22.glob = VAR_16->glob;

  if (VAR_16->exclude && !VAR_16->include)
    {
      VAR_22.prefixes = VAR_16->exclude;
      VAR_22.do_exclude = VAR_8;
    }
  else if (VAR_16->include && !VAR_16->exclude)
    {
      VAR_22.prefixes = VAR_16->include;
      VAR_22.do_exclude = VAR_5;
    }
  else if (VAR_16->include && VAR_16->exclude)
    {
      return FUNC_6(VAR_6, ((void*)0),
                               FUNC_1("'--exclude' and '--include' options "
                                 "cannot be used simultaneously"));
    }

  FUNC_0(FUNC_8(VAR_17, VAR_18, VAR_19, VAR_20,
                             VAR_16->incremental, VAR_16->use_deltas,
                             VAR_8, VAR_8,
                             !VAR_16->quiet ? VAR_11 : ((void*)0),
                             VAR_21,
                             VAR_22.prefixes ? VAR_10 : ((void*)0),
                             &VAR_22,
                             VAR_9, ((void*)0), VAR_15));

  return VAR_7;
}
