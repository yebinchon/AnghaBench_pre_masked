
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nelts; int elt_size; scalar_t__ elts; } ;
typedef TYPE_1__ apr_array_header_t ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;

void
FUNC_1(apr_array_header_t *VAR_0,
                       int VAR_1,
                       int VAR_2)
{

  if (VAR_1 >= 0
      && VAR_1 < VAR_0->nelts
      && VAR_2 > 0
      && (VAR_0->nelts - VAR_1) >= VAR_2)
    {



      if ((VAR_2 + VAR_1) < VAR_0->nelts)
        FUNC_0(
          VAR_0->elts + VAR_0->elt_size * VAR_1,
          VAR_0->elts + (VAR_0->elt_size * (VAR_1 + VAR_2)),
          VAR_0->elt_size * (VAR_0->nelts - VAR_2 - VAR_1));


      VAR_0->nelts -= VAR_2;
    }
}
