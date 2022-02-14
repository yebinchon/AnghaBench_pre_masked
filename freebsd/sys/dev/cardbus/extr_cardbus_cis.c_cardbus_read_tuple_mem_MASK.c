
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct resource {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct resource*,scalar_t__) ;
 int FUNC_1 (struct resource*,scalar_t__,int *,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, struct resource *VAR_1, uint32_t VAR_2,
    uint32_t *VAR_3, int *VAR_4, int *VAR_5, uint8_t *VAR_6)
{
 int VAR_7;

 *VAR_4 = FUNC_0(VAR_1, VAR_2 + *VAR_3);
 *VAR_5 = FUNC_0(VAR_1, VAR_2 + *VAR_3 + 1);
 FUNC_1(VAR_1, *VAR_3 + VAR_2 + 2, VAR_6, *VAR_5);
 VAR_7 = 0;
 *VAR_3 += *VAR_5 + 2;
 return (VAR_7);
}
