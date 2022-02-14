
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct memac_mii_access_mem_map {int mdio_cfg; int mdio_data; int mdio_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static uint32_t FUNC_3(struct memac_mii_access_mem_map *VAR_6,
 uint8_t VAR_7, uint8_t VAR_8, uint16_t *VAR_9)
{
 uint32_t VAR_10;


 VAR_10 = FUNC_0(&VAR_6->mdio_cfg);
 VAR_10 &= (VAR_1 | VAR_2);
 FUNC_1(VAR_10, &VAR_6->mdio_cfg);


 while ((FUNC_0(&VAR_6->mdio_cfg)) & VAR_0)
  FUNC_2(1);


 VAR_10 = (VAR_7 << VAR_3);
 VAR_10 |= VAR_8;
 VAR_10 |= VAR_4;
 FUNC_1(VAR_10, &VAR_6->mdio_ctrl);

 while ((FUNC_0(&VAR_6->mdio_cfg)) & VAR_0)
  FUNC_2(1);


 while ((FUNC_0(&VAR_6->mdio_data)) & VAR_5)
  FUNC_2(1);

 *VAR_9 = (uint16_t)FUNC_0(&VAR_6->mdio_data);


 return FUNC_0(&VAR_6->mdio_cfg);
}
