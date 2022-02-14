
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct desc_tag {int cksum; int id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

int
FUNC_1(struct desc_tag *VAR_1, uint16_t VAR_2)
{
 uint8_t *VAR_3;
 uint8_t VAR_4, VAR_5 = 0;

 VAR_3 = (uint8_t *)VAR_1;

 if (FUNC_0(VAR_1->id) != VAR_2)
  return (VAR_0);

 for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
  VAR_5 = VAR_5 + VAR_3[VAR_4];
 VAR_5 = VAR_5 - VAR_3[4];

 if (VAR_5 == VAR_1->cksum)
  return (0);

 return (VAR_0);
}
