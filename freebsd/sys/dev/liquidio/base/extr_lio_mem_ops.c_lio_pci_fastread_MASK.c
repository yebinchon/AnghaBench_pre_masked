
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct octeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct octeon_device*,int) ;
 void* FUNC_1 (struct octeon_device*,int ) ;
 int FUNC_2 (struct octeon_device*,int ) ;

__attribute__((used)) static void
FUNC_3(struct octeon_device *VAR_1, uint32_t VAR_2,
   uint8_t *VAR_3, uint32_t VAR_4)
{

 while ((VAR_4) && ((unsigned long)VAR_2) & 7) {
  *(VAR_3++) = FUNC_1(VAR_1, VAR_2++);
  VAR_4--;
 }

 FUNC_2(VAR_1, VAR_0);

 while (VAR_4 >= 8) {
  *((uint64_t *)VAR_3) = FUNC_0(VAR_1, VAR_2);
  VAR_2 += 8;
  VAR_3 += 8;
  VAR_4 -= 8;
 }

 FUNC_2(VAR_1, VAR_0);

 while (VAR_4--)
  *(VAR_3++) = FUNC_1(VAR_1, VAR_2++);
}
