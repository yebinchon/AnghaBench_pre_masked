
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0 (const unsigned char *VAR_0)
{
  int VAR_1;
  unsigned int VAR_2;
  unsigned long VAR_3[2];

  VAR_1 = VAR_0[7] & 0x80;
  VAR_2 = (((VAR_0[9] & 0x7f) << 8) | VAR_0[8]);
  VAR_3[0] = ((VAR_0[3] << 24) | (VAR_0[2] << 16) | (VAR_0[1] << 8) | VAR_0[0]);
  VAR_3[1] = (((VAR_0[7] & 0x7f) << 24) | (VAR_0[6] << 16)
   | (VAR_0[5] << 8) | VAR_0[4]);

  if (VAR_2 == 0x7fff)
    {

      return (2);
    }
  else if (VAR_2 == 0x0000)
    {
      if (VAR_3[0] == 0x0000 && VAR_3[1] == 0x0000 && !VAR_1)
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
      if (VAR_1)
 {

   return (0);
 }
      else
 {

   return (2);
 }
    }
}
