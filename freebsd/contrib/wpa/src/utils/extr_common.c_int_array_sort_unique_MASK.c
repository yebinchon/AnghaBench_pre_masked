
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int,int,int ) ;

void FUNC_2(int *VAR_1)
{
 int VAR_2;
 int VAR_3, VAR_4;

 if (VAR_1 == ((void*)0))
  return;

 VAR_2 = FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_2, sizeof(int), VAR_0);

 VAR_3 = 0;
 VAR_4 = 1;
 while (VAR_1[VAR_3] && VAR_1[VAR_4]) {
  if (VAR_1[VAR_3] == VAR_1[VAR_4]) {
   VAR_4++;
   continue;
  }
  VAR_1[++VAR_3] = VAR_1[VAR_4++];
 }
 if (VAR_1[VAR_3])
  VAR_3++;
 VAR_1[VAR_3] = 0;
}
