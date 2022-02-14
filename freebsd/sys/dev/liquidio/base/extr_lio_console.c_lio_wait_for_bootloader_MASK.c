
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct octeon_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct octeon_device*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct octeon_device*) ;
 scalar_t__ FUNC_2 (struct octeon_device*,int ) ;
 int FUNC_3 (int) ;

int
FUNC_4(struct octeon_device *VAR_2,
   uint32_t VAR_3)
{
 FUNC_0(VAR_2, "waiting %d0 ms for bootloader\n",
      VAR_3);

 if (FUNC_1(VAR_2))
  return (-1);

 while (VAR_3 > 0 &&
        FUNC_2(VAR_2,
    VAR_0) !=
        VAR_1) {
  if (--VAR_3 <= 0)
   return (-1);

  FUNC_3(10);
 }

 return (0);
}
