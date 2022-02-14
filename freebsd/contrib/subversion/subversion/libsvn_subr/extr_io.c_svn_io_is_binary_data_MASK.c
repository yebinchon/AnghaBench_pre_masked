
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
typedef int apr_size_t ;


 int VAR_0 ;

svn_boolean_t
FUNC_0(const void *VAR_1, apr_size_t VAR_2)
{
  const unsigned char *VAR_3 = VAR_1;

  if (VAR_2 == 3 && VAR_3[0] == 0xEF && VAR_3[1] == 0xBB && VAR_3[2] == 0xBF)
    {


      return VAR_0;
    }
  if (VAR_2 > 0)
    {
      apr_size_t VAR_4;
      apr_size_t VAR_5 = 0;




      for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        {
          if (VAR_3[VAR_4] == 0)
            {
              VAR_5 = VAR_2;
              break;
            }
          if ((VAR_3[VAR_4] < 0x07)
              || ((VAR_3[VAR_4] > 0x0D) && (VAR_3[VAR_4] < 0x20))
              || (VAR_3[VAR_4] > 0x7F))
            {
              VAR_5++;
            }
        }

      return (((VAR_5 * 1000) / VAR_2) > 850);
    }

  return VAR_0;
}
