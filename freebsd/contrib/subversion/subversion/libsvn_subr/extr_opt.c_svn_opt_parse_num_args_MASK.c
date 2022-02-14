
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {scalar_t__ ind; scalar_t__ argc; int * argv; } ;
typedef TYPE_1__ apr_getopt_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 (int ,int ,int *) ;

svn_error_t *
FUNC_3(apr_array_header_t **VAR_3,
                       apr_getopt_t *VAR_4,
                       int VAR_5,
                       apr_pool_t *VAR_6)
{
  int VAR_7;
  apr_array_header_t *VAR_8
    = FUNC_0(VAR_6, VAR_0, sizeof(const char *));


  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    {
      if (VAR_4->ind >= VAR_4->argc)
        {
          return FUNC_2(VAR_1, 0, ((void*)0));
        }
      FUNC_1(VAR_8, VAR_4->argv[VAR_4->ind++], VAR_6);
    }

  *VAR_3 = VAR_8;
  return VAR_2;
}
