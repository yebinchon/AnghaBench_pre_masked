
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__,int) ;

int
FUNC_2(device_t VAR_3, device_t VAR_4, int VAR_5,
    int VAR_6, int *VAR_7)
{
 uint8_t VAR_8;

 FUNC_0(FUNC_1(VAR_4, VAR_6 + VAR_1, 1) == VAR_5,
     ("start capability is not expected capability"));

 VAR_8 = FUNC_1(VAR_4, VAR_6 + VAR_2, 1);
 while (VAR_8 != 0) {
  if (FUNC_1(VAR_4, VAR_8 + VAR_1, 1) == VAR_5) {
   if (VAR_7 != ((void*)0))
    *VAR_7 = VAR_8;
   return (0);
  }
  VAR_8 = FUNC_1(VAR_4, VAR_8 + VAR_2, 1);
 }

 return (VAR_0);
}
