
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_repos_t ;
struct TYPE_7__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct svnadmin_opt_state {scalar_t__ quiet; int normalize_props; int ignore_dates; int bypass_prop_validation; scalar_t__ file; int repository_path; } ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,struct svnadmin_opt_state*) ;
 int FUNC_3 (int **,int ,struct svnadmin_opt_state*,int *) ;
 int FUNC_4 (int *,int *,int ,int ,int *) ;
 int * FUNC_5 (int ,int *) ;
 int * VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_7 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_8 (int *,int *,int ,int ,int,int ,int ,int *,int *,int ,int *,int *) ;
 int FUNC_9 (int **,int ,int *) ;
 int FUNC_10 (int **,scalar_t__,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(apr_getopt_t *VAR_6, void *VAR_7, apr_pool_t *VAR_8)
{
  svn_error_t *VAR_9;
  struct svnadmin_opt_state *VAR_10 = VAR_7;
  svn_repos_t *VAR_11;
  svn_revnum_t VAR_12, VAR_13;
  svn_stream_t *VAR_14;

  svn_stream_t *VAR_15 = ((void*)0);


  FUNC_0(FUNC_4(((void*)0), VAR_6, 0, 0, VAR_8));



  FUNC_0(FUNC_2(&VAR_12, &VAR_13, VAR_10));

  FUNC_0(FUNC_3(&VAR_11, VAR_10->repository_path, VAR_10, VAR_8));


  if (VAR_10->file)
    FUNC_0(FUNC_10(&VAR_14, VAR_10->file,
                                     VAR_8, VAR_8));
  else
    FUNC_0(FUNC_9(&VAR_14, VAR_2, VAR_8));


  if (! VAR_10->quiet)
    VAR_15 = FUNC_5(VAR_5, VAR_8);

  VAR_9 = FUNC_8(VAR_11, VAR_14, VAR_12, VAR_13,
                                   !VAR_10->bypass_prop_validation,
                                   VAR_10->ignore_dates,
                                   VAR_10->normalize_props,
                                   VAR_10->quiet ? ((void*)0)
                                                    : VAR_4,
                                   VAR_15, VAR_3, ((void*)0), VAR_8);

  if (FUNC_6(VAR_9, VAR_1))
    {
      return FUNC_7(VAR_9,
                                  FUNC_1("A property with invalid line ending "
                                    "found in dumpstream; consider using "
                                    "--normalize-props while loading."));
    }
  else if (VAR_9 && VAR_9->apr_err == VAR_0)
    {
      return FUNC_7(VAR_9,
                                  FUNC_1("Invalid property value found in "
                                    "dumpstream; consider repairing the "
                                    "source or using --bypass-prop-validation "
                                    "while loading."));
    }

  return VAR_9;
}
