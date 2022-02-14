
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uInt ;
typedef int apr_uint32_t ;
typedef int apr_off_t ;
typedef int Bytef ;


 int VAR_0 ;
 int FUNC_0 (int,int const*,int ) ;

apr_uint32_t
FUNC_1(apr_uint32_t VAR_1, const char *VAR_2, apr_off_t VAR_3)
{







  if (VAR_3 >= 80)
    {




      return (apr_uint32_t)FUNC_0(VAR_1,
                                   (const Bytef *)VAR_2,
                                   (uInt)VAR_3);
    }
  else
    {
      const unsigned char *VAR_4 = (const unsigned char *)VAR_2;
      apr_uint32_t VAR_5 = VAR_1 & 0xFFFF;
      apr_uint32_t VAR_6 = VAR_1 >> 16;
      apr_uint32_t VAR_7;




      for (; VAR_3 >= 8; VAR_3 -= 8, VAR_4 += 8)
        {
          VAR_5 += VAR_4[0]; VAR_6 += VAR_5;
          VAR_5 += VAR_4[1]; VAR_6 += VAR_5;
          VAR_5 += VAR_4[2]; VAR_6 += VAR_5;
          VAR_5 += VAR_4[3]; VAR_6 += VAR_5;
          VAR_5 += VAR_4[4]; VAR_6 += VAR_5;
          VAR_5 += VAR_4[5]; VAR_6 += VAR_5;
          VAR_5 += VAR_4[6]; VAR_6 += VAR_5;
          VAR_5 += VAR_4[7]; VAR_6 += VAR_5;
        }



      while (VAR_3--)
        {
          VAR_7 = *VAR_4++;
          VAR_5 += VAR_7;
          VAR_6 += VAR_5;
        }

      return ((VAR_6 % VAR_0) << 16) | (VAR_5 % VAR_0);
    }
}
