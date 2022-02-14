
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct memac_mii_access_mem_map {int dummy; } ;
typedef enum enet_speed { ____Placeholder_enet_speed } enet_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct memac_mii_access_mem_map*,int ,int ,int *) ;
 int FUNC_1 (struct memac_mii_access_mem_map*,int ,int ,int *) ;

int FUNC_2(struct memac_mii_access_mem_map *VAR_3,
 uint8_t VAR_4, uint8_t VAR_5, uint16_t *VAR_6,
 enum enet_speed VAR_7)
{
 uint32_t VAR_8;


 if (VAR_7 == VAR_1)
  VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
 else
  VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);

 if (VAR_8 & VAR_2)
  return -VAR_0;
 return 0;
}
