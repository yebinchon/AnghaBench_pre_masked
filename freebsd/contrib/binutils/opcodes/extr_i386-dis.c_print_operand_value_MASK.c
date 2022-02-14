
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_signed_vma ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_2, int VAR_3, bfd_vma VAR_4)
{
  if (VAR_0 == VAR_1)
    {
      if (VAR_3)
 {
   char VAR_5[30];
   int VAR_6;
   VAR_2[0] = '0';
   VAR_2[1] = 'x';
   FUNC_1 (VAR_5, VAR_4);
   for (VAR_6 = 0; VAR_5[VAR_6] == '0' && VAR_5[VAR_6 + 1]; VAR_6++);
   FUNC_2 (VAR_2 + 2, VAR_5 + VAR_6);
 }
      else
 {
   bfd_signed_vma VAR_7 = VAR_4;
   char VAR_8[30];
   int VAR_9;
   if (VAR_7 < 0)
     {
       *(VAR_2++) = '-';
       VAR_7 = -VAR_4;

       if (VAR_7 < 0)
  {
    FUNC_2 (VAR_2, "9223372036854775808");
    return;
  }
     }
   if (!VAR_7)
     {
       FUNC_2 (VAR_2, "0");
       return;
     }

   VAR_9 = 0;
   VAR_8[29] = 0;
   while (VAR_7)
     {
       VAR_8[28 - VAR_9] = (VAR_7 % 10) + '0';
       VAR_7 /= 10;
       VAR_9++;
     }
   FUNC_2 (VAR_2, VAR_8 + 29 - VAR_9);
 }
    }
  else
    {
      if (VAR_3)
 FUNC_0 (VAR_2, "0x%x", (unsigned int) VAR_4);
      else
 FUNC_0 (VAR_2, "%d", (int) VAR_4);
    }
}
