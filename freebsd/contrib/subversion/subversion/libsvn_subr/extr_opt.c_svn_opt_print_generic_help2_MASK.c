
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_opt_subcommand_desc2_t ;
struct TYPE_5__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_getopt_option_t ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (char const*,int const*,int const*,char const*,int *,int *) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,char*) ;

void
FUNC_3(const char *VAR_3,
                            const svn_opt_subcommand_desc2_t *VAR_4,
                            const apr_getopt_option_t *VAR_5,
                            const char *VAR_6,
                            apr_pool_t *VAR_7, FILE *VAR_8)
{
  svn_error_t *VAR_9;

  VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
                                VAR_8);
  if (VAR_9 && VAR_9->apr_err != VAR_1)
    FUNC_2(VAR_9, VAR_2, VAR_0, "svn: ");
  FUNC_1(VAR_9);
}
