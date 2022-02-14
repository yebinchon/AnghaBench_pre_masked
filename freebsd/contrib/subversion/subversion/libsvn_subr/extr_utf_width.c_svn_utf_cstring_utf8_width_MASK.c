
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

int
FUNC_2(const char *VAR_0)
{
  int VAR_1 = 0;

  if (*VAR_0 == '\0')
    return 0;


  if (!FUNC_1(VAR_0))
    return -1;




  while (*VAR_0)
    {
      apr_uint32_t VAR_2;
      int VAR_3;
      int VAR_4;
      int VAR_5;
      int VAR_6;

      if ((*VAR_0 & 0x80) == 0)
        {
          VAR_3 = 1;
          VAR_4 = 0x7f;
        }
      else if ((*VAR_0 & 0xe0) == 0xc0)
        {
          VAR_3 = 2;
          VAR_4 = 0x1f;
        }
      else if ((*VAR_0 & 0xf0) == 0xe0)
        {
          VAR_3 = 3;
          VAR_4 = 0x0f;
        }
      else if ((*VAR_0 & 0xf8) == 0xf0)
        {
          VAR_3 = 4;
          VAR_4 = 0x07;
        }
      else
        {

          return -1;
        }


      VAR_2 = (apr_uint32_t)(*VAR_0 & VAR_4);


      for (VAR_6 = 1; VAR_6 < VAR_3; VAR_6++)
        {
          VAR_2 <<= 6;
          VAR_2 |= (VAR_0[VAR_6] & 0x3f);
        }

      VAR_0 += VAR_3;


      VAR_5 = FUNC_0(VAR_2);
      if (VAR_5 == -1)
        return -1;
      VAR_1 += VAR_5;
    }

  return VAR_1;
}
