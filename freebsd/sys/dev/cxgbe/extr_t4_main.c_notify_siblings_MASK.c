
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1, int VAR_2)
{
 device_t VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_5 == FUNC_6(VAR_1))
   continue;
  VAR_3 = FUNC_3(FUNC_5(VAR_1), FUNC_4(VAR_1),
      FUNC_7(VAR_1), VAR_5);
  if (VAR_3 == ((void*)0) || !FUNC_2(VAR_3))
   continue;
  if (VAR_2)
   VAR_4 = FUNC_1(VAR_3);
  else
   (void)FUNC_0(VAR_3);
  if (VAR_4)
   break;
 }
 return (VAR_4);
}
