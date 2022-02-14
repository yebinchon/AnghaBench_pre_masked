
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_size_t ;
typedef int apr_int32_t ;



__attribute__((used)) static int
FUNC_0(const apr_int32_t *VAR_0, apr_size_t VAR_1,
        const apr_int32_t *VAR_2, apr_size_t VAR_3)
{
  const apr_size_t VAR_4 = (VAR_1 < VAR_3 ? VAR_1 : VAR_3);
  apr_size_t VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5)
    {
      const int VAR_6 = VAR_0[VAR_5] - VAR_2[VAR_5];
      if (VAR_6)
        return VAR_6;
    }
  return (VAR_1 == VAR_3 ? 0 : (VAR_1 < VAR_3 ? -1 : 1));
}
