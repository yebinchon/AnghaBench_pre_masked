
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;

char *
FUNC_1 (char *__restrict__ VAR_0, const char *__restrict__ VAR_1,
               size_t VAR_2, size_t VAR_3)
{
  char VAR_4;
  char *VAR_5 = VAR_0;

  do
    {
      if (VAR_3-- == 0)
        FUNC_0 ();
      VAR_4 = *VAR_0++;
    }
  while (VAR_4 != '\0');

  ++VAR_3;
  VAR_0 -= 2;

  if (VAR_2 >= 4)
    {
      size_t VAR_6 = VAR_2 >> 2;
      do
        {
          if (VAR_3-- == 0)
            FUNC_0 ();
          VAR_4 = *VAR_1++;
          *++VAR_0 = VAR_4;
          if (VAR_4 == '\0')
            return VAR_5;
          if (VAR_3-- == 0)
            FUNC_0 ();
          VAR_4 = *VAR_1++;
          *++VAR_0 = VAR_4;
          if (VAR_4 == '\0')
            return VAR_5;
          if (VAR_3-- == 0)
            FUNC_0 ();
          VAR_4 = *VAR_1++;
          *++VAR_0 = VAR_4;
          if (VAR_4 == '\0')
            return VAR_5;
          if (VAR_3-- == 0)
            FUNC_0 ();
          VAR_4 = *VAR_1++;
          *++VAR_0 = VAR_4;
          if (VAR_4 == '\0')
            return VAR_5;
          if (VAR_3-- == 0)
            FUNC_0 ();
          VAR_4 = *VAR_1++;
          *++VAR_0 = VAR_4;
          if (VAR_4 == '\0')
            return VAR_5;
        } while (--VAR_6 > 0);
      VAR_2 &= 3;
    }

  while (VAR_2 > 0)
    {
      if (VAR_3-- == 0)
        FUNC_0 ();
      VAR_4 = *VAR_1++;
      *++VAR_0 = VAR_4;
      if (VAR_4 == '\0')
        return VAR_5;
      VAR_2--;
    }

  if (VAR_4 != '\0')
    {
      if (VAR_3-- == 0)
        FUNC_0 ();
      *++VAR_0 = '\0';
    }

  return VAR_5;
}
