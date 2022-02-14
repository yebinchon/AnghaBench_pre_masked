
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_opt_subcommand_desc2_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int optch; char* name; } ;
typedef TYPE_1__ apr_getopt_option_t ;


 TYPE_1__* FUNC_0 (int,TYPE_1__ const*,int const*,int *) ;

__attribute__((used)) static const apr_getopt_option_t *
FUNC_1(const char **VAR_0,
                     int VAR_1,
                     const apr_getopt_option_t *VAR_2,
                     const svn_opt_subcommand_desc2_t *VAR_3,
                     apr_pool_t *VAR_4)
{
  const apr_getopt_option_t *VAR_5;
  const apr_getopt_option_t *VAR_6
    = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);


  *VAR_0 = ((void*)0);
  for (VAR_5 = VAR_2; VAR_5->optch; VAR_5++)
    {
      if (VAR_5->optch == VAR_1 && VAR_5->name != VAR_6->name)
        {
          *VAR_0 = VAR_5->name;
          break;
        }
    }

  return VAR_6;
}
