
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint64_t ;
typedef int apr_uint32_t ;
typedef int apr_size_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*,char*,int) ;

apr_size_t
FUNC_2(char * VAR_2, apr_uint64_t VAR_3)
{
  char VAR_4[VAR_0];
  apr_uint32_t VAR_5;
  char* VAR_6;




  if (VAR_3 < 100)
    {
      if (VAR_3 < 10)
        {
          VAR_2[0] = (char)('0' + VAR_3);
          VAR_2[1] = 0;
          return 1;
        }
      else
        {
          FUNC_0(VAR_2, VAR_1[(apr_size_t)VAR_3]);
          VAR_2[2] = 0;
          return 2;
        }
    }


  VAR_4[VAR_0 - 1] = 0;
  VAR_6 = &VAR_4[VAR_0 - 3];


  while (VAR_3 >= 100000000)
    {



      VAR_5 = (apr_uint32_t)(VAR_3 % 100000000);
      VAR_3 /= 100000000;

      FUNC_0(VAR_6 - 0, VAR_1[VAR_5 % 100]);
      VAR_5 /= 100;
      FUNC_0(VAR_6 - 2, VAR_1[VAR_5 % 100]);
      VAR_5 /= 100;
      FUNC_0(VAR_6 - 4, VAR_1[VAR_5 % 100]);
      VAR_5 /= 100;
      FUNC_0(VAR_6 - 6, VAR_1[VAR_5 % 100]);
      VAR_6 -= 8;
    }


  VAR_5 = (apr_uint32_t)(VAR_3);
  while (VAR_5 >= 100)
    {
      FUNC_0(VAR_6, VAR_1[VAR_5 % 100]);
      VAR_5 /= 100;
      VAR_6 -= 2;
    }


  FUNC_0(VAR_6, VAR_1[VAR_5]);


  if (VAR_5 < 10)
    ++VAR_6;


  FUNC_1(VAR_2, VAR_6, &VAR_4[VAR_0] - VAR_6);
  return &VAR_4[VAR_0] - VAR_6 - 1;
}
