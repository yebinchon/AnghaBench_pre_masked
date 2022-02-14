
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGEST ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char*,int,char*) ;
 int FUNC_6 (unsigned char*,int ,int) ;
 int FUNC_7 (int,unsigned char*) ;

char *
FUNC_8 (int VAR_1, char *VAR_2)
{
  ULONGEST VAR_3;
  unsigned char VAR_4[VAR_0];
  char *VAR_5;

  VAR_3 = 0;
  VAR_5 = VAR_2;
  while (VAR_5 && *VAR_5 != '\0')
    {
      if (*VAR_5 == '\r' || *VAR_5 == '\n')
        {
          while (*VAR_5 != '\0')
              VAR_5++;
          break;
        }
      if (FUNC_3 (*VAR_5))
        {
          VAR_5++;
          continue;
        }
      if (!FUNC_4 (*VAR_5) && *VAR_5 != 'x')
        {
          break;
        }

      VAR_3 <<= 4;
      VAR_3 += FUNC_2 (*VAR_5++);
    }
  FUNC_5 ("Supplying Register %d %s\n", VAR_1, VAR_2);

  if (VAR_3 == 0 && VAR_2 == VAR_5)
    FUNC_1 ("monitor_supply_register (%d):  bad value from monitor: %s.",
    VAR_1, VAR_2);



  FUNC_6 (VAR_4, FUNC_0 (VAR_1), VAR_3);

  FUNC_7 (VAR_1, VAR_4);

  return VAR_5;
}
