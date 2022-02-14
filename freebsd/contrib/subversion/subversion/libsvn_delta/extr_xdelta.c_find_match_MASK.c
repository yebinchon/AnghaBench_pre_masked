
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blocks {int dummy; } ;
typedef int apr_uint32_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct blocks const*,int const,char const*) ;
 int FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static apr_size_t
FUNC_2(const struct blocks *VAR_2,
           const apr_uint32_t VAR_3,
           const char *VAR_4,
           apr_size_t VAR_5,
           const char *VAR_6,
           apr_size_t VAR_7,
           apr_size_t *VAR_8,
           apr_size_t *VAR_9,
           apr_size_t VAR_10)
{
  apr_size_t VAR_11, VAR_12 = *VAR_8;
  apr_size_t VAR_13, VAR_14;

  VAR_11 = FUNC_0(VAR_2, VAR_3, VAR_6 + VAR_12);


  if (VAR_11 == VAR_1)
    return 0;


  VAR_14 = VAR_5 - VAR_11 - VAR_0 < VAR_7 - VAR_12 - VAR_0
            ? VAR_5 - VAR_11 - VAR_0
            : VAR_7 - VAR_12 - VAR_0;
  VAR_13 = FUNC_1(VAR_4 + VAR_11 + VAR_0,
                                    VAR_6 + VAR_12 + VAR_0,
                                    VAR_14);



  while (VAR_11 > 0 && VAR_12 > VAR_10 && VAR_4[VAR_11-1] == VAR_6[VAR_12-1])
    {
      --VAR_11;
      --VAR_12;
      ++VAR_13;
    }

  *VAR_9 = VAR_11;
  *VAR_8 = VAR_12;

  return VAR_0 + VAR_13;
}
