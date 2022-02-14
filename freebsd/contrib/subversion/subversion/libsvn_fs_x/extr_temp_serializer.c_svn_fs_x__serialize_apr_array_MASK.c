
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_temp_serializer__context_t ;
typedef int apr_size_t ;
struct TYPE_3__ {int elt_size; scalar_t__ nelts; int elts; } ;
typedef TYPE_1__ apr_array_header_t ;


 int FUNC_0 (int *,void const* const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void const* const*,int) ;

void
FUNC_3(svn_temp_serializer__context_t *VAR_0,
                              apr_array_header_t **VAR_1)
{
  const apr_array_header_t *VAR_2 = *VAR_1;


  if (VAR_2 == ((void*)0))
    return;


  FUNC_2(VAR_0,
                            (const void * const *)VAR_1,
                            sizeof(*VAR_2));


  FUNC_0(VAR_0,
                                (const void * const *)&VAR_2->elts,
                                (apr_size_t)VAR_2->nelts * VAR_2->elt_size);


  FUNC_1(VAR_0);
}
