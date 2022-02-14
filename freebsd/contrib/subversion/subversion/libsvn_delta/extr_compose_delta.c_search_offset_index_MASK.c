
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* offs; size_t length; } ;
typedef TYPE_1__ offset_index_t ;
typedef scalar_t__ apr_size_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static apr_size_t
FUNC_1(const offset_index_t *VAR_0,
                    apr_size_t VAR_1,
                    apr_size_t VAR_2)
{
  apr_size_t VAR_3, VAR_4, VAR_5;

  FUNC_0(VAR_1 < VAR_0->offs[VAR_0->length]);

  VAR_3 = 0;
  VAR_4 = VAR_0->length;






  if (VAR_2 < VAR_4)
    {
      if (VAR_1 < VAR_0->offs[VAR_2])
        VAR_4 = VAR_2;
      else if (VAR_1 < VAR_0->offs[VAR_2+1])
        return VAR_2;
      else
        VAR_3 = VAR_2+1;
    }



  for (VAR_5 = (VAR_3 + VAR_4)/2; VAR_3 != VAR_4; VAR_5 = (VAR_3 + VAR_4)/2)
    {
      if (VAR_1 < VAR_0->offs[VAR_5])
        VAR_4 = VAR_5;
      else
        VAR_3 = ++VAR_5;
    }

  --VAR_3;
  FUNC_0(VAR_0->offs[VAR_3] <= VAR_1 && VAR_1 < VAR_0->offs[VAR_3 + 1]);
  return VAR_3;
}
