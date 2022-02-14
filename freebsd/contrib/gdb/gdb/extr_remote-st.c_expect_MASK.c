
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (char) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4 (char *VAR_3, int VAR_4)
{
  char *VAR_5 = VAR_3;
  int VAR_6;

  VAR_0++;
  while (1)
    {
      VAR_6 = FUNC_3 (VAR_2);
      if (VAR_6 == *VAR_5++)
 {
   if (*VAR_5 == '\0')
     {
       VAR_0--;
       return;
     }
 }
      else
 {
   if (!VAR_4)
     {
       FUNC_1 (VAR_3, 1, (VAR_5 - 1) - VAR_3, VAR_1);
       FUNC_2 ((char) VAR_6);
       FUNC_0 (VAR_1);
     }
   VAR_5 = VAR_3;
 }
    }
}
