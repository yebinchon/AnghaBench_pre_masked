
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int driver_t ;
typedef int device_t ;
struct TYPE_4__ {scalar_t__ base; scalar_t__ width; } ;
struct TYPE_5__ {TYPE_1__ s; int u64; } ;
typedef TYPE_2__ cvmx_mio_boot_reg_cfgx_t ;
struct TYPE_6__ {scalar_t__ board_type; scalar_t__ compact_flash_common_base_addr; scalar_t__ compact_flash_attribute_base_addr; } ;


 int FUNC_0 (int ,int ,char*,int ) ;



 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 char** VAR_7 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 () ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static void FUNC_9 (driver_t *VAR_8, device_t VAR_9)
{
 int VAR_10;
 int VAR_11 = 0;
 cvmx_mio_boot_reg_cfgx_t VAR_12;
 uint64_t VAR_13;

     if (FUNC_7()->board_type == VAR_0)
  return;

 VAR_13 = FUNC_7()->compact_flash_common_base_addr;
 if (VAR_13 == 0)
  return;
 VAR_5 = FUNC_5(VAR_13);

        for (VAR_10 = 0; VAR_10 < 8; VAR_10++)
        {
                VAR_12.u64 = FUNC_6(FUNC_1(VAR_10));
                if (VAR_12.s.base == VAR_13 >> 16)
                {
   if (FUNC_7()->compact_flash_attribute_base_addr == 0)
    VAR_6 = 128;
   else
    VAR_6 = (VAR_12.s.width) ? 130 : 129;
                        FUNC_8("Compact flash found in bootbus region %d (%s).\n", VAR_10, VAR_7[VAR_6]);
                        break;
                }
        }

 switch (VAR_6)
 {
 case 129:
 case 128:

  while (FUNC_4(VAR_3) & VAR_2) {
   if ((VAR_11++) == VAR_1 ) {
    FUNC_8("Compact Flash not present\n");
    return;
                 }
   FUNC_2(VAR_4);
         }
  break;
 case 130:
 default:

  while (FUNC_3(VAR_3) & VAR_2) {
   if ((VAR_11++) == VAR_1 ) {
    FUNC_8("Compact Flash not present\n");
    return;
                 }
   FUNC_2(VAR_4);
         }
  break;
 }

 FUNC_0(VAR_9, 0, "cf", 0);
}
