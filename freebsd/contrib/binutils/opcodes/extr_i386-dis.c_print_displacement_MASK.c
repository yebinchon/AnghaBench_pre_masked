
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_signed_vma ;


 int VAR_0 ;



 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_1, bfd_vma VAR_2)
{
  bfd_signed_vma VAR_3 = VAR_2;
  char VAR_4[30];
  int VAR_5, VAR_6 = 0;

  if (VAR_3 < 0)
    {
      VAR_1[VAR_6++] = '-';
      VAR_3 = -VAR_2;


      if (VAR_3 < 0)
 {
   switch (VAR_0)
     {
     case 128:
       FUNC_1 (VAR_1 + VAR_6, "0x8000000000000000");
       break;
     case 129:
       FUNC_1 (VAR_1 + VAR_6, "0x80000000");
       break;
     case 130:
       FUNC_1 (VAR_1 + VAR_6, "0x8000");
       break;
     }
   return;
 }
    }

  VAR_1[VAR_6++] = '0';
  VAR_1[VAR_6++] = 'x';

  FUNC_0 (VAR_4, VAR_3);
  for (VAR_5 = 0; VAR_4[VAR_5] == '0'; VAR_5++)
    continue;
  if (VAR_4[VAR_5] == '\0')
    VAR_5--;
  FUNC_1 (VAR_1 + VAR_6, VAR_4 + VAR_5);
}
