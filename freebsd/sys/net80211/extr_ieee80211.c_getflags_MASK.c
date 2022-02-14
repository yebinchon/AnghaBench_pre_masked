
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int const*,scalar_t__*,int) ;
 int FUNC_1 (int const*,scalar_t__*,int,int) ;
 scalar_t__ FUNC_2 (int const*,int ) ;

__attribute__((used)) static void
FUNC_3(const uint8_t VAR_7[], uint32_t VAR_8[], int VAR_9, int VAR_10)
{

 VAR_8[0] = 0;
 if (FUNC_2(VAR_7, VAR_0) ||
     FUNC_2(VAR_7, VAR_3) ||
     FUNC_2(VAR_7, VAR_6)) {
  if (FUNC_2(VAR_7, VAR_1) ||
      FUNC_2(VAR_7, VAR_2) ||
      FUNC_2(VAR_7, VAR_4) ||
      FUNC_2(VAR_7, VAR_5))
   return;

  FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10);
 } else
  FUNC_0(VAR_7, VAR_8, VAR_9);
}
