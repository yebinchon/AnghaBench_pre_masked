
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int,int*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int) ;

int
FUNC_3(device_t VAR_7, device_t VAR_8, int VAR_9,
    int VAR_10, int *VAR_11)
{
 int VAR_12;
 uint16_t VAR_13;

 FUNC_0(FUNC_2(VAR_8, VAR_10 + VAR_1, 1) == VAR_6,
     ("start capability is not HyperTransport capability"));
 VAR_12 = VAR_10;





 for (;;) {

  if (FUNC_1(VAR_8, VAR_6, VAR_12, &VAR_12) != 0)
   break;

  VAR_13 = FUNC_2(VAR_8, VAR_12 + VAR_5, 2);
  if (VAR_9 == VAR_3 ||
      VAR_9 == VAR_2)
   VAR_13 &= 0xe000;
  else
   VAR_13 &= VAR_4;
  if (VAR_13 == VAR_9) {
   if (VAR_11 != ((void*)0))
    *VAR_11 = VAR_12;
   return (0);
  }
 }

 return (VAR_0);
}
