
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 int FUNC_1 (int*,int ,int*,size_t*,int *,int ) ;

int
FUNC_2(void)
{
 int VAR_5[2], VAR_6;
 size_t VAR_7;
 static int VAR_8;

 if (VAR_8 != 0)
  return (VAR_8);

 if (VAR_3 > 0)
  VAR_8 = VAR_4[0];

 if (VAR_8 == 0) {
  VAR_5[0] = VAR_0;
  VAR_5[1] = VAR_1;
  VAR_7 = sizeof(VAR_6);
  if (FUNC_1(VAR_5, FUNC_0(VAR_5), &VAR_6, &VAR_7, ((void*)0), 0) == -1)
   VAR_8 = VAR_2;
  else
   VAR_8 = VAR_6;
 }

 return (VAR_8);
}
