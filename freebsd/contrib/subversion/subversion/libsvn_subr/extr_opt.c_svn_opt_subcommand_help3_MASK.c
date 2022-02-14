
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_opt_subcommand_desc2_t ;
struct TYPE_6__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_getopt_option_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int const*,int const*,int const*,int ,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (int ,int *,int ,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,char*) ;
 int * FUNC_5 (int const*,char const*) ;

void
FUNC_6(const char *VAR_5,
                         const svn_opt_subcommand_desc2_t *VAR_6,
                         const apr_getopt_option_t *VAR_7,
                         const int *VAR_8,
                         apr_pool_t *VAR_9)
{
  const svn_opt_subcommand_desc2_t *VAR_10 =
    FUNC_5(VAR_6, VAR_5);
  svn_error_t *VAR_11;

  if (VAR_10)
    VAR_11 = FUNC_1(VAR_10, VAR_7, VAR_8,
                              VAR_2, VAR_9, VAR_4);
  else
    VAR_11 = FUNC_2(VAR_3, VAR_9,
                              FUNC_0("\"%s\": unknown command.\n\n"), VAR_5);

  if (VAR_11) {

    if (VAR_11->apr_err != VAR_1)
      FUNC_4(VAR_11, VAR_3, VAR_0, "svn: ");
    FUNC_3(VAR_11);
  }
}
