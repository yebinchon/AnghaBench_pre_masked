
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int operation; int new_filename; int old_filename; } ;
typedef TYPE_1__ svn_patch_t ;
typedef int svn_error_t ;
typedef int ptrdiff_t ;
typedef enum parse_state { ____Placeholder_parse_state } parse_state ;
typedef int apr_pool_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,char const*,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*,char const*,int) ;
 void* FUNC_5 (char const*,char*) ;
 int VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_6(enum parse_state *VAR_5, char *VAR_6, svn_patch_t *VAR_7,
          apr_pool_t *VAR_8, apr_pool_t *VAR_9)
{
  const char *VAR_10;
  char *VAR_11;
  const char *VAR_12;
  const char *VAR_13;
  char *VAR_14;
  const char *VAR_15;
  VAR_15 = FUNC_5(VAR_6, " a/");

  if (! VAR_15)
    {
      *VAR_5 = VAR_3;
      return VAR_0;
    }

  if (! *(VAR_15 + 3))
    {
      *VAR_5 = VAR_3;
      return VAR_0;
    }

  VAR_14 = FUNC_5(VAR_15, " b/");

  if (! VAR_14)
    {
      *VAR_5 = VAR_3;
      return VAR_0;
    }

  if (! *(VAR_14 + 3))
    {
      *VAR_5 = VAR_3;
      return VAR_0;
    }






  VAR_10 = VAR_6 + FUNC_0("diff --git a/");
  VAR_13 = VAR_6 + FUNC_3(VAR_6);
  VAR_12 = VAR_10;

  while (VAR_1)
    {
      ptrdiff_t VAR_16;
      ptrdiff_t VAR_17;

      VAR_14 = FUNC_5(VAR_12, " b/");


      if (! VAR_14)
        break;

      VAR_11 = VAR_14;
      VAR_12 = VAR_14 + FUNC_0(" b/");


      if (! *VAR_12)
        break;

      VAR_16 = VAR_11 - VAR_10;
      VAR_17 = VAR_13 - VAR_12;


      if (VAR_16 == VAR_17
          && ! FUNC_4(VAR_10, VAR_12, VAR_16))
        {
          *VAR_11 = '\0';
          FUNC_1(FUNC_2(&VAR_7->old_filename, VAR_10,
                                VAR_8, VAR_9));

          FUNC_1(FUNC_2(&VAR_7->new_filename, VAR_12,
                                VAR_8, VAR_9));
          break;
        }
    }



  VAR_7->operation = VAR_4;

  *VAR_5 = VAR_2;
  return VAR_0;
}
