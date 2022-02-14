
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int apr_uint32_t ;
typedef int apr_ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static unsigned int
FUNC_1(const char *VAR_1, apr_ssize_t *VAR_2)
{
    unsigned int VAR_3 = 0;
    const unsigned char *VAR_4 = (const unsigned char *)VAR_1;
    const unsigned char *VAR_5;
    apr_ssize_t VAR_6;

    if (*VAR_2 == VAR_0)
      *VAR_2 = FUNC_0(VAR_1);
    for (VAR_5 = VAR_4, VAR_6 = *VAR_2; VAR_6 >= 4; VAR_6-=4, VAR_5+=4)
      {
        VAR_3 = VAR_3 * 33 * 33 * 33 * 33
              + VAR_5[0] * 33 * 33 * 33
              + VAR_5[1] * 33 * 33
              + VAR_5[2] * 33
              + VAR_5[3];
      }

    for (; VAR_6; VAR_6--, VAR_5++)
        VAR_3 = VAR_3 * 33 + *VAR_5;

    return VAR_3;
}
