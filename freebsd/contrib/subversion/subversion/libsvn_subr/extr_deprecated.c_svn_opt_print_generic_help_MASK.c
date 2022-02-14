
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ name; } ;
typedef TYPE_1__ svn_opt_subcommand_desc_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_getopt_option_t ;
typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__ const*,int const*,int ,int *,int *) ;
 int VAR_1 ;
 int * FUNC_1 (char const*,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,char*) ;

void
FUNC_4(const char *VAR_2,
                           const svn_opt_subcommand_desc_t *VAR_3,
                           const apr_getopt_option_t *VAR_4,
                           const char *VAR_5,
                           apr_pool_t *VAR_6, FILE *VAR_7)
{
  int VAR_8 = 0;
  svn_error_t *VAR_9;

  if (VAR_2)
    if ((VAR_9 = FUNC_1(VAR_2, VAR_7, VAR_6)))
      goto print_error;

  while (VAR_3[VAR_8].name)
    {
      if ((VAR_9 = FUNC_1("   ", VAR_7, VAR_6))
          || (VAR_9 = FUNC_0(VAR_3 + VAR_8, VAR_4, VAR_0,
                                       VAR_6, VAR_7))
          || (VAR_9 = FUNC_1("\n", VAR_7, VAR_6)))
        goto print_error;
      VAR_8++;
    }

  if ((VAR_9 = FUNC_1("\n", VAR_7, VAR_6)))
    goto print_error;

  if (VAR_5)
    if ((VAR_9 = FUNC_1(VAR_5, VAR_7, VAR_6)))
      goto print_error;

  return;

 print_error:
  FUNC_3(VAR_9, VAR_1, VAR_0, "svn: ");
  FUNC_2(VAR_9);
}
