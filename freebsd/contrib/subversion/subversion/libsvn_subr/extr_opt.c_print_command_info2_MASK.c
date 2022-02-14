
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* name; char** aliases; char* help; int const* valid_options; } ;
typedef TYPE_1__ svn_opt_subcommand_desc2_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {scalar_t__ description; } ;
typedef TYPE_2__ apr_getopt_option_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char const**,TYPE_2__ const*,char const*,scalar_t__,int *) ;
 TYPE_2__* FUNC_3 (char const**,int const,TYPE_2__ const*,TYPE_1__ const*,int *) ;
 int FUNC_4 (int *,int *,char*,...) ;
 int FUNC_5 (char*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const svn_opt_subcommand_desc2_t *VAR_5,
                    const apr_getopt_option_t *VAR_6,
                    const int *VAR_7,
                    svn_boolean_t VAR_8,
                    apr_pool_t *VAR_9,
                    FILE *VAR_10)
{
  svn_boolean_t VAR_11;
  apr_size_t VAR_12;


  FUNC_0(FUNC_5(VAR_5->name, VAR_10, VAR_9));


  VAR_11 = VAR_4;
  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
    {
      if (VAR_5->aliases[VAR_12] == ((void*)0))
        break;

      if (VAR_11) {
        FUNC_0(FUNC_5(" (", VAR_10, VAR_9));
        VAR_11 = VAR_0;
      }
      else
        FUNC_0(FUNC_5(", ", VAR_10, VAR_9));

      FUNC_0(FUNC_5(VAR_5->aliases[VAR_12], VAR_10, VAR_9));
    }

  if (! VAR_11)
    FUNC_0(FUNC_5(")", VAR_10, VAR_9));

  if (VAR_8)
    {
      const apr_getopt_option_t *VAR_13;
      const char *VAR_14;
      svn_boolean_t VAR_15 = VAR_0;

      FUNC_0(FUNC_4(VAR_10, VAR_9, ": %s", FUNC_1(VAR_5->help)));


      for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
        {
          if (VAR_5->valid_options[VAR_12])
            {
              if (!VAR_15)
                {
                  FUNC_0(FUNC_5(FUNC_1("\nValid options:\n"),
                                            VAR_10, VAR_9));
                  VAR_15 = VAR_4;
                }


              VAR_13 = FUNC_3(&VAR_14, VAR_5->valid_options[VAR_12],
                                            VAR_6, VAR_5, VAR_9);


              if (VAR_13 && VAR_13->description)
                {
                  const char *VAR_16;
                  FUNC_2(&VAR_16, VAR_13, VAR_14, VAR_4, VAR_9);
                  FUNC_0(FUNC_4(VAR_10, VAR_9, "  %s\n",
                                              VAR_16));
                }
            }
        }

      if (VAR_7 && *VAR_7)
        {
          FUNC_0(FUNC_5(FUNC_1("\nGlobal options:\n"),
                                    VAR_10, VAR_9));
          VAR_15 = VAR_4;

          for (VAR_12 = 0; VAR_7[VAR_12]; VAR_12++)
            {


              VAR_13 = FUNC_3(&VAR_14, VAR_7[VAR_12],
                                            VAR_6, VAR_5, VAR_9);


              if (VAR_13 && VAR_13->description)
                {
                  const char *VAR_17;
                  FUNC_2(&VAR_17, VAR_13, VAR_14, VAR_4, VAR_9);
                  FUNC_0(FUNC_4(VAR_10, VAR_9, "  %s\n",
                                              VAR_17));
                }
            }
        }

      if (VAR_15)
        FUNC_0(FUNC_4(VAR_10, VAR_9, "\n"));
    }

  return VAR_1;
}
