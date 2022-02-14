
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__**,TYPE_1__ const*,int *) ;

svn_error_t *
FUNC_2(const char **VAR_1,
                                    const svn_stringbuf_t *VAR_2,
                                    apr_pool_t *VAR_3)
{
  svn_stringbuf_t *VAR_4;

  FUNC_0(FUNC_1(&VAR_4, VAR_2, VAR_3));
  *VAR_1 = VAR_4->data;

  return VAR_0;
}
