
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int,char*,int) ;

int
FUNC_6(void)
{
 int VAR_2, VAR_3, VAR_4[VAR_0];
 char VAR_5[512];

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if ((VAR_4[VAR_2] = FUNC_4("/dev/null", VAR_1)) == -1)
   FUNC_2(0);
 VAR_3 = VAR_2 - 1;


 FUNC_1(VAR_4[VAR_3]);
 if (FUNC_0(VAR_4[VAR_3]) != -1)
  FUNC_3("failed to close highest fd");


 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  if (FUNC_5(VAR_4[VAR_2], VAR_5, sizeof(VAR_5)) == -1)
   FUNC_3("closed descriptors it should not have");


 FUNC_1(VAR_4[0]);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (FUNC_0(VAR_4[VAR_2]) != -1)
   FUNC_3("failed to close from lowest fd");
 return 0;
}
