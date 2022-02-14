
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_2, device_t VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_2 == ((void*)0) || FUNC_5(VAR_3) != VAR_2)
  return (0);
 if ((VAR_4 & VAR_0) != 0) {
  VAR_5 = FUNC_6(VAR_3) == VAR_1 ?
      FUNC_4(VAR_3) : 0;
 } else {
  VAR_5 = FUNC_3(VAR_2, VAR_3);
 }
 if (VAR_5 == 0) {
  if (!FUNC_9(VAR_3, 1000, 0)) {
   VAR_5 = FUNC_1(VAR_2, VAR_3);
   if (VAR_5 == 0)
    FUNC_8(VAR_3);
   FUNC_0(VAR_2, VAR_3);
  }
  if ((VAR_4 & VAR_0) != 0)
   FUNC_7(VAR_3);
  else
   FUNC_2(VAR_2, VAR_3);
 }
 return (VAR_5);
}
