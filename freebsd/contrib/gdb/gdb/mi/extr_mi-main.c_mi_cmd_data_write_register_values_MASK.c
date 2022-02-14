
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;
typedef int LONGEST ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,void*,int ) ;
 int FUNC_5 (struct cleanup*) ;
 struct cleanup* FUNC_6 (int ,void*) ;
 int VAR_4 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (void*,int ,int ) ;
 int VAR_5 ;
 int FUNC_9 (int *,char*) ;
 int VAR_6 ;
 void* FUNC_10 (int ) ;

enum mi_cmd_result
FUNC_11 (char *VAR_7, char **VAR_8, int VAR_9)
{
  int VAR_10;
  int VAR_11;
  int VAR_12;
  LONGEST VAR_13;
  char VAR_14;







  VAR_12 = VAR_3;

  if (VAR_9 == 0)
    {
      FUNC_9 (&VAR_4,
   "mi_cmd_data_write_register_values: Usage: -data-write-register-values <format> [<regnum1> <value1>...<regnumN> <valueN>]");
      return VAR_2;
    }

  VAR_14 = (int) VAR_8[0][0];

  if (!VAR_5)
    {
      FUNC_9 (&VAR_4,
   "mi_cmd_data_write_register_values: No registers.");
      return VAR_2;
    }

  if (!(VAR_9 - 1))
    {
      FUNC_9 (&VAR_4,
   "mi_cmd_data_write_register_values: No regs and values specified.");
      return VAR_2;
    }

  if ((VAR_9 - 1) % 2)
    {
      FUNC_9 (&VAR_4,
   "mi_cmd_data_write_register_values: Regs and vals are not in pairs.");
      return VAR_2;
    }

  for (VAR_11 = 1; VAR_11 < VAR_9; VAR_11 = VAR_11 + 2)
    {
      VAR_10 = FUNC_3 (VAR_8[VAR_11]);

      if (VAR_10 >= 0
   && VAR_10 < VAR_12
   && FUNC_2 (VAR_10) != ((void*)0)
   && *FUNC_2 (VAR_10) != '\000')
 {
   void *VAR_15;
   struct cleanup *VAR_16;


   VAR_13 = FUNC_7 (VAR_8[VAR_11 + 1]);

   VAR_15 = FUNC_10 (VAR_0);
   VAR_16 = FUNC_6 (VAR_6, VAR_15);
   FUNC_8 (VAR_15, VAR_0, VAR_13);

   FUNC_4 (FUNC_0 (VAR_10), VAR_15, FUNC_1 (VAR_10));

   FUNC_5 (VAR_16);
 }
      else
 {
   FUNC_9 (&VAR_4, "bad register number");
   return VAR_2;
 }
    }
  return VAR_1;
}
