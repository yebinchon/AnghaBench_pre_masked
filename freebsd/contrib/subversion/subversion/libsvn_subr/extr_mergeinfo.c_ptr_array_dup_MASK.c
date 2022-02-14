
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int apr_pool_t ;
struct TYPE_5__ {size_t nelts; scalar_t__ elts; } ;
typedef TYPE_1__ apr_array_header_t ;


 TYPE_1__* FUNC_0 (int *,size_t,int) ;
 char* FUNC_1 (int *,size_t) ;
 int FUNC_2 (void*,void*,size_t) ;

__attribute__((used)) static apr_array_header_t *
FUNC_3(const apr_array_header_t *VAR_0,
              size_t VAR_1,
              apr_pool_t *VAR_2)
{
  apr_array_header_t *VAR_3 = FUNC_0(VAR_2, VAR_0->nelts,
                                                 sizeof(void *));


  char *VAR_4 = FUNC_1(VAR_2, VAR_1 * VAR_0->nelts);


  void **VAR_5 = (void **)(VAR_0->elts);
  void **VAR_6 = (void **)(VAR_3->elts);
  int VAR_7;


  for (VAR_7 = 0; VAR_7 < VAR_0->nelts; VAR_7++)
    {
      VAR_6[VAR_7] = &VAR_4[VAR_7 * VAR_1];
      FUNC_2(VAR_6[VAR_7], VAR_5[VAR_7], VAR_1);
    }
  VAR_3->nelts = VAR_0->nelts;

  return VAR_3;
}
