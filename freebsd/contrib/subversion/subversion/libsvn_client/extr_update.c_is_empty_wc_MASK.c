
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_11__ {char* name; } ;
typedef TYPE_2__ apr_finfo_t ;
typedef int apr_dir_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int **,char const*,int *) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,int ,int *,int *) ;
 int FUNC_6 (char*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_boolean_t *VAR_4,
            const char *VAR_5,
            const char *VAR_6,
            apr_pool_t *VAR_7)
{
  apr_dir_t *VAR_8;
  apr_finfo_t VAR_9;
  svn_error_t *VAR_10;


  *VAR_4 = VAR_3;



  VAR_10 = FUNC_4(&VAR_8, VAR_5, VAR_7);
  if (VAR_10)
    {
      if (! FUNC_0(VAR_10->apr_err))
        *VAR_4 = VAR_1;

      FUNC_2(VAR_10);
      return VAR_2;
    }

  for (VAR_10 = FUNC_5(&VAR_9, VAR_0, VAR_8, VAR_7);
       VAR_10 == VAR_2;
       VAR_10 = FUNC_5(&VAR_9, VAR_0, VAR_8, VAR_7))
    {




      if (! (VAR_9.name[0] == '.'
             && (VAR_9.name[1] == '\0'
                 || (VAR_9.name[1] == '.' && VAR_9.name[2] == '\0'))))
        {
          if ( ! FUNC_6(VAR_9.name, VAR_7)
              || FUNC_1(VAR_5, VAR_6) != 0)
            {
              *VAR_4 = VAR_1;
              break;
            }
        }
    }

  if (VAR_10)
    {
      if (! FUNC_0(VAR_10->apr_err))
        {


          *VAR_4 = VAR_1;
        }

      FUNC_2(VAR_10);
    }

  return FUNC_3(VAR_8);
}
