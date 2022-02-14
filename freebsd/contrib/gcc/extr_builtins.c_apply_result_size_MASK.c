
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_4 (int) ;
 int* VAR_5 ;

__attribute__((used)) static int
FUNC_5 (void)
{
  static int VAR_6 = -1;
  int VAR_7, VAR_8;
  enum machine_mode VAR_9;


  if (VAR_6 < 0)
    {
      VAR_6 = 0;

      for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
 if (FUNC_1 (VAR_8))
   {
     VAR_9 = VAR_5[VAR_8];

     FUNC_4 (VAR_9 != VAR_3);

     VAR_7 = FUNC_2 (VAR_9) / VAR_1;
     if (VAR_6 % VAR_7 != 0)
       VAR_6 = FUNC_0 (VAR_6, VAR_7) * VAR_7;
     VAR_6 += FUNC_3 (VAR_9);
     VAR_4[VAR_8] = VAR_9;
   }
 else
   VAR_4[VAR_8] = VAR_3;






    }
  return VAR_6;
}
