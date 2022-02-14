
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d_print_info {int dummy; } ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (struct d_print_info*,char const) ;

__attribute__((used)) static void
FUNC_2 (struct d_print_info *VAR_0, const char *VAR_1, int VAR_2)
{
  const char *VAR_3;
  const char *VAR_4;

  VAR_4 = VAR_1 + VAR_2;
  for (VAR_3 = VAR_1; VAR_3 < VAR_4; ++VAR_3)
    {
      if (VAR_4 - VAR_3 > 3
   && VAR_3[0] == '_'
   && VAR_3[1] == '_'
   && VAR_3[2] == 'U')
 {
   unsigned long VAR_5;
   const char *VAR_6;

   VAR_5 = 0;
   for (VAR_6 = VAR_3 + 3; VAR_6 < VAR_4; ++VAR_6)
     {
       int VAR_7;

       if (FUNC_0 (*VAR_6))
  VAR_7 = *VAR_6 - '0';
       else if (*VAR_6 >= 'A' && *VAR_6 <= 'F')
  VAR_7 = *VAR_6 - 'A' + 10;
       else if (*VAR_6 >= 'a' && *VAR_6 <= 'f')
  VAR_7 = *VAR_6 - 'a' + 10;
       else
  break;

       VAR_5 = VAR_5 * 16 + VAR_7;
     }


   if (VAR_6 < VAR_4 && *VAR_6 == '_' && VAR_5 < 256)
     {
       FUNC_1 (VAR_0, VAR_5);
       VAR_3 = VAR_6;
       continue;
     }
 }

      FUNC_1 (VAR_0, *VAR_3);
    }
}
