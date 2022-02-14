
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * caddr_t ;
struct TYPE_2__ {int probed; int ver; int major; int minor; void* product; void* maker; void* bios_vendor; int * addr; void* count; void* length; } ;


 int * const FUNC_0 (uintptr_t) ;
 void* FUNC_1 (int *,int) ;
 uintptr_t FUNC_2 (int *,int) ;
 void* FUNC_3 (int *,int) ;
 int VAR_0 ;
 uintptr_t VAR_1 ;
 TYPE_1__ VAR_2 ;
 int * FUNC_4 (int) ;
 void* FUNC_5 (int *,int) ;
 int * FUNC_6 (int * const,int ) ;

__attribute__((used)) static void
FUNC_7(const caddr_t VAR_3)
{
 caddr_t VAR_4, VAR_5;
 uintptr_t VAR_6;

 if (VAR_2.probed)
  return;
 VAR_2.probed = 1;


 VAR_4 = FUNC_6(VAR_3 ? VAR_3 : FUNC_0(VAR_1),
     VAR_0);
 if (VAR_4 == ((void*)0))
  return;

 VAR_2.length = FUNC_1(VAR_4, 0x16);
 VAR_6 = FUNC_2(VAR_4, 0x18);
 VAR_2.count = FUNC_1(VAR_4, 0x1c);
 VAR_2.ver = FUNC_3(VAR_4, 0x1e);

 if (VAR_2.ver != 0) {
  VAR_2.major = VAR_2.ver >> 4;
  VAR_2.minor = VAR_2.ver & 0x0f;
  if (VAR_2.major > 9 || VAR_2.minor > 9)
   VAR_2.ver = 0;
 }
 if (VAR_2.ver == 0) {
  VAR_2.major = FUNC_3(VAR_4, 0x06);
  VAR_2.minor = FUNC_3(VAR_4, 0x07);
 }
 VAR_2.ver = (VAR_2.major << 8) | VAR_2.minor;
 VAR_2.addr = FUNC_0(VAR_6);


 VAR_5 = FUNC_4(0x00);
 if (VAR_5 != ((void*)0)) {
  VAR_2.bios_vendor = FUNC_5(VAR_5, 0x04);
 }
 VAR_5 = FUNC_4(0x01);
 if (VAR_5 != ((void*)0)) {
  VAR_2.maker = FUNC_5(VAR_5, 0x04);
  VAR_2.product = FUNC_5(VAR_5, 0x05);
 }
}
