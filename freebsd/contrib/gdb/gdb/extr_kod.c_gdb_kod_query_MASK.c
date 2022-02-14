
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONGEST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int ,char*,char*,int ,int) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_2, char *VAR_3, int *VAR_4)
{
  LONGEST VAR_5 = 0;



  VAR_5 = FUNC_3 (&VAR_1, VAR_0,
    ((void*)0), ((void*)0), 0, 0);
  if (VAR_5 < 0)
    {
      FUNC_1 (VAR_3,
              "ERR: Kernel Object Display not supported by current target\n");
      return;
    }




  if (*VAR_4 == 0)
    {
      *VAR_4 = VAR_5;
      FUNC_1 (VAR_3, "OK");
      return;
    }


  if (VAR_5 > *VAR_4)
    VAR_5 = *VAR_4;



  if (FUNC_2 (VAR_2) >= VAR_5)
    FUNC_0 ("kod: query argument too long");


  if (FUNC_3 (&VAR_1, VAR_0,
      VAR_2, VAR_3, 0, VAR_5) < 0)
    FUNC_1 (VAR_3, "ERR: remote query failed");
}
