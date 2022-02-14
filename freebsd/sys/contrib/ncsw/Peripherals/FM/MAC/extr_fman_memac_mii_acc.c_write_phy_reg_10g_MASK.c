
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct memac_mii_access_mem_map {int mdio_data; int mdio_cfg; int mdio_addr; int mdio_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct memac_mii_access_mem_map *VAR_5,
 uint8_t VAR_6, uint8_t VAR_7, uint16_t VAR_8)
{
 uint32_t VAR_9;

 VAR_9 = FUNC_0(&VAR_5->mdio_cfg);

 VAR_9 &= VAR_1;


 VAR_9 |= VAR_3;

 VAR_9 |= VAR_2;
 FUNC_1(VAR_9, &VAR_5->mdio_cfg);


 while ((FUNC_0(&VAR_5->mdio_cfg)) & VAR_0)
  FUNC_2(1);


 FUNC_1(VAR_6, &VAR_5->mdio_ctrl);
 FUNC_1(VAR_7, &VAR_5->mdio_addr);
 FUNC_3();

 while ((FUNC_0(&VAR_5->mdio_cfg)) & VAR_0)
  FUNC_2(1);


 FUNC_1(VAR_8, &VAR_5->mdio_data);
 FUNC_3();


 while ((FUNC_0(&VAR_5->mdio_data)) & VAR_4)
  FUNC_2(1);
}
