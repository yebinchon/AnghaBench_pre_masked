
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, device_t VAR_2, int VAR_3, uint64_t *VAR_4,
    uint32_t *VAR_5)
{
 int VAR_6;

 if (VAR_3 < 64) {
  FUNC_4(VAR_2, "%s: map_msi for irq %d  - ignored",
      FUNC_3(VAR_1), VAR_3);
  return (VAR_0);
 }
 VAR_6 = (VAR_3 - 64) / 32;
 *VAR_4 = FUNC_0(0);
 *VAR_5 = FUNC_1(FUNC_2(VAR_6));
 return (0);
}
