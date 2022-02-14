
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ vpd_reg; } ;
struct TYPE_5__ {TYPE_1__ vpd; } ;
typedef TYPE_2__ pcicfgregs ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4, pcicfgregs *VAR_5, int VAR_6, uint32_t *VAR_7)
{
 int VAR_8 = VAR_3;

 FUNC_1((VAR_6 & 3) == 0, ("VPD register must by 4 byte aligned"));

 FUNC_3(VAR_5->vpd.vpd_reg + VAR_1, VAR_6, 2);

 while ((FUNC_2(VAR_5->vpd.vpd_reg + VAR_1, 2) & 0x8000) != 0x8000) {
  if (--VAR_8 < 0)
   return (VAR_0);
  FUNC_0(1);
 }
 *VAR_7 = (FUNC_2(VAR_5->vpd.vpd_reg + VAR_2, 4));

 return (0);
}
