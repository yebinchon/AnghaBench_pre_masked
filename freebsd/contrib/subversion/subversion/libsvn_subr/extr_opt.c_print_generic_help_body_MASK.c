
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ name; } ;
typedef TYPE_1__ svn_opt_subcommand_desc2_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_getopt_option_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_1__ const*,int const*,int *,int ,int *,int *) ;
 int FUNC_2 (char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char *VAR_2,
                        const svn_opt_subcommand_desc2_t *VAR_3,
                        const apr_getopt_option_t *VAR_4,
                        const char *VAR_5,
                        apr_pool_t *VAR_6, FILE *VAR_7)
{
  int VAR_8 = 0;

  if (VAR_2)
    FUNC_0(FUNC_2(VAR_2, VAR_7, VAR_6));

  while (VAR_3[VAR_8].name)
    {
      FUNC_0(FUNC_2("   ", VAR_7, VAR_6));
      FUNC_0(FUNC_1(VAR_3 + VAR_8, VAR_4,
                                  ((void*)0), VAR_0,
                                  VAR_6, VAR_7));
      FUNC_0(FUNC_2("\n", VAR_7, VAR_6));
      VAR_8++;
    }

  FUNC_0(FUNC_2("\n", VAR_7, VAR_6));

  if (VAR_5)
    FUNC_0(FUNC_2(VAR_5, VAR_7, VAR_6));

  return VAR_1;
}
