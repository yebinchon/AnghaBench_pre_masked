
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,scalar_t__*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, device_t VAR_3, uint32_t VAR_4, uint32_t *VAR_5)
{
 uint32_t VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  FUNC_1(VAR_2, VAR_3, 0, &VAR_6);
  if (VAR_6 == VAR_4) {
   if (VAR_5 != ((void*)0))
    *VAR_5 = VAR_7;
   return (0);
  }
  FUNC_0(1);
 }


 return (VAR_0);
}
