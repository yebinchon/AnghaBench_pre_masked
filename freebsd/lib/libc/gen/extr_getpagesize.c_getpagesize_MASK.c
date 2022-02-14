
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int ,int*,size_t*,int *,int ) ;

int
FUNC_3(void)
{
 int VAR_4[2];
 static int VAR_5;
 size_t VAR_6;
 int VAR_7;

 if (VAR_5 != 0)
  return (VAR_5);

 VAR_7 = FUNC_0(VAR_0, &VAR_5, sizeof(VAR_5));
 if (VAR_7 == 0 && VAR_5 != 0)
  return (VAR_5);

 VAR_4[0] = VAR_1;
 VAR_4[1] = VAR_2;
 VAR_6 = sizeof VAR_5;
 if (FUNC_2(VAR_4, FUNC_1(VAR_4), &VAR_5, &VAR_6, ((void*)0), 0) == -1)
  return (VAR_3);

 return (VAR_5);
}
