
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* data; int len; } ;
typedef TYPE_1__ svn_string_t ;
struct TYPE_9__ {int* data; } ;
typedef TYPE_2__ svn_membuf_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int const) ;

apr_size_t
FUNC_2(const svn_string_t *VAR_1,
                       const svn_string_t *VAR_2,
                       svn_membuf_t *VAR_3, apr_size_t *VAR_4)
{
  const char *VAR_5 = VAR_1->data;
  const char *VAR_6 = VAR_2->data;
  const apr_size_t VAR_7 = VAR_1->len;
  const apr_size_t VAR_8 = VAR_2->len;
  const apr_size_t VAR_9 = VAR_7 + VAR_8;
  const char *VAR_10 = VAR_5 + VAR_7;
  const char *VAR_11 = VAR_6 + VAR_8;
  apr_size_t VAR_12 = 0;


  while (VAR_5 < VAR_10 && VAR_6 < VAR_11 && *VAR_5 == *VAR_6)
    {
      ++VAR_5; ++VAR_6;
      ++VAR_12;
    }


  while (VAR_5 < VAR_10 && VAR_6 < VAR_11)
    {
      --VAR_10; --VAR_11;
      if (*VAR_10 != *VAR_11)
        {
          ++VAR_10; ++VAR_11;
          break;
        }

      ++VAR_12;
    }

  if (VAR_5 < VAR_10 && VAR_6 < VAR_11)
    {
      const apr_size_t VAR_13 = VAR_10 - VAR_5;
      const apr_size_t VAR_14 = VAR_11 - VAR_6;
      const apr_size_t VAR_15 = (VAR_13 > VAR_14 ? VAR_14 : VAR_13);
      apr_size_t *VAR_16, *VAR_17;
      const char *VAR_18;


      if (VAR_13 < VAR_14)
        {
          VAR_18 = VAR_5;
          VAR_5 = VAR_6;
          VAR_6 = VAR_18;

          VAR_18 = VAR_10;
          VAR_10 = VAR_11;
          VAR_11 = VAR_18;
        }



      FUNC_0(VAR_3, 2 * (VAR_15 + 1) * sizeof(apr_size_t));
      FUNC_1(VAR_3, (VAR_15 + 2) * sizeof(apr_size_t));
      VAR_17 = VAR_3->data;
      VAR_16 = VAR_17 + VAR_15 + 1;


      for (VAR_18 = VAR_5; VAR_18 < VAR_10; ++VAR_18)
        {
          apr_size_t VAR_19;
          for (VAR_19 = 1; VAR_19 <= VAR_15; ++VAR_19)
            {
              if (*VAR_18 == VAR_6[VAR_19-1])
                VAR_16[VAR_19] = VAR_17[VAR_19-1] + 1;
              else
                VAR_16[VAR_19] = (VAR_16[VAR_19-1] > VAR_17[VAR_19] ? VAR_16[VAR_19-1] : VAR_17[VAR_19]);
            }


          {
            apr_size_t *const VAR_20 = VAR_17;
            VAR_17 = VAR_16;
            VAR_16 = VAR_20;
          }
        }

      VAR_12 += VAR_17[VAR_15];
    }

  if (VAR_4)
    *VAR_4 = VAR_12;


  if (VAR_9)
    return ((2 * VAR_0 * VAR_12 + VAR_9/2) / VAR_9);
  else
    return VAR_0;
}
