
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_4__ {TYPE_2__* result; int * missing; } ;
typedef TYPE_1__ svn_fs_x__rep_extractor_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {scalar_t__ len; scalar_t__ data; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (TYPE_2__*,int *) ;
 int * FUNC_2 (scalar_t__,scalar_t__,int *) ;

svn_error_t *
FUNC_3(svn_stringbuf_t **VAR_1,
                          svn_fs_x__rep_extractor_t *VAR_2,
                          apr_size_t VAR_3,
                          apr_size_t VAR_4,
                          apr_pool_t *VAR_5,
                          apr_pool_t *VAR_6)
{

  FUNC_0(VAR_2->missing == ((void*)0));

  if (VAR_4 == 0)
    {
      *VAR_1 = FUNC_1(VAR_2->result, VAR_5);
    }
  else
    {

      if (VAR_3 > VAR_2->result->len)
        VAR_3 = VAR_2->result->len;

      if (VAR_4 > VAR_2->result->len - VAR_3)
        VAR_4 = VAR_2->result->len - VAR_3;

      *VAR_1 = FUNC_2(VAR_2->result->data + VAR_3,
                                        VAR_4, VAR_5);
    }

  return VAR_0;
}
