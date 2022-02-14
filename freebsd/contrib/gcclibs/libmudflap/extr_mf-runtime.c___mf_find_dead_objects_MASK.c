
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {uintptr_t low; uintptr_t high; } ;
typedef TYPE_1__ __mf_object_t ;
struct TYPE_6__ {unsigned int persistent_count; } ;


 unsigned int VAR_0 ;
 TYPE_1__*** VAR_1 ;
 unsigned int* VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static unsigned
FUNC_1 (uintptr_t VAR_4, uintptr_t VAR_5,
                        __mf_object_t **VAR_6, unsigned VAR_7)
{
  if (VAR_3.persistent_count > 0)
    {
      unsigned VAR_8 = 0;
      unsigned VAR_9 = 0;
      unsigned VAR_10 = 0;

      FUNC_0 (VAR_4 <= VAR_5);
      FUNC_0 (VAR_7 == 0 || VAR_6 != ((void*)0));



      VAR_9 = 0;
      while (VAR_9 < VAR_3.persistent_count)
        {
          VAR_8 = 0;

          for (VAR_10 = 0; VAR_10 <= VAR_0; VAR_10 ++)
            {
              unsigned VAR_11;
              unsigned VAR_12;

              VAR_11 = VAR_2 [VAR_10];
              for (VAR_12 = 0; VAR_12 <= VAR_9; VAR_12 ++)
                {
                  __mf_object_t *VAR_13;


                  if (VAR_11 > 0) VAR_11 --;
                  else VAR_11 = VAR_3.persistent_count - 1;

                  VAR_13 = VAR_1 [VAR_10][VAR_11];
                  if (VAR_13 && VAR_13->low <= VAR_5 && VAR_13->high >= VAR_4)
                    {

                      if (VAR_8 < VAR_7)
                        VAR_6 [VAR_8] = VAR_13;
                      VAR_8 ++;
                    }
                }
            }

          if (VAR_8)
            break;


          VAR_9 = (VAR_9 * 2) + 1;
        }

      return VAR_8;
    } else {
      return 0;
    }
}
