
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_14__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct svnadmin_opt_state {int repository_path; int wait; } ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (int *,int *,int ,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int ,int *,int ) ;
 TYPE_1__* FUNC_9 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_10 (int ,int ,int ,int *,int *) ;
 TYPE_1__* FUNC_11 (int **,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(apr_getopt_t *VAR_8, void *VAR_9, apr_pool_t *VAR_10)
{
  svn_error_t *VAR_11;
  struct svnadmin_opt_state *VAR_12 = VAR_9;
  svn_stream_t *VAR_13 = ((void*)0);


  FUNC_1(FUNC_3(((void*)0), VAR_8, 0, 0, VAR_10));

  FUNC_1(FUNC_11(&VAR_13, VAR_10));


  FUNC_4();

  VAR_11 = FUNC_10(VAR_12->repository_path, VAR_5,
                           VAR_6, VAR_13, VAR_10);
  if (VAR_11)
    {
      if (FUNC_0(VAR_11->apr_err))
        {
          FUNC_7(VAR_11);
          VAR_11 = VAR_4;
          if (! VAR_12->wait)
            return FUNC_8(VAR_2, ((void*)0),
                                    FUNC_2("Failed to get exclusive repository "
                                      "access; perhaps another process\n"
                                      "such as httpd, svnserve or svn "
                                      "has it open?"));
          FUNC_1(FUNC_6(VAR_10,
                                     FUNC_2("Waiting on repository lock; perhaps"
                                       " another process has it open?\n")));
          FUNC_1(FUNC_5(VAR_7));
          FUNC_1(FUNC_10(VAR_12->repository_path, VAR_0,
                                     VAR_6, VAR_13,
                                     VAR_10));
        }
      else if (VAR_11->apr_err == VAR_1)
        {
          return FUNC_9(VAR_11,
                    FUNC_2("Upgrade of this repository's underlying versioned "
                    "filesystem is not supported; consider "
                    "dumping and loading the data elsewhere"));
        }
      else if (VAR_11->apr_err == VAR_3)
        {
          return FUNC_9(VAR_11,
                    FUNC_2("Upgrade of this repository is not supported; consider "
                    "dumping and loading the data elsewhere"));
        }
    }
  FUNC_1(VAR_11);

  FUNC_1(FUNC_6(VAR_10, FUNC_2("\nUpgrade completed.\n")));
  return VAR_4;
}
