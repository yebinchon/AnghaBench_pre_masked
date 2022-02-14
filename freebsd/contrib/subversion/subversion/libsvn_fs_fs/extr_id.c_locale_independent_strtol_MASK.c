
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static svn_boolean_t
FUNC_0(long *VAR_4,
                          const char* VAR_5,
                          const char** VAR_6)
{



  unsigned long VAR_7 = 0;
  while (1)
    {
      unsigned long VAR_8 = (unsigned char)*VAR_5 - (unsigned char)'0';
      unsigned long VAR_9;


      if (VAR_8 > 9)
        break;




      if (VAR_7 > VAR_3 / 10)
        return VAR_0;

      VAR_9 = VAR_7 * 10 + VAR_8;






      if (VAR_9 < VAR_7)
        return VAR_0;

      VAR_7 = VAR_9;
      ++VAR_5;
    }

  *VAR_6 = VAR_5;
  if (VAR_7 > VAR_1)
    return VAR_0;

  *VAR_4 = (long)VAR_7;

  return VAR_2;
}
