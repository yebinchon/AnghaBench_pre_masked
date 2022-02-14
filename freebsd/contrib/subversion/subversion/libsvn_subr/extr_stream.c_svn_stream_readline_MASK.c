
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_4__ {int baton; int (* readline_fn ) (int ,int **,char const*,int *,int *) ;} ;
typedef TYPE_1__ svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int *,char const*,TYPE_1__*,int *) ;
 int FUNC_2 (int ,int **,char const*,int *,int *) ;

svn_error_t *
FUNC_3(svn_stream_t *VAR_1,
                    svn_stringbuf_t **VAR_2,
                    const char *VAR_3,
                    svn_boolean_t *VAR_4,
                    apr_pool_t *VAR_5)
{
  if (VAR_1->readline_fn)
    {

      FUNC_0(VAR_1->readline_fn(VAR_1->baton, VAR_2, VAR_3, VAR_4, VAR_5));
    }
  else
    {

      FUNC_0(FUNC_1(VAR_2, VAR_4, VAR_3, VAR_1, VAR_5));
    }

  return VAR_0;
}
