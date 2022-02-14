
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4, uint32_t VAR_5, char *VAR_6)
{

 if (!FUNC_0(VAR_5))
  return (VAR_0);

 if (VAR_5 < VAR_3) {
  FUNC_1(VAR_6, VAR_2, "MIO_%d", VAR_5);
  VAR_6[VAR_2 - 1] = '\0';
 } else {
  FUNC_1(VAR_6, VAR_2, "EMIO_%d", VAR_5 - VAR_1);
  VAR_6[VAR_2 - 1] = '\0';
 }

 return (0);
}
