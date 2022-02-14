
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_temp_serializer__context_t ;
struct TYPE_5__ {int len; void* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int elt_size; int nelts; int elts; } ;
typedef TYPE_2__ apr_array_header_t ;


 int * VAR_0 ;
 int FUNC_0 (int *,void const* const*,int) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_2__*,int,int,int *) ;

svn_error_t *
FUNC_3(void **VAR_1,
                              apr_size_t *VAR_2,
                              void *VAR_3,
                              apr_pool_t *VAR_4)
{
  apr_array_header_t *VAR_5 = VAR_3;
  svn_temp_serializer__context_t *VAR_6;
  svn_stringbuf_t *VAR_7;
  apr_size_t VAR_8 = VAR_5->elt_size * VAR_5->nelts;


  VAR_6 = FUNC_2(VAR_5,
                                      sizeof(*VAR_5),
                                      VAR_8 + sizeof(*VAR_5) + 32,
                                      VAR_4);


  FUNC_0(VAR_6,
                                (const void * const *)&VAR_5->elts,
                                VAR_8);


  VAR_7 = FUNC_1(VAR_6);

  *VAR_1 = VAR_7->data;
  *VAR_2 = VAR_7->len;

  return VAR_0;
}
