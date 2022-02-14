
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int*) ;
 scalar_t__ FUNC_1 (int ,int ,int,int*) ;
 int FUNC_2 (int ,scalar_t__,int) ;

int
FUNC_3(device_t VAR_6, device_t VAR_7, int VAR_8, int *VAR_9)
{
 int VAR_10, VAR_11;
 uint16_t VAR_12;

 VAR_11 = FUNC_0(VAR_7, VAR_5, &VAR_10);
 if (VAR_11)
  return (VAR_11);





 for (;;) {
  VAR_12 = FUNC_2(VAR_7, VAR_10 + VAR_4, 2);
  if (VAR_8 == VAR_2 ||
      VAR_8 == VAR_1)
   VAR_12 &= 0xe000;
  else
   VAR_12 &= VAR_3;
  if (VAR_12 == VAR_8) {
   if (VAR_9 != ((void*)0))
    *VAR_9 = VAR_10;
   return (0);
  }


  if (FUNC_1(VAR_7, VAR_5, VAR_10, &VAR_10) != 0)
   break;
 }

 return (VAR_0);
}
