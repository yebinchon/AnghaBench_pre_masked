
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* name; char** aliases; char* help; scalar_t__* valid_options; } ;
typedef TYPE_1__ svn_opt_subcommand_desc_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_9__ {scalar_t__ description; } ;
typedef TYPE_2__ apr_getopt_option_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,char*,...) ;
 int FUNC_3 (char*,int *,int *) ;
 int FUNC_4 (char const**,TYPE_2__ const*,scalar_t__,int *) ;
 TYPE_2__* FUNC_5 (scalar_t__,TYPE_2__ const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const svn_opt_subcommand_desc_t *VAR_5,
                   const apr_getopt_option_t *VAR_6,
                   svn_boolean_t VAR_7,
                   apr_pool_t *VAR_8,
                   FILE *VAR_9)
{
  svn_boolean_t VAR_10;
  apr_size_t VAR_11;


  FUNC_0(FUNC_3(VAR_5->name, VAR_9, VAR_8));


  VAR_10 = VAR_4;
  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
    {
      if (VAR_5->aliases[VAR_11] == ((void*)0))
        break;

      if (VAR_10) {
        FUNC_0(FUNC_3(" (", VAR_9, VAR_8));
        VAR_10 = VAR_0;
      }
      else
        FUNC_0(FUNC_3(", ", VAR_9, VAR_8));

      FUNC_0(FUNC_3(VAR_5->aliases[VAR_11], VAR_9, VAR_8));
    }

  if (! VAR_10)
    FUNC_0(FUNC_3(")", VAR_9, VAR_8));

  if (VAR_7)
    {
      const apr_getopt_option_t *VAR_12;
      svn_boolean_t VAR_13 = VAR_0;

      FUNC_0(FUNC_2(VAR_9, VAR_8, ": %s", FUNC_1(VAR_5->help)));


      for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
        {
          if (VAR_5->valid_options[VAR_11])
            {
              if (!VAR_13)
                {
                  FUNC_0(FUNC_3(FUNC_1("\nValid options:\n"),
                                            VAR_9, VAR_8));
                  VAR_13 = VAR_4;
                }


              VAR_12 =
                FUNC_5(VAR_5->valid_options[VAR_11],
                                              VAR_6, ((void*)0), VAR_8);


              if (VAR_12 && VAR_12->description)
                {
                  const char *VAR_14;
                  FUNC_4(&VAR_14, VAR_12, VAR_4, VAR_8);
                  FUNC_0(FUNC_2(VAR_9, VAR_8, "  %s\n",
                                              VAR_14));
                }
            }
        }

      if (VAR_13)
        FUNC_0(FUNC_2(VAR_9, VAR_8, "\n"));
    }

  return VAR_1;
}
