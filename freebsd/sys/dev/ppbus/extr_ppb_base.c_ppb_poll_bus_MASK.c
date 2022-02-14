
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ppb_data {int ppc_lock; } ;
typedef scalar_t__ device_t ;
typedef int caddr_t ;


 int FUNC_0 (int) ;
 struct ppb_data* FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int,char*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

int
FUNC_5(device_t VAR_7, int VAR_8,
      uint8_t VAR_9, uint8_t VAR_10, int VAR_11)
{
 struct ppb_data *VAR_12 = FUNC_1(VAR_7);
 int VAR_13, VAR_14, VAR_15;
 uint8_t VAR_16;

 FUNC_3(VAR_7);


 for (VAR_14 = 0; VAR_14 < ((VAR_11 & VAR_5) ? VAR_8 : 1); VAR_14++) {
  for (VAR_13 = 0; VAR_13 < 10000; VAR_13++) {
   VAR_16 = FUNC_4(VAR_7);
   FUNC_0(1);
   if ((VAR_16 & VAR_9) == VAR_10)
    return (0);
  }
 }

 if (!(VAR_11 & VAR_5)) {
    for (VAR_13 = 0; VAR_8 == VAR_3 || VAR_13 < VAR_8-1; VAR_13++) {
  if ((FUNC_4(VAR_7) & VAR_9) == VAR_10)
   return (0);


  VAR_15 = FUNC_2((caddr_t)VAR_7, VAR_12->ppc_lock, VAR_2 |
      (VAR_11 == VAR_4 ? 0 : VAR_1), "ppbpoll", VAR_6/100);
  if (VAR_15 != VAR_0)
   return (VAR_15);
    }
 }

 return (VAR_0);
}
