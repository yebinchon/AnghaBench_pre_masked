
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_opt_subcommand_desc_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_getopt_option_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int const*,int const*,int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int ,int *,int ,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,char*) ;
 int * FUNC_5 (int const*,char const*) ;

void
FUNC_6(const char *VAR_4,
                        const svn_opt_subcommand_desc_t *VAR_5,
                        const apr_getopt_option_t *VAR_6,
                        apr_pool_t *VAR_7)
{
  const svn_opt_subcommand_desc_t *VAR_8 =
    FUNC_5(VAR_5, VAR_4);
  svn_error_t *VAR_9;

  if (VAR_8)
    VAR_9 = FUNC_1(VAR_8, VAR_6, VAR_1, VAR_7, VAR_3);
  else
    VAR_9 = FUNC_2(VAR_2, VAR_7,
                              FUNC_0("\"%s\": unknown command.\n\n"), VAR_4);

  if (VAR_9) {
    FUNC_4(VAR_9, VAR_2, VAR_0, "svn: ");
    FUNC_3(VAR_9);
  }
}
