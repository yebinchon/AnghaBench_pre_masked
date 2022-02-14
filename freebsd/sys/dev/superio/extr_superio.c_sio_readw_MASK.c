
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct resource {int dummy; } ;


 int FUNC_0 (struct resource*,scalar_t__) ;

__attribute__((used)) static uint16_t
FUNC_1(struct resource* VAR_0, uint8_t VAR_1)
{
 uint16_t VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 VAR_2 <<= 8;
 VAR_2 |= FUNC_0(VAR_0, VAR_1 + 1);
 return (VAR_2);
}
