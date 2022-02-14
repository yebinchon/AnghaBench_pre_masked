
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(driver_t *VAR_2, device_t VAR_3)
{
 int VAR_4;


 for (VAR_1 = 0x80; (VAR_1 < 0xff); VAR_1 += 0x10) {
  if (VAR_0)
   FUNC_1("pnp_identify: Trying Read_Port at %x\n",
       (VAR_1 << 2) | 0x3);

  VAR_4 = FUNC_0(VAR_3);
  if (VAR_4)
   break;
 }
 if (VAR_0)
  FUNC_1("PNP Identify complete\n");
}
