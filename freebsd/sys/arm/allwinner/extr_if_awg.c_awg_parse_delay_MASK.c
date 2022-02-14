
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int phandle_t ;
typedef int device_t ;
typedef int delay ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, uint32_t *VAR_4, uint32_t *VAR_5)
{
 phandle_t VAR_6;
 uint32_t VAR_7;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  return (VAR_1);
 *VAR_4 = *VAR_5 = 0;
 VAR_6 = FUNC_2(VAR_3);

 if (FUNC_0(VAR_6, "tx-delay", &VAR_7, sizeof(VAR_7)) >= 0)
  *VAR_4 = VAR_7;
 else if (FUNC_0(VAR_6, "allwinner,tx-delay-ps", &VAR_7,
     sizeof(VAR_7)) >= 0) {
  if ((VAR_7 % 100) != 0) {
   FUNC_1(VAR_3, "tx-delay-ps is not a multiple of 100\n");
   return (VAR_0);
  }
  *VAR_4 = VAR_7 / 100;
 }
 if (*VAR_4 > 7) {
  FUNC_1(VAR_3, "tx-delay out of range\n");
  return (VAR_2);
 }

 if (FUNC_0(VAR_6, "rx-delay", &VAR_7, sizeof(VAR_7)) >= 0)
  *VAR_5 = VAR_7;
 else if (FUNC_0(VAR_6, "allwinner,rx-delay-ps", &VAR_7,
     sizeof(VAR_7)) >= 0) {
  if ((VAR_7 % 100) != 0) {
   FUNC_1(VAR_3, "rx-delay-ps is not within documented domain\n");
   return (VAR_0);
  }
  *VAR_5 = VAR_7 / 100;
 }
 if (*VAR_5 > 31) {
  FUNC_1(VAR_3, "rx-delay out of range\n");
  return (VAR_2);
 }

 return (0);
}
