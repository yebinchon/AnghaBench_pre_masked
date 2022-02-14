
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i387_fxsave {unsigned char* st_space; } ;



__attribute__((used)) static int
FUNC_0 (struct i387_fxsave *VAR_0, int VAR_1)
{
  unsigned char *VAR_2 = &VAR_0->st_space[VAR_1 * 16];
  unsigned int VAR_3;
  unsigned long VAR_4[2];
  int VAR_5;

  VAR_5 = VAR_2[7] & 0x80;
  VAR_3 = (((VAR_2[9] & 0x7f) << 8) | VAR_2[8]);
  VAR_4[0] = ((VAR_2[3] << 24) | (VAR_2[2] << 16) | (VAR_2[1] << 8) | VAR_2[0]);
  VAR_4[1] = (((VAR_2[7] & 0x7f) << 24) | (VAR_2[6] << 16)
                 | (VAR_2[5] << 8) | VAR_2[4]);

  if (VAR_3 == 0x7fff)
    {

      return (2);
    }
  else if (VAR_3 == 0x0000)
    {
      if (VAR_4[0] == 0x0000 && VAR_4[1] == 0x0000 && !VAR_5)
        {

          return (1);
        }
      else
        {

          return (2);
        }
    }
  else
    {
      if (VAR_5)
        {

          return (0);
        }
      else
        {

          return (2);
        }
    }
}
