
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_xlpge_softc {scalar_t__ type; int mdio_bus; int base_addr; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct nlm_xlpge_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int,int,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct nlm_xlpge_softc *VAR_7;

 VAR_7 = FUNC_0(VAR_3);
 if (VAR_7->type == VAR_2)
  FUNC_1(VAR_7->base_addr, VAR_7->mdio_bus, VAR_0,
      VAR_1, VAR_4, VAR_5, VAR_6);

 return (0);
}
