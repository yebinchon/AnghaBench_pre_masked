
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fwohci_softc {int * config_rom; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fwohci_softc*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct fwohci_softc*,int ) ;
 int FUNC_3 (struct fwohci_softc*,int ,int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct fwohci_softc *VAR_6)
{
 uint32_t VAR_7;

 FUNC_1(VAR_6->dev, "Initiate bus reset\n");





 FUNC_0(VAR_6, VAR_5, FUNC_4(VAR_6->config_rom[0]));
 FUNC_0(VAR_6, VAR_4, FUNC_4(VAR_6->config_rom[2]));






 VAR_7 = FUNC_2(VAR_6, VAR_1);
 VAR_7 |= VAR_0;
 VAR_7 = FUNC_3(VAR_6, VAR_1, VAR_7);





}
