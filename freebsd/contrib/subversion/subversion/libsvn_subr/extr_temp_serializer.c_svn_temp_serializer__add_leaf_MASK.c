
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int buffer; } ;
typedef TYPE_1__ svn_temp_serializer__context_t ;
typedef int apr_size_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,void const* const*) ;
 int FUNC_2 (int ,void const*,int ) ;

void
FUNC_3(svn_temp_serializer__context_t *VAR_0,
                              const void * const * VAR_1,
                              apr_size_t VAR_2)
{
  const void *VAR_3 = *VAR_1;


  if (VAR_3)
    FUNC_0(VAR_0);



  FUNC_1(VAR_0, VAR_1);


  if (*VAR_1)
    FUNC_2(VAR_0->buffer, VAR_3, VAR_2);
}
