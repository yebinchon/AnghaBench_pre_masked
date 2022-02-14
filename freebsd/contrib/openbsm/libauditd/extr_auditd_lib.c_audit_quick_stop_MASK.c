
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int oldname ;
typedef int newname ;
typedef int TS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (char*,char*,int) ;
 char* FUNC_9 (char*,int ) ;
 int FUNC_10 (int ) ;

int
FUNC_11(void)
{
 int VAR_9;
 int VAR_10;
 char *VAR_11;
 time_t VAR_12;
 char VAR_13[VAR_4];
 char VAR_14[VAR_4];
 char VAR_15[VAR_7 + 1];




 if (FUNC_0(&VAR_10) != 0)
  return (-1);
 if (VAR_10 == VAR_1)
  return (0);




 (void) FUNC_2(VAR_3, ((void*)0));




 VAR_10 = VAR_0;
 if (FUNC_1(&VAR_10) != 0)
  return (-1);







 VAR_9 = FUNC_7(VAR_2, VAR_13, sizeof(VAR_13) - 1);
 if (VAR_9 < 0)
  return (-1);
 VAR_13[VAR_9++] = '\0';

 if (FUNC_4(VAR_12, VAR_15, sizeof(VAR_15)) != 0)
  return (-1);

 FUNC_8(VAR_14, VAR_13, sizeof(VAR_14));

 if ((VAR_11 = FUNC_9(VAR_14, VAR_5)) != ((void*)0)) {
  FUNC_5(VAR_11, VAR_15, VAR_6);
  if (FUNC_3(VAR_13, VAR_14) != 0)
   return (-1);
 } else
  return (-1);

 (void) FUNC_10(VAR_2);

 return (0);
}
