
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct octeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct octeon_device*,char*) ;
 int FUNC_1 (struct octeon_device*,char*,int,int,int) ;
 int FUNC_2 (struct octeon_device*,int ) ;
 int FUNC_3 (struct octeon_device*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct octeon_device *VAR_4)
{
 uint32_t VAR_5, VAR_6, VAR_7;

 VAR_7 = FUNC_2(VAR_4, VAR_1);
 if (VAR_7 & VAR_2) {
  VAR_6 = 0;
  VAR_5 = 0;
  VAR_6 =
      FUNC_2(VAR_4,
         VAR_3);
  VAR_5 =
      FUNC_2(VAR_4,
         VAR_0);
  FUNC_1(VAR_4, "PCI-E Fatal error detected;\n"
       "\tdev_ctl_status_reg = 0x%08x\n"
       "\tuncorrectable_error_mask_reg = 0x%08x\n"
       "\tcorrectable_error_status_reg = 0x%08x\n",
       VAR_7, VAR_6,
       VAR_5);
 }

 VAR_7 |= 0xf;

 FUNC_0(VAR_4, "Enabling PCI-E error reporting..\n");
 FUNC_3(VAR_4, VAR_1, VAR_7);
}
