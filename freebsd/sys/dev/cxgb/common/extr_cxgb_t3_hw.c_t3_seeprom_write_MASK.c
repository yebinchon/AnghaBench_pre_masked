
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {unsigned int vpd_cap_addr; } ;
struct TYPE_10__ {TYPE_1__ pci; } ;
struct TYPE_11__ {TYPE_2__ params; } ;
typedef TYPE_3__ adapter_t ;


 int FUNC_0 (TYPE_3__*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,int*) ;
 int FUNC_4 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_5 (TYPE_3__*,scalar_t__,int ) ;

int FUNC_6(adapter_t *VAR_8, u32 VAR_9, u32 VAR_10)
{
 u16 VAR_11;
 int VAR_12 = VAR_1;
 unsigned int VAR_13 = VAR_8->params.pci.vpd_cap_addr;

 if ((VAR_9 >= VAR_0 && VAR_9 != VAR_2) || (VAR_9 & 3))
  return -VAR_3;

 FUNC_5(VAR_8, VAR_13 + VAR_7,
     FUNC_1(VAR_10));
 FUNC_4(VAR_8, VAR_13 + VAR_5,
     (u16)VAR_9 | VAR_6);
 do {
  FUNC_2(1);
  FUNC_3(VAR_8, VAR_13 + VAR_5, &VAR_11);
 } while ((VAR_11 & VAR_6) && --VAR_12);

 if (VAR_11 & VAR_6) {
  FUNC_0(VAR_8, "write to EEPROM address 0x%x failed\n", VAR_9);
  return -VAR_4;
 }
 return 0;
}
