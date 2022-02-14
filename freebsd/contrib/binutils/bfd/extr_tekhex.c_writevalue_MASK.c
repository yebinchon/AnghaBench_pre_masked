
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;


 int * VAR_0 ;

__attribute__((used)) static void
FUNC_0 (char **VAR_1, bfd_vma VAR_2)
{
  char *VAR_3 = *VAR_1;
  int VAR_4;
  int VAR_5;

  for (VAR_4 = 8, VAR_5 = 28; VAR_5; VAR_5 -= 4, VAR_4--)
    {
      if ((VAR_2 >> VAR_5) & 0xf)
 {
   *VAR_3++ = VAR_4 + '0';
   while (VAR_4)
     {
       *VAR_3++ = VAR_0[(VAR_2 >> VAR_5) & 0xf];
       VAR_5 -= 4;
       VAR_4--;
     }
   *VAR_1 = VAR_3;
   return;

 }
    }
  *VAR_3++ = '1';
  *VAR_3++ = '0';
  *VAR_1 = VAR_3;
}
