
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int representation_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *,int *,int) ;

representation_t *
FUNC_1(representation_t *VAR_0,
                    apr_pool_t *VAR_1)
{
  if (VAR_0 == ((void*)0))
    return ((void*)0);

  return FUNC_0(VAR_1, VAR_0, sizeof(*VAR_0));
}
