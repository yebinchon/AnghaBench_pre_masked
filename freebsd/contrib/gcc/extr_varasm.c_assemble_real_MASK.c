
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int REAL_VALUE_TYPE ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ,unsigned int,int) ;
 unsigned int FUNC_5 (unsigned int,int) ;
 int FUNC_6 (long*,int *,int) ;

void
FUNC_7 (REAL_VALUE_TYPE VAR_1, enum machine_mode VAR_2, unsigned int VAR_3)
{
  long VAR_4[4] = {0, 0, 0, 0};
  int VAR_5;
  int VAR_6, VAR_7, VAR_8, VAR_9;
  VAR_8 = FUNC_2 (VAR_2);
  VAR_6 = VAR_8 * VAR_0;
  VAR_7 = FUNC_0 (VAR_6, 32);
  VAR_9 = 32 / VAR_0;

  FUNC_6 (VAR_4, &VAR_1, VAR_2);


  FUNC_4 (FUNC_1 (VAR_4[0]), FUNC_3 (VAR_8, VAR_9), VAR_3, 1);
  VAR_8 -= VAR_9;


  VAR_3 = FUNC_5 (VAR_3, 32);

  for (VAR_5 = 1; VAR_5 < VAR_7; VAR_5++)
    {
      FUNC_4 (FUNC_1 (VAR_4[VAR_5]), FUNC_3 (VAR_8, VAR_9), VAR_3, 1);
      VAR_8 -= VAR_9;
    }
}
