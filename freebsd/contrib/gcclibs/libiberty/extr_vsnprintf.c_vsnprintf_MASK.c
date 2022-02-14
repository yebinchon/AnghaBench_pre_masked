
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,char const*,int ) ;

int
FUNC_4 (char *VAR_0, size_t VAR_1, const char *VAR_2, va_list VAR_3)
{
  char *VAR_4 = 0;
  int VAR_5 = FUNC_3 (&VAR_4, VAR_2, VAR_3);

  if (!VAR_4)
    return -1;
  if (VAR_5 < 0)
    {
      FUNC_0 (VAR_4);
      return -1;
    }

  VAR_5 = FUNC_2 (VAR_4);
  if (VAR_1 > 0)
    {
      if ((long) VAR_1 > VAR_5)
 FUNC_1 (VAR_0, VAR_4, VAR_5+1);
      else
        {
   FUNC_1 (VAR_0, VAR_4, VAR_1-1);
   VAR_0[VAR_1 - 1] = 0;
 }
    }
  FUNC_0 (VAR_4);
  return VAR_5;
}
