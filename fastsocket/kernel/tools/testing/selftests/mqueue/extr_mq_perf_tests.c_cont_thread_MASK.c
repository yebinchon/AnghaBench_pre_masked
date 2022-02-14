
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int ,char*,int,int*) ;
 scalar_t__ FUNC_1 (int ,char*,int,int ) ;
 int VAR_3 ;
 int FUNC_2 (char*,int,int) ;
 scalar_t__ FUNC_3 () ;
 int VAR_4 ;

void *FUNC_4(void *VAR_5)
{
 char VAR_6[VAR_0];
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  if (VAR_1[VAR_7] == FUNC_3())
   break;
 FUNC_2("\tStarted continuous mode thread %d on CPU %d\n", VAR_7,
        VAR_2[VAR_7]);
 while (1) {
  while(FUNC_1(VAR_4, VAR_6, sizeof(VAR_6), 0) == 0)
   ;
  FUNC_0(VAR_4, VAR_6, sizeof(VAR_6), &VAR_8);
 }
}
