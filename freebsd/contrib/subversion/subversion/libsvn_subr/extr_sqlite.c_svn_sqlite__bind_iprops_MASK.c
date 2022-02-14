
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int * data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *,int *) ;
 int FUNC_3 (int **,int const*,int *,int *) ;
 int FUNC_4 (int *,int,int *,int ) ;

svn_error_t *
FUNC_5(svn_sqlite__stmt_t *VAR_0,
                        int VAR_1,
                        const apr_array_header_t *VAR_2,
                        apr_pool_t *VAR_3)
{
  svn_skel_t *VAR_4;
  svn_stringbuf_t *VAR_5;

  if (VAR_2 == ((void*)0))
    return FUNC_1(FUNC_4(VAR_0, VAR_1, ((void*)0), 0));

  FUNC_0(FUNC_3(&VAR_4, VAR_2,
                                      VAR_3, VAR_3));
  VAR_5 = FUNC_2(VAR_4, VAR_3);
  return FUNC_1(FUNC_4(VAR_0,
                                               VAR_1,
                                               VAR_5->data,
                                               VAR_5->len));
}
