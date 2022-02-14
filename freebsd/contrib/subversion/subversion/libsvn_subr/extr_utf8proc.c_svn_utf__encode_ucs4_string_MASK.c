
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_1__ svn_membuf_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_int32_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,int*) ;
 int FUNC_2 (TYPE_1__*,int) ;

svn_error_t *
FUNC_3(svn_membuf_t *VAR_1,
                            const apr_int32_t *VAR_2,
                            apr_size_t VAR_3,
                            apr_size_t *VAR_4)
{
  *VAR_4 = 0;
  while (VAR_3-- > 0)
    FUNC_0(FUNC_1(VAR_1, *VAR_2++, VAR_4));
  FUNC_2(VAR_1, *VAR_4 + 1);
  ((char*)VAR_1->data)[*VAR_4] = '\0';
  return VAR_0;
}
