
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int path_order_t ;
struct TYPE_5__ {TYPE_2__* path_order; int info_pool; TYPE_2__* references; } ;
typedef TYPE_1__ pack_context_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {scalar_t__ nelts; scalar_t__ elts; } ;


 int ** FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int **,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*,int **,int **,int ,int) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int (*) (void const*,void const*)) ;

__attribute__((used)) static void
FUNC_7(pack_context_t *VAR_2)
{
  apr_pool_t *VAR_3;
  path_order_t **VAR_4, **VAR_5;
  int VAR_6, VAR_7;



  if (VAR_2->path_order->nelts == 0)
    {
      FUNC_1(VAR_2->references->nelts == 0);
      return;
    }



  FUNC_6(VAR_2->path_order,
                  (int (*)(const void *, const void *))VAR_0);
  FUNC_6(VAR_2->references,
                  (int (*)(const void *, const void *))VAR_1);




  VAR_3 = FUNC_4(VAR_2->info_pool);
  VAR_7 = VAR_2->path_order->nelts;
  VAR_4 = FUNC_0(VAR_3, VAR_7 * sizeof(*VAR_4));
  VAR_5 = (void *)VAR_2->path_order->elts;


  FUNC_2(VAR_5, VAR_7);


  FUNC_3(VAR_2, VAR_5, VAR_4, 0, VAR_7);


  for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
    VAR_5[VAR_6] = VAR_4[VAR_6];

  FUNC_5(VAR_3);
}
