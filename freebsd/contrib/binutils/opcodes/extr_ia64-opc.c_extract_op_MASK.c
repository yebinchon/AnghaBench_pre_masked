
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* VAR_0 ;
 int FUNC_0 (int,int,int) ;

__attribute__((used)) static int
FUNC_1 (int VAR_1, int *VAR_2, unsigned int *VAR_3)
{
  int VAR_4 = 5;

  *VAR_3 = VAR_0[VAR_1];

  if ((*VAR_3) & 0x40)
    {
      VAR_2[0] = FUNC_0 (VAR_1, VAR_4, 5);
      VAR_4 += 5;
    }
  switch ((*VAR_3) & 0x30)
    {
    case 0x10:
      {
 VAR_2[1] = FUNC_0 (VAR_1, VAR_4, 8);
 VAR_4 += 8;
 VAR_2[1] += VAR_1;
 break;
      }
    case 0x20:
      {
 VAR_2[1] = FUNC_0 (VAR_1, VAR_4, 16);
 if (! (VAR_2[1] & 32768))
   {
     VAR_2[1] += VAR_1;
   }
 VAR_4 += 16;
 break;
      }
    case 0x30:
      {
 VAR_4--;
 VAR_2[2] = FUNC_0 (VAR_1, VAR_4, 12);
 VAR_4 += 12;
 VAR_2[2] |= 32768;
 break;
      }
    }
  if (((*VAR_3) & 0x08) && (((*VAR_3) & 0x30) != 0x30))
    {
      VAR_2[2] = FUNC_0 (VAR_1, VAR_4, 16);
      VAR_4 += 16;
      if (! (VAR_2[2] & 32768))
 {
   VAR_2[2] += VAR_1;
 }
    }
  return VAR_4;
}
