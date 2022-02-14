
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptid_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (char*,char*,int,...) ;
 int FUNC_6 (int ,int) ;

char *
FUNC_7 (ptid_t VAR_1)
{
  static char VAR_2[100];


  if (!VAR_0)
    return FUNC_4 (VAR_1);

  if (FUNC_3 (VAR_1))
    {
      ptid_t VAR_3;

      VAR_3 = FUNC_6 (VAR_1, -2);

      if (FUNC_2 (VAR_3) == -1)
 FUNC_5 (VAR_2, "Thread %ld (defunct)", FUNC_1 (VAR_1));
      else if (FUNC_2 (VAR_3) != -2)
 FUNC_5 (VAR_2, "Thread %ld (LWP %ld)", FUNC_1 (VAR_1), FUNC_0 (VAR_3));
      else
 FUNC_5 (VAR_2, "Thread %ld        ", FUNC_1 (VAR_1));
    }
  else if (FUNC_0 (VAR_1) != 0)
    FUNC_5 (VAR_2, "LWP    %ld        ", FUNC_0 (VAR_1));
  else
    FUNC_5 (VAR_2, "process %d    ", FUNC_2 (VAR_1));

  return VAR_2;
}
