
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int terminal_handle_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int config_dir; } ;
typedef TYPE_1__ svn_cmdline_prompt_baton2_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,char const*,char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const**,char const*,scalar_t__,TYPE_1__*,int *) ;
 int FUNC_5 (char const**,int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,scalar_t__,int *) ;
 int FUNC_8 (int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_boolean_t *VAR_4,
                        const char *VAR_5,
                        const char *VAR_6,
                        const char *VAR_7,
                        void *VAR_8,
                        apr_pool_t *VAR_9)
{
  const char *VAR_10 = ((void*)0);
  svn_boolean_t VAR_11 = VAR_0;
  svn_cmdline_prompt_baton2_t *VAR_12 = VAR_8;
  const char *VAR_13 = ((void*)0);
  terminal_handle_t *VAR_14;

  *VAR_4 = VAR_0;

  if (VAR_12)
    FUNC_0(FUNC_5(&VAR_13, VAR_12->config_dir,
                                            VAR_1, VAR_9));

  FUNC_0(FUNC_7(&VAR_14, VAR_0, VAR_9));
  FUNC_0(FUNC_8(FUNC_2(VAR_9, VAR_7,
                                     VAR_5, VAR_13),
                        VAR_14, VAR_9));
  FUNC_0(FUNC_6(VAR_14));

  do
    {
      FUNC_0(FUNC_4(&VAR_10, VAR_6, VAR_0, VAR_12, VAR_9));
      if (FUNC_3(VAR_10, FUNC_1("yes")) == 0 ||
          FUNC_3(VAR_10, FUNC_1("y")) == 0)
        {
          *VAR_4 = VAR_3;
          VAR_11 = VAR_3;
        }
      else if (FUNC_3(VAR_10, FUNC_1("no")) == 0 ||
               FUNC_3(VAR_10, FUNC_1("n")) == 0)
        {
          *VAR_4 = VAR_0;
          VAR_11 = VAR_3;
        }
      else
          VAR_6 = FUNC_1("Please type 'yes' or 'no': ");
    }
  while (! VAR_11);

  return VAR_2;
}
