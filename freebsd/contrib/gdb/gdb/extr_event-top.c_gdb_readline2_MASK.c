
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdb_client_data ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (char*,int) ;

void
FUNC_9 (gdb_client_data VAR_3)
{
  int VAR_4;
  char *VAR_5;
  int VAR_6 = 0;
  int VAR_7 = 80;
  static int VAR_8 = 0;







  if (!VAR_8 && !FUNC_0 (VAR_1))
    {
      FUNC_3 (VAR_1, ((void*)0));
      VAR_8 = 1;
    }

  VAR_5 = (char *) FUNC_7 (VAR_7);
  while (1)
    {


      VAR_4 = FUNC_1 (VAR_1 ? VAR_1 : VAR_2);

      if (VAR_4 == VAR_0)
 {
   if (VAR_6 > 0)



     break;
   FUNC_6 (VAR_5);
   FUNC_2) (0);
 }

      if (VAR_4 == '\n')

 break;
      VAR_5[VAR_6++] = VAR_4;
      while (VAR_6 >= VAR_7)
 {
   VAR_7 *= 2;
   VAR_5 = (char *) FUNC_8 (VAR_5, VAR_7);
 }
    }

  VAR_5[VAR_6++] = '\0';
  FUNC_2) (VAR_5);
}
