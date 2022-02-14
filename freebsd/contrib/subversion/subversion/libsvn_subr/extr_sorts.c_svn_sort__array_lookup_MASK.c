
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int apr_size_t ;
struct TYPE_3__ {int nelts; int elt_size; void const* elts; } ;
typedef TYPE_1__ apr_array_header_t ;


 int FUNC_0 (void const*,void*,int,int,int (*) (void const*,void const*)) ;

void *
FUNC_1(const apr_array_header_t *VAR_0,
                       const void *VAR_1,
                       int *VAR_2,
                       int (*VAR_3)(const void *, const void *))
{
  void *VAR_4;
  int VAR_5;



  if (VAR_2)
    {


      VAR_5 = *VAR_2 + 1;
      if (VAR_5 >= VAR_0->nelts)
        {




          apr_size_t VAR_6;

          *VAR_2 = VAR_0->nelts;
          if (VAR_0->nelts == 0)
            return ((void*)0);

          VAR_6 = (VAR_0->nelts - 1) * VAR_0->elt_size;
          if (VAR_3(VAR_0->elts + VAR_6, VAR_1) < 0)
            return ((void*)0);
        }
      else if (VAR_5 > 0)
        {



          void *VAR_7;

          *VAR_2 = VAR_5;
          VAR_7 = VAR_0->elts + (VAR_5-1) * VAR_0->elt_size;
          VAR_4 = VAR_0->elts + VAR_5 * VAR_0->elt_size;
          if (VAR_3(VAR_7, VAR_1) && !VAR_3(VAR_4, VAR_1))
            return VAR_4;
        }
      else if (VAR_5 <= 0)
        {


          *VAR_2 = 0;
          if (!VAR_3(VAR_0->elts, VAR_1))
            return VAR_0->elts;
        }


    }

  VAR_5 = FUNC_0(VAR_1, VAR_0->elts, VAR_0->nelts, VAR_0->elt_size,
                            VAR_3);
  if (VAR_2)
    *VAR_2 = VAR_5;
  if (VAR_5 >= VAR_0->nelts)
    return ((void*)0);

  VAR_4 = VAR_0->elts + VAR_5 * VAR_0->elt_size;
  return VAR_3(VAR_4, VAR_1) ? ((void*)0) : VAR_4;
}
